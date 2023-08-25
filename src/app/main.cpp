#include <vector>
#include <iostream>

using namespace std;

int main() {
    auto vA = make_unique<vector<int>>(vector{ 1, 2, 3});

    vector<int> vB = *vA;
    vA->push_back(4);
    vB.push_back(5);

//    unique_ptr<vector<int>> vC = std::move(vA);
    vA->push_back(6);
    vB.push_back(7);
//    vC->push_back(8);

    cout << "vB: ";
    for (int num : vB) {
        cout << num << " ";
    }
    cout << endl;
}