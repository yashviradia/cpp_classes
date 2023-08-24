#include <iostream>
#include <vector>

using std::cout;
using std::endl;

template<typename Func>
long long timeIt(Func f)
{
    auto begin = std::chrono::system_clock::now();

    f();

    auto end = std::chrono::system_clock::now();
    return std::chrono::duration_cast<std::chrono::microseconds>(end - begin).count();
}

void createVector(std::vector<int> & result, int numItems) {
    for (int i = 0; i < numItems; i++) {
        result.push_back(i);
    }
}

int main() {
    using namespace std;

    vector<int> v1;
    vector<int> v2;

    auto lambda1 = [&](){ createVector(v1, 100); };
    auto lambda2 = [&](){ createVector(v2, 1000000); };

    cout << "100:      " << timeIt(lambda1) << endl;
    cout << "1000000:  " << timeIt(lambda2) << endl;

    return 0;
}