#include <iostream>
using std::cout;
using std::endl;

#include "Person.h"
#include "Twitter.h"

void printFullName(Person p) {
    cout << p.getFullName() << endl;
}

int main() {

    Twitter elon("Elon", "Musk", "elonmusk");

    // This is an example of slicing.
    // by passing Object of class 'Twitter', it will be converted to
    // Object of class 'Person'
    printFullName(elon);

    return 0;
}