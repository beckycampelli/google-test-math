// adapted from: 
// yolinux.com/TUTORIALS/Cpp-GoogleTest.html

#include "Addition.h"
#include "Multiply.h"

int 
Addition::add(const int x, const int y)
{
    return x + y;
}

int
Multiply::mult(const int x, const int y)
{
    return x * y;
}