#include <iostream>

float getPI() {
    return 3.14f;
}

float cylinder_volume() {
    auto pi = getPI();

    auto radius = 15;

    auto height = 9.265;

    return static_cast<float>(pi * radius * radius * height);
}

int main() {
    std::cout << cylinder_volume() << std::endl;
}