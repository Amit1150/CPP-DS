#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool compareValByIndex(vector<int> &nums, int startIndex){
    int size = nums.size();
    if(size-1 ==  startIndex)
        return true;
    return nums[startIndex] <= nums[++startIndex] && compareValByIndex(nums, startIndex);
}

bool isSortedArray(vector<int> &nums){
    int size = nums.size();
    if(size < 2)
        return true;
    return nums[0] <= nums[1] && compareValByIndex(nums, 1);
}

int arraySum(int nums[], int size) {
    if(size == 1)
        return nums[0];
    
    return nums[0] + arraySum(nums+1, size-1);
}

int isPresent(int nums[], int size, int key) {
    if(size == 0)
        return false;
    
    return nums[0] == key || isPresent(nums+1, size-1, key);
}

int firstIndex(int nums[], int size, int key, int i){
    if(size == i)
        return -1;
    if(nums[i] == key)
        return i;
    return firstIndex(nums, size, key, i+1);
}

int lastIndex(int nums[], int size, int key){
    if(size == -1)
        return -1;
    if(nums[--size] == key)
        return size;
    return lastIndex(nums, size, key);
}

void printAllPosition(int nums[], int size, int key, int i){
    if(i == size)
        return;
    if(nums[i] == key)
        cout<< i << " ";
    return printAllPosition(nums, size, key, i+1);
}

int countOccurance(int nums[], int size, int key){
    if(size == 0)
        return 0;
    return  (nums[0] == key ? 1 : 0) + countOccurance(nums+1, size-1, key);
}

// can take jump  of 1,2,3
int staircaseCount(int n) {
    if(n == 1 || n==0)
        return 1;
    else if(n == 2)
        return 2;
    else if(n == 3)
        return 4;
    return staircaseCount(n-1) + staircaseCount(n-2) + staircaseCount(n-3);
}

// d -> disk count
int towerOfHanoi(int d) {
    if(d == 0)
        return 0;
    else 
        return 2 * towerOfHanoi(d -1) + 1;
}


void printStepInTOH(int n, char s, char h, char d){
    if(n == 0)
        return;
    printStepInTOH(n-1, s, d,h);
    cout << "moving "<< n <<" as: "<< s <<" -> "<< d<<endl;
    printStepInTOH(n-1, h, s, d);
}
int main() {
    vector<int> nums1 {1,3,6,8,10,12};
    vector<int> nums2 {1,3,6,80,0,12,6};
    cout << "nums1 is sorted: "<<isSortedArray(nums1)<< endl;
    cout << "nums2 is sorted: "<<isSortedArray(nums2)<< endl;
    cout<< "----------- Array sum -------------"<< endl;
    int a1[5] {1,2,3,4,5};
    int a2[8] {3,2,3,4,4,3,2,3};
    cout << "sum: "<< arraySum(a1, 5) <<endl;
    cout << "sum: "<< arraySum(a2, 8) <<endl;
    cout<< "----------- Array search -------------"<< endl;
    cout << "0 is present: "<< isPresent(a1, 5, 2) <<endl;
    cout << "5 is present: "<< isPresent(a1, 5, 5) <<endl;
    cout << "6 is present: "<< isPresent(a1, 5, 6) <<endl;
    cout<< "----------- First index search -------------"<< endl;
    cout << "5 is present at: "<< firstIndex(a2, 8, 5, 0) <<endl;
    cout<< "----------- last index search -------------"<< endl;
    cout << "5 is present at: "<< lastIndex(a2, 8, 60) <<endl;
    cout<< "----------- print all position -------------"<< endl;
    printAllPosition(a2, 8, 3, 0);
    cout << endl;
    cout<< "----------- count occurance -------------"<< endl;
    cout << "cout 3: "<< countOccurance(a2, 8, 3)<< endl;
    
    cout<< "----------- staircase count-------------"<< endl;
    cout<< "count: "<< staircaseCount(4)<< endl;
    cout<< "----------- tower of hanoi count-------------"<< endl;
    cout << "TOH count: "<< towerOfHanoi(10) << endl;
    printStepInTOH(10, 'S', 'H', 'D');
    return 0;
}