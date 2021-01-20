#include "DTS/Algebra.hpp"

int main()
{
    auto algebra = DTS::Algebra<float>();
    algebra.list_device();
    return 0;
}