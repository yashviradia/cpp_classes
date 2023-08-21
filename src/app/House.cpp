//
// Created by Yash Viradia on 21.08.23.
//
#include <iostream>
using std::endl;
using std::cout;


#include "House.h"

House::House(int persons)
: residents(persons)
{

}

void House::ringDoorbell() {
    cout << ((residents == 0) ? "No one home." : "Who are you?");
}
