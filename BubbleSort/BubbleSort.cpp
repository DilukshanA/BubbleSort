
#include <iostream>

using namespace std;


void bubbleSort(int* A , int size) {
    for (int i = size - 1 ; i > 0 ; i--) {
        bool isSwapped = false;
        for (int j = 0; j < i - 1; j++) {
            if (A[j + 1] < A[j]) {
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
        if (isSwapped == true) {
            break;
        }
    }
}

/*
void bubbleSort(int* A , int size) {
    for (int i = 0; i < size -1 ; i++) {
        for (int j = 0; j < size - 1 -i ; j++) {
            if (A[j + 1] < A[j]) {
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }

}
*/
void print_array(int* A , int size) {
    for (int i = 0; i < size; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
}

int main()
{
    int array[] = { 10,20,5,40,30,25,50,24 };
    print_array(array, 8);
    bubbleSort(array, 8);
    print_array(array, 8);
}

