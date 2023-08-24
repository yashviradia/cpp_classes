#include <tuple>
using std::tuple;
using std::make_tuple;
using std::get;

#include <iostream>
using std::cout;
using std::endl;

tuple<int, int> tuple_minmax(int first, int second) {

// The following code could be written easily:
//    tuple<int, int> result;
//    if (first <= second) {
//        get<0>(result) = first;
//        get<1>(result) = second;
//    }
//    else {
//        get<0>(result) = second;
//        get<1>(result) = first;
//    }
//
//    return result;

    return (first <= second) ? std::tie(first, second) : std::tie(second, first);

}

int main() {

    int a = 5;
    int b = 3;

    int minVal;
    int maxVal;

    std::tie(minVal, maxVal) = tuple_minmax(a, b);

    cout << minVal << ", " << maxVal << endl;

    return 0;
}