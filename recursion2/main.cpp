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
int main() {
    vector<int> nums1 {1,3,6,8,10,12};
    vector<int> nums2 {1,3,6,80,0,12,6};
    cout << "nums1 is sorted: "<<isSortedArray(nums1)<< endl;
    cout << "nums2 is sorted: "<<isSortedArray(nums2)<< endl;
    cout<< "----------- Array sum -------------"<< endl;
    int a1[5] {1,2,3,4,5};
    cout << "sum: "<< arraySum(a1, 5) <<endl;
    return 0;
}