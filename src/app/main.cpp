#include <iostream>

using namespace std;

//void output(double value = 0) {
//    cout << value << endl;
//}

void output(int value = 0) {
    cout << value << endl;
}

void increment(int number) {
    output(number + 1.5);
}

int main() {
    int x = 1;
    increment(x);
    output();
    return 0;
}