// at first include standard libraries. Then import rest of header files.
#include <iostream>
using std::cout;
using std::endl;

#include "../libPersons/Person.h"
#include "../libPersons/Twitter.h"


int main() {

    // namespace 'Persons' is useful here, as other directories might have
    // class named 'Person'. It would then result to name collision.
    Persons::Person const tony("Tony", "Stark");
    Persons::Person const pepper("Pepper", "Potts");

    cout << tony.getID() << endl;
    cout << pepper.getID() << endl;

    // This is function declaration
    // Person steve() - this is function 'steve' which gives output of datatype 'Person'

    // One of the biggest advantage of creating class is member functions.

    return 0;
}
