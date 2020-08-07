#include <iostream>
#include <vector>
#include <string>
using namespace std;

long long int factorial1(int n){
    if(n < 2)
        return 1;
    return n * factorial1(n-1);
}

long long int factorial2(int n){
    long long int output = 1;
    while(n > 1) {
        output = output * n;
        n--;
    }
    return output;
}

int fibonaci(int n) {
    if(n < 1)
        return 0;
    else if(n == 1)
        return 1;
    else 
        return fibonaci(n-1) + fibonaci(n-2);
}

long long int power(int x, int n) {
    if(n == 0)
        return 1;
    else
        return x * power(x, n-1);
}

int countDigits(int n){
    if(n < 10)
        return 1;
    else 
        return 1 + countDigits(n/10);
}

int sumOfDigit(int n) {
    if(n == 0)
        return 0;
    return n%10 + sumOfDigit(n/10);
}

int main() {
    cout << "------------------factorial--------------------------"<< endl;
    cout << "factorial of 5: "<< factorial2(5) << endl;
    cout << "factorial of 10: "<< factorial1(10) << endl;
    cout << "factorial of 50: "<< factorial1(20) << endl;
    cout << "------------------fibonaci--------------------------"<< endl;
    cout << "6th fibonaci num: "<< fibonaci(6) << endl;
    cout << "10th fibonaci num: "<< fibonaci(10) << endl;
    cout << "------------------power--------------------------"<< endl;
    cout << "pow(5,3): "<< power(5,3) << endl;
    cout << "------------------count digits--------------------------"<< endl;
    cout << "total digits in 123456: "<< countDigits(123456) << endl;
    cout << "total digits in 1234560: "<< countDigits(1234560) << endl;
    cout << "------------------sum digits--------------------------"<< endl;
    cout << "sum of digits in 1236: "<< sumOfDigit(1236) << endl;
    cout << "sum of digits in 1: "<< sumOfDigit(1) << endl;
    cout << "sum of digits in 7638: "<< sumOfDigit(7638) << endl;
    return 0;
}