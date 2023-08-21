#include <memory>
#include <iostream>


void testIfAlive(std::unique_ptr<int> const & ptr) {
    if (ptr) {
        std::cout << "Still here!" << std::endl;
    }
    else {
        std::cout << "Gone!" << std::endl;
    }
}

int main() {
    using namespace std;

    unique_ptr<int> up;

    {
        up = make_unique<int>(5);
    }
    testIfAlive(up);

    // Now 'up' will become null & 'up2' will take value of 'up'
    std::unique_ptr<int> up2 = std::move(up);

    testIfAlive(up2);
    testIfAlive(up);

    return 0;
}