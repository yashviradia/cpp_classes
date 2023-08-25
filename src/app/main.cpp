#include <string>
#include <iostream>
#include <vector>

using namespace std;

struct Person { string name; };

vector<Person>* cloneVector( vector<Person> & people ) {
    vector<Person> result = people;
    return &result;
}

int main() {
    vector<Person> dinos = {{"Earl"}, {"Fran"}, {"Baby"}};

    Person *baby = &dinos.back();

    auto result = cloneVector(dinos);

    // cout << baby->name << endl;
    cout << result->back().name << endl;

    return 0;
}