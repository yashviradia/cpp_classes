#ifndef CLASSES_TWITTER_H
#define CLASSES_TWITTER_H

#include <string>

#include "Person.h";


class Twitter
        : public Person {
private:
    std::string twitterhandle;

public:
    Twitter(std::string first, std::string last, std::string handle);

    std::string getFullName() const override;
};


#endif //CLASSES_TWITTER_H
