#ifdef ARRAY
#define ARRAY

#include <iostream>
#include <iomanip>
using namespace std;

template <class Data>
class Array {
        private:
                int size;
                Data *array;

        public:
                void setSize(int _size) {
                        size = _size;
                }

                int getSize() {
                        return size;
                }

                array(int _size) {              //constructor
                        setSize(_size);
                        array = new Data [getSize()];
                }

                void setArray(int _size) {
                        for(i = 0; i < _size; i++) {
                                array[i] = Data rand() %100 + 1;
                        }
                }

                void getArray() {
                        for(int i = 0; i < size; i++) {
                                cout<<array[i]<<", "<<endl;
                        }
                }
                void selectionSort(Data *array, int _size) {
                        int smallest;
                        for(int i = 0; i < _size - 1; i++) {
                                smallest = i;
                                for(int index = i + 1; index < _size; ++index) {
                                        if(array[index] < array[smallest]) {
                                              smallest = index;
                                        }
                                }
                                swap(&array[i], &array[smallest]);
                         }
                }

                void swap(Data *element1Ptr, Data *element2Ptr){
                        Data hold = *element1Ptr;
                        *element1Ptr = *element2Ptr;
                        *element2Ptr = hold;
                }
};

#endif
