#include <iostream>
#include "Foo.hpp"

using namespace std;

int main() {
    Foo f(12, 0);
    cout << "Hello, World! (" << f.square() << ")" << endl;
    return 0;

}

