#pragma once
#include <Core/Common.h>

class App {

    private:
        GLFWwindow* window;
        AppConfig* appConfig;

    public:

        
        
        
    
        App(AppConfig* appconfig);

        void windowResize(int width, int height);

        void initialize();

        void run();

        void cleanUp();

};


