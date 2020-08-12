#include <iostream>
#include <vector>
#include <string>
using namespace std;

void printPermutation(char a[], int i=0){
    if(a[i] == '\0')
        cout<<a<< endl;
    for(int j=i; a[j] != '\0'; j++){
        swap(a[i], a[j]);
        printPermutation(a, i+1);
        swap(a[i], a[j]);
    }
}

int main() {
    char a[5] = "ABCD";
    printPermutation(a);
    cout << endl;
    return 0;
}