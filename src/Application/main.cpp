#include <Core/Common.h>

int main() {

	spdlog::info("Program started!");

	// Construct AppConfig and App object
	spdlog::info("Begin Constructing AppConfig & App...");
	AppConfig appConfig(800, 800, "blockWalker");
	App app(&appConfig);


	// Initialize the application
	spdlog::info("Initializing application...");
	try {
		app.initialize();
	}
	catch (const InitializationFailureException& e) {
		spdlog::error(e.what());
		app.cleanUp();
		spdlog::info("Exiting...");
		return -1;

	}
	


	// Run the gameloop
	spdlog::info("Running gameloop...");
	app.run();


	// Clean up everything
	spdlog::info("Cleaning up...");
	app.cleanUp();
	// Exit
	spdlog::info("Exiting...");
	return 0;

}