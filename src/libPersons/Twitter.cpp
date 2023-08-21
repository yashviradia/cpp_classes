#include "Twitter.h"

#include <string>
using std::string;

#include <iostream>
using std::cout;
using std::endl;


Twitter::Twitter(std::string first, std::string last, std::string handle)
        : Person(first, last), twitterhandle(handle) {

}

Twitter::~Twitter() {

}

std::string Twitter::getFullName() const {
    return Person::getFullName() + " " + twitterhandle;
}
