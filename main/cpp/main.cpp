#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <spdlog/spdlog.h>


void framebuffer_size_callback(GLFWwindow* window, int width, int height) {
    glViewport(0, 0, width, height);
}

int main() {

    spdlog::info("Project started.");

    
    spdlog::info("Initializing GLFW.");
    glfwInit();
    spdlog::info("Specifying OpenGL context version (OPENGL 3.3) using window hints...");
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    spdlog::info("Specifying OpenGL context profile (Core) using window hints...");
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    spdlog::info("Creating GLFWwindow object...");
    GLFWwindow* window = glfwCreateWindow(800, 800, "Hello world", NULL, NULL);
    if (window == NULL)
    {
        spdlog::error("Failed to create GLFW window!");
        glfwTerminate();
        return -1;
    } else {
        spdlog::info("Succesfully created GLFW window!");
    }   

    spdlog::info("Setting OpenGL context current...");
    glfwMakeContextCurrent(window);

    spdlog::info("Initializing GLAD...");
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
    
        spdlog::error("Failed to initialize GLAD!");
        glfwTerminate();
        return -1;
        
    } else {

        spdlog::info("Succesfully initialized GLAD!");

    }

    spdlog::info("Setting OpenGL viewport size...");

    glViewport(0, 0, 800, 800);

    spdlog::info("Setting GLFW window resize callback...");

    glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);

    spdlog::info("Initialization done!");
    spdlog::info("Running gameloop...");


    // GAMELOOP

    while (!glfwWindowShouldClose(window)) {
        glfwSwapBuffers(window);
        glfwPollEvents();


    }

    // EXIT

    spdlog::info("Program closed!");
    spdlog::info("Exiting...");

    glfwTerminate();

    return 0;
}