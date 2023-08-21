#include <iostream>
using std::cout;
using std::endl;

#include "Person.h"
#include "Twitter.h"


void printTwitterHandle(Person const & p) {
    // static casting
    Twitter const & referenceTwitter = static_cast<Twitter const &>(p);
}

int main() {

    Twitter elon("Elon", "Musk", "elonmusk");

    Person& p = elon;

    Twitter& revertTwitter = static_cast<Twitter&>(p);



    return 0;
}