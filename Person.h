#ifndef CLASSES_PERSON_H
#define CLASSES_PERSON_H

#include <string>

class Person {
    // Encapsulation prevents data manipulation.
    // To change this encapsulated data 'Getter' and 'Setter' functions are used.
private:
    std::string firstName;
    std::string lastName;
    int age;
    // everything in class is by default 'private'.

public:
    // if no default contructor is needed, then make it equal to 'delete'
    Person();
    Person(std::string first, std::string last);

    std::string getFirstName();

    void setFirstName(std::string name);
    void setLastName(std::string name);
    void setAge(int newAge);

    std::string printFullName();
};


#endif //CLASSES_PERSON_H
