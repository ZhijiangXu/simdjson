#define SIMDJSON_IMPLEMENTATION_FALLBACK 0
#define SIMDJSON_IMPLEMENTATION_WESTMERE 0
#define SIMDJSON_IMPLEMENTATION_AMD64 0

#include <iostream>
#include <sstream>
#include <random>
#include <vector>

#include "simdjson.h"
#include "simdjson.cpp"

#if SIMDJSON_IMPLEMENTATION_HASWELL
#define SIMDJSON_IMPLEMENTATION haswell
#endif // SIMDJSON_IMPLEMENTATION_HASWELL

SIMDJSON_PUSH_DISABLE_ALL_WARNINGS
#include <benchmark/benchmark.h>
SIMDJSON_POP_DISABLE_WARNINGS

#include "kostya/ondemand.h"
#include "kostya/iter.h"
#include "kostya/dom.h"

BENCHMARK_MAIN();
