#pragma once

#ifdef SB_PLATFORM_WINDOWS
	#ifdef SB_BUILD_DLL
		#define SHIROBAKO_API __declspec(dllexport)
	#else // SB_BUILD_DLL
		#define SHIROBAKO_API __declspec(dllimport)
	#endif
#else
	#error SHIROBAKO only support Windows!
#endif // SB_PLATFORM_WINDOWS
