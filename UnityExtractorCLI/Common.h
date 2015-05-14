/*
 * Common C++ 11 Header
 * Author: Zihao Zhang
 * Email: zzh8829@gmail.com
 * Website: zihao.ca
 */

#ifndef COMMON_H
#define COMMON_H

// C++ 11 check
#if __cplusplus <= 199711L
    #error C++11 compliant compiler is required
#endif

// C headers
#include <cassert>
#include <cctype>
#include <cfenv>
#include <cfloat>
#include <cinttypes>
#include <climits>
#include <clocale>
#include <cmath>
#include <cstdarg>
#include <cstddef>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <cwchar>
#include <cwctype>

// C++ Containers
#include <array>
#include <bitset>
#include <deque>
#include <forward_list>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <unordered_map>
#include <unordered_set>
#include <vector>

// C++ Input/Output
#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <streambuf>

// C++ Miscellaneous
#include <algorithm>
#include <chrono>
#include <complex>
#include <exception>
#include <functional>
#include <initializer_list>
#include <iterator>
#include <limits>
#include <locale>
#include <memory>
#include <new>
#include <numeric>
#include <random>
#include <ratio>
#include <regex>
#include <stdexcept>
#include <string>
#include <system_error>
#include <tuple>
#include <typeindex>
#include <typeinfo>
#include <type_traits>
#include <utility>
#include <valarray>

// Operating System
#if defined(_WIN32) || defined(_WIN64)
    #define PLATFORM_WINDOWS
    #include <windows.h>
    #include <direct.h>
    #define getcwd _getcwd
#elif defined(__linux__)
    #define PLATFORM_LINUX
#elif defined(__APPLE__)
    #define PLATFORM_OSX
#endif

#if defined(PLATFORM_LINUX) || defined(PLATFORM_OSX)
    #include <unistd.h>
#endif

// Compiler
#if defined(__clang__)
    #define COMPILER_CLANG
#elif defined(__GNUC__)
    #define COMPILER_GCC
#elif defined(_MSC_VER)
    #define COMPILER_VC
#endif

#if defined(COMPILER_VC)
    #include <intrin.h>
    #define bswap32 _byteswap_ulong
    #define bswap64 _byteswap_uint64
#elif defined(COMPILER_GCC)
    #define bswap32 __builtin_bswap32
    #define bswap64 __builtin_bswap64
#endif

#endif // COMMON_H
