workspace "Workspace"
    architecture"x64"

    configurations {
        "Debug",
        "Release"
    }

    startproject "main"

outputdir = "%{cfg.buildcfg}_%{cfg.system}_%{cfg.architecture}"

include "main"

