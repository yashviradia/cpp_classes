#include <iostream>
using std::cout;
using std::endl;

#include "Person.h"
#include "Twitter.h"


void printTwitterHandle(Person const & p) {
    // dynamic casting - helps in testing polymorphismus.
    Twitter const * pt = dynamic_cast<Twitter const *>(&p);

    if (pt) {
        cout << pt->getTwitterHandle() << endl;
    }
    else {
        cout << "Casting not possible." << endl;
    }
}

int main() {

    Twitter elon("Elon", "Musk", "elonmusk");

    Person& p = elon;

    Twitter& revertTwitter = static_cast<Twitter&>(p);

    printTwitterHandle(p);


    return 0;
}