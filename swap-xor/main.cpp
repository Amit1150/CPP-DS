#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int a = 10;
    int b= 5;
    a = a ^ b;  // 10 ^ 5
    b = a ^ b;  // 10 ^ 5 ^ 5 -> 10   // 5 & 5 cancel out each other
    a = a ^ b;  // 10 ^ 5 ^ 10 -> 5   // 10 & 10 cancel out each other
    cout << "a & b : "<< a << " & " << b<< endl;
    return 0;
}