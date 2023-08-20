// at first include standard libraries. Then import rest of header files.
#include <iostream>
using std::cout;
using std::endl;

#include "Person.h"
#include "Twitter.h"


int main() {

    Person tony("Tony", "Stark");
    Person pepper("Pepper", "Potts");

    Twitter twitt("Tony", "Stark", "Tony S.");

    cout << twitt.getFullName() << endl;

    // This is function declaration
    // Person steve() - this is function 'steve' which gives output of datatype 'Person'

    // One of the biggest advantage of creating class is member functions.

    return 0;
}
