#pragma once



#ifdef ZN_PLATFORM_WINDOWS
	#ifdef ZN_BUILD_DLL
		#define ZIONE_API __declspec(dllexport)
	#else 
		#define ZIONE_API __declspec(dllimport)
	#endif
#else
	#error Zione support errror!!! Please use Windows :)

	
#endif
