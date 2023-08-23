#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

#include "Accumulator.h"

#include "Person.h"

int main() {

    Accumulator<Person> acc(Person("Elon", "Musk"));
    acc.add(Person("Jeff", "Musk"));
    cout << acc.getValue().getFullName() << endl;


    return 0;
}