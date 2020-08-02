#include <iostream>
using namespace std;

void displayArray(int nums[], int size) {
    for(int i {0}; i < size; i++){
        cout << nums[i] << " "<< endl;
    }
    cout << endl;
}

void reverseArray(int a[], int size){
    int min = 0;
    int max = size -1;
    while(min < max) {
        swap(a[min], a[max]);
        min++;
        max--;
    }
    
    displayArray(a, size);
}


int main() {
    int a[6] {1,5,2,9,4,6};
    reverseArray(a, 6);
    cout << "-------"<< endl;
    int a2[5] {1,2,9,4,6};
    reverseArray(a2, 5);
    return 0;
}