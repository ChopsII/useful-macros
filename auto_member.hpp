#pragma once

//Auto Non-Static Data Member Initializer

#define AUTO(name, ...) decltype(__VA_ARGS__) name = __VA_ARGS__;