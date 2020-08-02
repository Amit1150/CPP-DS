#include <iostream>
#include <vector>
#include <string>
using namespace std;

int largestVal(const int arr[], int size) {
    int largest = arr[0];
    
    int index = 1;
    while(index < size) {
        largest = arr[index] > largest ? arr[index] : largest;
        index++;
    }
    
    return largest;
}
int main() {
    int a[6] {1,5,2,9,4,6};
    int a2[1] {1};
    
    cout<< "largest val: "<< largestVal(a, 6) << endl;
    cout<< "largest val: "<< largestVal(a2, 1) << endl;
    
    return 0;
}