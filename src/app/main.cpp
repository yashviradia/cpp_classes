#include <vector>
#include <iostream>
#include <numeric>
#include <vector>

int main() {
    std::vector<int> vec(10);

    std::iota(vec.begin(), vec.end(), 1);

    std::transform(vec.begin(), vec.end(), vec.begin(),
                   [](int val){return val * val; });

    for (std::size_t i = 0; i < vec.size(); i++) {
        vec[i] = vec[vec.size() - i - 1];
    };

    for (auto const v : vec) {
        std::cout << v << " ";
    }
    std::cout << std::endl;


}