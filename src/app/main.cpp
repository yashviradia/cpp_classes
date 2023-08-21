#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

#include "Accumulator.h"

int main() {

    Accumulator<int> acc(0);
    acc.add(1);
    acc.add(9);
    cout << acc.getValue() << endl;
    

    return 0;
}