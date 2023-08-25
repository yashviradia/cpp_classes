#include <iostream>

class Person {
public:
    Person(std::string& name) : name(name) {}

    void printName() const {
        std::cout << name << ". My name is not important." << std::endl;
    }
private:
    std::string name;

};

void printPerson(const Person& p) {
    p.printName();
}

int main() {
    Person p ("halli");
    printPerson(p);
    return 0;
}