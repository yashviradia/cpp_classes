#ifndef CLASSES_ACCUMULATOR_H
#define CLASSES_ACCUMULATOR_H

template<class T>
class Accumulator{
private:
    T value;
public:
    Accumulator(T v) : value(v){}
    void add(T v) { value += v; }
    T getValue() const { return value; }
};

#endif //CLASSES_ACCUMULATOR_H
