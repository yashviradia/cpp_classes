#include <iostream>

using std::cout;
using std::endl;

class Functor {
public:
    int x;
    int operator() (int val) { return x + val; };
};

int main() {

    auto lambda = [](int val){ return val; };

    Functor func;
    func.x = 5;

    cout << func(7) << endl;

    return 0;
}