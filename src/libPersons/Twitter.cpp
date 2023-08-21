#include "Twitter.h"

#include <string>
using std::string;

namespace Persons {

    Twitter::Twitter(std::string first, std::string last, std::string handle)
            : Person(first, last), twitterhandle(handle) {

    }
}