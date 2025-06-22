#pragma once

#if defined(WIN32) || defined(_MSC_VER)

#if defined(LIBAUDIOAIDLCONVERSIONCOMMONNDK_EXPORTS)
#define LIBAUDIOAIDLCONVERSIONCOMMONNDK_API __declspec(dllexport)
#else
#define LIBAUDIOAIDLCONVERSIONCOMMONNDK_API __declspec(dllimport)
#endif  // defined(LIBAUDIOAIDLCONVERSIONCOMMONNDK_EXPORTS)

#else  // defined(WIN32)
#if defined(LIBAUDIOAIDLCONVERSIONCOMMONNDK_EXPORTS)
#define LIBAUDIOAIDLCONVERSIONCOMMONNDK_API __attribute__((visibility("default")))
#else
#define LIBAUDIOAIDLCONVERSIONCOMMONNDK_API
#endif  // defined(LIBAUDIOAIDLCONVERSIONCOMMONNDK_EXPORTS)
#endif

#ifdef _WIN32
#ifdef interface
#undef interface
#endif
#endif
