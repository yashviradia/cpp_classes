#include <iostream>
using std::cout;
using std::endl;

#include "Person.h"
#include "Twitter.h"

int main() {
    Twitter elon("Elon", "Musk", "elonmusk");

    Person& ref = elon;
    Person* ptr = &elon;

    cout << ptr->getFullName() << endl;



    return 0;
}