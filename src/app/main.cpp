#include <iostream>
#include <queue>

int main() {
    using namespace std;

    queue<int> queue;
    queue.push(1);

    cout << queue.front() << ", ";
    queue.pop();

    queue.push(3);

    while (!queue.empty()) {
        cout << queue.front() << ", ";
        queue.pop();
    }


    return 0;
}