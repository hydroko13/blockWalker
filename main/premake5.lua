project "main"
    kind "ConsoleApp"
    language "C++"
    cppdialect "C++17"

    staticruntime "on"

    targetdir("../bin/" .. outputdir .. "/%{prj.name}")
    objdir('../bin-int/' .. outputdir .. "/%{prj.name}")


    files {
        "cpp/**.cpp",
        "cpp/**.c",
        "include/**.h"

    }

    includedirs {
        "include"
    }

    libdirs {
        "lib"
    }

    defines {
        "WINDOWS"
    }

    links {
        "glfw3",
        "opengl32"
    }
    
    filter { "configurations:Debug" }
        buildoptions "/MTd"
        runtime "Debug"
        symbols "on"


    filter {"configurations:Release"}
        buildoptions "/MT"
        runtime "Release"
        optimize "on"



    