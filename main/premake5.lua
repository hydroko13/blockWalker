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
        "include/**.h",
        "resources/images/**.png", -- I won't need this until later
        "resources/shaders/**.glsl",  -- I'll need this pretty soon
        "resources/audio/**.ogg",  -- I won't need this until MUCH later
        "resources/lang/**.json", -- I won't need this until MUCH later
    }

    filter { "files:resources/**.*" }
        buildaction "Copy"

    filter {}

    includedirs {
        "include"
    }

    libdirs {
        "lib"
    }

    defines {
        "WINDOWS"
    }
    filter { "system:windows" } 
        links {
            "glfw3",
            
            "opengl32"
            
        }

    filter { "system:linux" }
        links {
            "glfw3",
            "GL",
            "GLU"
        }
        
    filter { "configurations:Debug"}
        filter { "system:windows" } 
            buildoptions "/MTd"
        
        runtime "Debug"
        symbols "on"

    
        

    filter {"configurations:Release"}
        filter { "system:windows" } 
            buildoptions "/MT"
        
        runtime "Release"
        optimize "on"

    filter { "system:linux" }
        buildoptions {"-Wall", "-Wextra"}
    



    