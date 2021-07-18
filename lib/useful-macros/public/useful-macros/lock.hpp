#pragma once

#include "unique.hpp"

#define LOCK(mutex) std::scoped_lock UNIQUE(){mutex}