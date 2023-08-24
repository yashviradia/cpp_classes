#include <set>
#include <iostream>

#include "Person.h"

int main() {
    using namespace std;

    set<Person const> persons = { Person("Elon", "Musk"), Person("Bruce", "Wayne")};

    for (auto const & p : persons) {
        cout << p.getFullName() << ", ";
    }

    return 0;
}