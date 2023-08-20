#include <iostream>
#include "Person.h"

using std::cout;
using std::endl;

int main() {

    Person tony("Tony", "Stark");
    Person pepper;

    pepper.setFirstName("Pepper");
    pepper.setLastName("Potts");

    tony.setAge(18);

    // This is function declaration
    // Person steve() - this is function 'steve' which gives output of datatype 'Person'

    // One of the biggest advantage of creating class is member functions.
    cout << pepper.getFirstName() << endl;

    return 0;
}
