#ifndef CLASSES_TEMPLATEFUNCTIONS_H
#define CLASSES_TEMPLATEFUNCTIONS_H

// old version is 'typename' instead of 'class'
// instead of 'Type' use 'T'
template <class T>

T mymin(T lhs, T rhs) {
    return (lhs < rhs) ? lhs : rhs;
}

#endif //CLASSES_TEMPLATEFUNCTIONS_H
