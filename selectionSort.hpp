#include<iostream>
#include <iomanip>
using namespace std;

template <typename Data>
class Array {
        private:
                int size;
                Data *array;

        public:
                void setSize(int _size) {
                        size = _size;
                }

                void initializeArray() {
                        array = new Data[size];
                }

                void setArray(int elem, Data val) {
                        array[elem] = val;
                }

                void getArray() {
                        for(int i = 0; i < size; i++) {
                                cout<<array[i]<<", ";
                        }
                        cout<<endl;
                }

                void selectionSort(Array<Data>*, int _size){
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

                void swap(Data * const element1Ptr, Data * const element2Ptr){
                        Data hold = *element1Ptr;
                        *element1Ptr = *element2Ptr;
                        *element2Ptr = hold;
                }
};
