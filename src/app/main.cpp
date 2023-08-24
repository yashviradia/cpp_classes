#include <iostream>
#include <vector>
#include <stack>

int main() {
    using namespace std;

    vector<int> nums = {1, 2, 3, 4};

    stack<int> stack;

    for (auto item : nums) {
        stack.push(item);
    }

    vector<int> reverted;
    while(!stack.empty()) {
        reverted.push_back(stack.top());
        stack.pop();
    }

    for (auto item : nums) {
        cout << item << ", ";
    }

    cout << endl;

    for (auto item : reverted) {
        cout << item << ", ";
    }

    return 0;
}