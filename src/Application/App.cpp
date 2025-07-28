#include <Core/Common.h>

void App::windowResize(int width, int height) {



	spdlog::info("Window resized to width: {}, height: {}", width, height);
	glViewport(0, 0, width, height);

}


App::App(AppConfig* appconfig) {

	spdlog::info("Constructing App object...");


	this->appConfig = appconfig;

}

void App::initialize() {

	spdlog::info("Initializing GLFW.");
	glfwInit();
	spdlog::info("Specifying OpenGL context version (OPENGL 3.3) using window hints...");
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	spdlog::info("Specifying OpenGL context profile (Core) using window hints...");
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	spdlog::info("Creating GLFWwindow object...");
	window = glfwCreateWindow(800, 800, "Hello world", NULL, NULL);
	
	if (window == NULL)
	{

		throw InitializationFailureException("GLFW window");
	}
	else {
		spdlog::info("Succesfully created GLFW window!");
	}



	spdlog::info("Setting OpenGL context current...");
	glfwMakeContextCurrent(window);

	spdlog::info("Initializing GLAD...");

	if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {


		throw InitializationFailureException("GLAD");

	}
	else {

		spdlog::info("Succesfully initialized GLAD!");

	}


	spdlog::info("Setting OpenGL viewport size...");

	glViewport(0, 0, 800, 800);

	spdlog::info("Setting GLFW window resize callback...");

	glfwSetWindowUserPointer(this->window, this);

	// I originally tried to set the framebuffer callback to the windowResize method of App, but that didn't work
	// Maybe its because GLFW is a C library and not a C++ library, so it doesn't recognize class methods
	glfwSetFramebufferSizeCallback(window, [](GLFWwindow* window, int width, int height) {

		App* app = static_cast<App*>(glfwGetWindowUserPointer(window));

		if (app) {

			app->windowResize(width, height);

		}


		}
	);

	spdlog::info("Initialization done!");

}

void App::run() {
	spdlog::info("Starting Gameloop...");

	while (!glfwWindowShouldClose(this->window)) {

		glfwSwapBuffers(this->window);
		glfwPollEvents();
	}

	spdlog::info("Window closed...");

}

void App::cleanUp() {
	glfwTerminate();

}

