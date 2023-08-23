#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;

#include "Person.h"



// 'static' must be specified in header file and not for definition.
int Person::g_id = 0;

// implement constructor Person from class 'Person'
// Recommended: not to create a lot of constructors.

// This is a delegating constructor.
Person::Person()
        : Person("Tony", "Stark") {

}

// Constructors are also kind of functions.
Person::Person(string first, string last)
        : firstName(first), lastName(last), id(g_id) {
    ++g_id;

}

Person::~Person() {

}

int Person::getID() const {
    return id;
}

Person& Person::operator+=(const Person &p) {
    firstName += " " + p.firstName;
    lastName += " " + p.lastName;
    id += p.getID();

    return *this;
}


// here is scope resolution operator very important i.e. 'Person'
std::string Person::getFullName() const {
    return firstName + " " + lastName;
}

