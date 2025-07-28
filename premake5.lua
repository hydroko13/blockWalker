workspace "blockWalker"
    architecture "x64"

    configurations {
        "Debug",
        "Release"
    }

    startproject "main"



outputdir = "%{cfg.buildcfg}_%{cfg.system}_%{cfg.architecture}"

include "main"

function forceRemoveDir(path)
    if os.host() == "windows" then
        os.execute('rmdir /s /q "' .. path .. '"')
    else
        os.execute('rm -rf "' .. path .. '"')
    end
end



newaction {
    trigger = "vs-clean",
    description = "Remove all visual studio generated binaries, and visual studio related files.",
    execute = function()
        print("Removing binaries.")
        forceRemoveDir("./bin")
        print("Removing intermediate binarie.")
        forceRemoveDir("./bin-int")
        print("Removing visual studio solution.")
        os.remove("**.sln")
        print("Removing visual studio projects.")
        os.remove("**.vcxproj")
        print("Removing visual studio project filters.")
        os.remove("**.vcxproj.filters")
        print("Removing visual studio project user settings.")
        os.remove("**.vcxproj.user")
        forceRemoveDir("./.vs")
        print("Succesfully removed all visual studio files...")
        

    end


}
       