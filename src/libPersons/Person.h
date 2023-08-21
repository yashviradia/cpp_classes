#ifndef CLASSES_PERSON_H
#define CLASSES_PERSON_H

#include <string>

namespace Persons {


// everything in class is by default 'private'.

    class Person {
        // Encapsulation prevents data manipulation.
        // To change this encapsulated data 'Getter' and 'Setter' functions are used.
    private:
        std::string firstName;
        std::string lastName;

        static int g_id;
        int id;


    public:
        // if no default contructor is needed, then make it equal to 'delete'
        Person();

        Person(std::string first, std::string last);

        // destructor helps in clearing memory when object is no longer needed.
        ~Person();

        int getID() const;

        std::string getFullName();
    };
}

#endif //CLASSES_PERSON_H