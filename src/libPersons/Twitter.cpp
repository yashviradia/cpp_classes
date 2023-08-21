#include "Twitter.h"

#include <string>
using std::string;



Twitter::Twitter(std::string first, std::string last, std::string handle)
        : Person(first, last), twitterhandle(handle) {

}

std::string Twitter::getFullName() const {
    return Person::getFullName() + " " + twitterhandle;
}
