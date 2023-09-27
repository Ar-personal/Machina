#pragma once
#ifdef MN_PLATFORM_WINDOWS
	#ifdef MN_BUILD_DLL
		#define MACHINA_API _declspec(dllexport)
	#else 
		#define MACHINA_API _declspec(dllimport)
	#endif
#endif // MN_PLATFORM_WINDOWS
