#include "Foo.hpp"

Foo::Foo(int val1, int val2) : i(val1), j(val2) {
}

Foo::~Foo() {
}

int Foo::square() {
    return i*i;
};

