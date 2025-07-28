#pragma once
#include <Core/Common.h>

class AppConfig {
	public:
		int WINDOW_WIDTH;
		int WINDOW_HEIGHT;
		const char* WINDOW_TITLE;

		AppConfig(const int WINDOW_WIDTH, const int WINDOW_HEIGHT, const char* WINDOW_TITLE);

};