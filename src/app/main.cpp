#include <string>
using std::string;

#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

#include <utility>
using std::pair;
using std::make_pair;

int main() {

    pair<int, string> myPair = make_pair(1, "Second");

    cout << myPair.first << ", " << myPair.second << endl;

    return 0;
}