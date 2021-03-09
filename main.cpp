#include <iostream>
#include <iomanip>
#include "selectionSort.hpp"

int main() {
        int _size = rand() %10 + 1;
        Array <int> int_array;
        int_array.setSize(_size);
        int_array.initializeArray();
        for(int i = 0; i < _size; i++){
                int value = rand() %10;
                int_array.setArray(i, value);
        }
        cout<<"Original Integer Array:"<<endl;
        int_array.getArray();
        int_array.selectionSort(&int_array, _size);
        cout<<"Sorted Array:"<<endl;
        int_array.getArray();

        Array <float> float_array;
        float_array.setSize(_size);
        float_array.initializeArray();
        for(int i = 0; i <_size; i++) {
                float val2 = static_cast <float> (rand())/static_cast <float> (RAND_MAX);
                float_array.setArray(i, val2);
        }
        cout<<"Original Float Array:"<<endl;
        float_array.getArray();
        float_array.selectionSort(&float_array, _size);
        cout<<"Sorted Array:"<<endl;
        float_array.getArray();

        return 0;
}
