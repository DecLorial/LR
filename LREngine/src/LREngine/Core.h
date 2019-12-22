#pragma once

#ifdef LR_PLATFORM_WINDOWS

	#ifdef LR_BUILD_DLL
		#define LRENGINE_API __declspec(dllexport)
	#else
		#define LRENGINE_API __declspec(dllimport)
	#endif // DEBUG

#else

	#error	LRENGINE only supports Windows!

#endif


