#include <iostream>
#include <vector>
#include <string>
using namespace std;

void printPrefix(string input) {
    int min = 0;
    int max = input.length() - 2;
    if(input.length() == 1){
        cout<< input;
    }
    while(min <= max) {
        for(int i=0; i<=min;i++){
            cout << input[i];
        }
        cout << endl;
        min++;
    }
    
    cout << endl;
}

int main() {
    printPrefix("abcd");
    printPrefix("abcdefg");
    printPrefix("ab");
    printPrefix("a");
    return 0;
}