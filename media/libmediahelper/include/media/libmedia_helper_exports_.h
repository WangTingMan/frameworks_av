#pragma once

#if defined(WIN32) || defined(_MSC_VER)

#if defined(LIBMEDIAHELPER_EXPORTS)
#define LIBMEDIAHELPER_API __declspec(dllexport)
#else
#define LIBMEDIAHELPER_API __declspec(dllimport)
#endif  // defined(LIBMEDIAHELPER_EXPORTS)

#else  // defined(WIN32)
#if defined(LIBMEDIAHELPER_EXPORTS)
#define LIBMEDIAHELPER_API __attribute__((visibility("default")))
#else
#define LIBMEDIAHELPER_API
#endif  // defined(LIBMEDIAHELPER_EXPORTS)
#endif


