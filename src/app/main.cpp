#include <unordered_set>
#include <iostream>

#include "Person.h"

class BadHash {
public:
    int operator()(int){ return 1; };
};

int main() {
    using namespace std;

    unordered_set<int, BadHash> nums;

    for (int i = 0; i < 10; ++i) {
        nums.insert(i);
    }

    for (auto const & i : nums) {
        cout << i << ", ";
    }

    return 0;
}