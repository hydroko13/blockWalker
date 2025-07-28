cmake_minimum_required(VERSION 3.20)

set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")


add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/vendor/glfw-3.4")
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/vendor/spdlog")





project(blockWalker VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)




file(GLOB_RECURSE SRC_FILES CONFIGURE_DEPENDS
     "${CMAKE_CURRENT_SOURCE_DIR}/src/**.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/vendor/glad/src/glad.c"
)

add_executable(blockWalker "${SRC_FILES}")



target_include_directories(blockWalker PUBLIC
	"${CMAKE_CURRENT_SOURCE_DIR}/include"
	"${CMAKE_CURRENT_SOURCE_DIR}/vendor/glfw-3.4/include"
	"${CMAKE_CURRENT_SOURCE_DIR}/vendor/spdlog/include"
	"${CMAKE_CURRENT_SOURCE_DIR}/vendor/glad/include"
)

target_link_libraries(blockWalker PRIVATE glfw spdlog)


