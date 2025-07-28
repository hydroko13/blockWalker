#pragma once
#include <Core/Common.h>



AppConfig::AppConfig(const int WINDOW_WIDTH, const int WINDOW_HEIGHT, const char* WINDOW_TITLE) {
	spdlog::info("Constructing AppConfig object...");
	this->WINDOW_WIDTH = WINDOW_WIDTH;
	this->WINDOW_HEIGHT = WINDOW_HEIGHT;
	this->WINDOW_TITLE = WINDOW_TITLE;
}

