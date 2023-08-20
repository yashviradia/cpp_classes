#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;

#include "Person.h"

// implement constructor Person from class 'Person'
// Recommended: not to create a lot of constructors.

// This is a delegating constructor.
Person::Person()
: Person("Tony", "Stark")
{

}

// Constructors are also kind of functions.
Person::Person(string first, string last)
: firstName(first), lastName(last)
{
    cout << "Hi, I'm " + printFullName() << endl;
}

string Person::getFirstName() {
    return firstName;
}

void Person::setFirstName(std::string name) {
    firstName = name;
}

void Person::setLastName(std::string name) {
    lastName = name;
}

void Person::setAge(int newAge) {
    if (newAge > 0) {
        age = newAge;
    }
    else {
        age = 0;
    }
}

// here is scope resolution operator very important i.e. 'Person'
std::string Person::printFullName()
{
    return firstName + lastName;
}

