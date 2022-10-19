#pragma once

#ifndef COMMON_HPP
#define COMMON_HPP

#ifndef likely
#define likely(x) __builtin_expect(!!(x), 1)
#define unlikely(x) __builtin_expect(!!(x), 0)
#endif

#define ATTRIBUTE_NEVER_INLINE __attribute__((noinline))
#define ATTRIBUTE_ALWAYS_INLINE __attribute__((always_inline))
#define ATTRIBUTE_HIDDEN __attribute__((visibility("hidden")))
#define ATTRIBUTE_EXPORT __attribute__((visibility("default")))
#define ATTRIBUTE_ALIGNED(s) __attribute__((aligned(s)))
#define CACHELINE_SIZE 64
#define CACHELINE_ALIGNED ATTRIBUTE_ALIGNED(CACHELINE_SIZE)
#define CACHELINE_ALIGNED_FN CACHELINE_ALIGNED

#define USE_COMPRESSED_PTRS 0
#define USE_SIZE_CACHES 0  // 1

//#define __DEBUG
#ifdef __DEBUG
#define DEBUG(format, args...) printf("FILE: " __FILE__ ", LINE: %d: " format "\n", __LINE__, ##args)  // __VA_ARGS__ -> args
#else 
#define DEBUG(format, ...)
#endif

#endif
