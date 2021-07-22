#pragma once

//TODO allow a flag that enables or disables including std headers
#include <utility>

#define FWD(object) std::forward<decltype(object)>(object)