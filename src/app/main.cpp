#include <iostream>

using namespace std;

//void output(double value = 0) {
//    cout << value << endl;
//}

void output(int value = 0) {
    cout << value << endl;
}

void increment(int & number) {
    output(++number);
}

int main() {
    int x = 1;
    increment(x);
    increment(x);

    return 0;
}