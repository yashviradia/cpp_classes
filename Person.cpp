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
    cout << "Hi, I'm " + getFullName() << endl;
}

Person::~Person() {
    cout << firstName + " " + lastName + " will be deleted." << endl;
}


// here is scope resolution operator very important i.e. 'Person'
std::string Person::getFullName()
{
    return firstName + " " + lastName;
}

