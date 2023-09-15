#pragma once
#include "Application.h"

#ifdef SB_PLATFORM_WINDOWS

extern SHIROBAKO::Application* SHIROBAKO::CreateApplication();

int main(int argc, char** argv)
{
	printf("SHIROBAKO Engine Start!\n");
	auto app = SHIROBAKO::CreateApplication();
	app->Run();
	delete app;
}

#endif // SB_PLATFORM_WINDOW
