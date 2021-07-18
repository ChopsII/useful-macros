#pragma once

//Useful to help make sure that functions don't have unexpected side-effects...
#define CONST(object) const_cast<const decltype(object)&>(object)