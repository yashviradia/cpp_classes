// at first include standard libraries. Then import rest of header files.
#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

#include "../libPersons/Person.h"
#include "../libPersons/Twitter.h"
#include "House.h"

using Address = House*;

class Packet {
public:
    Address address;
};

int main() {

    // namespace 'Persons' is useful here, as other directories might have
    // class named 'Person'. It would then result to name collision.
    vector<House> wallStreet = {House(1), House(0), House(0)};

    Packet packet;
    packet.address = &wallStreet[0];

    (packet.address+1)->ringDoorbell();

    // This is function declaration
    // Person steve() - this is function 'steve' which gives output of datatype 'Person'

    // One of the biggest advantage of creating class is member functions.

    return 0;
}
