#pragma once

#define CONCAT_IMP(A, B) A ## B

#define CONCAT(A, B) CONCAT_IMPL(A, B)