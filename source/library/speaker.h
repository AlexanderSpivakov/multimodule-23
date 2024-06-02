#pragma once

#ifdef WIN32
#include <windows.h>
extern "C" __declspec(dllexport) void LogNameAge( const char* name, const char* age );
extern "C" __declspec(dllexport) void LogFormattedNameAge( const char* name, const char* age );
#else
extern "C" void LogNameAge( const char* name, const char* age );
  extern "C" void LogFormattedNameAge( const char* name, const char* age );
#endif