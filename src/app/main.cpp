#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

#include <exception>

int main() {
    vector v = {1, 2};

    // Output of this exception is not that helpful.
    // But it does help in knowing there's an exception.
    try {
        v.at(3);
    }
    catch (std::exception const & e) {
        cout << e.what() << endl;
    }

    catch(...) {
        cout << "An uncaught exception occured." << endl;
    }

    return 0;
}