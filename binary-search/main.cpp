#include <iostream>
#include <vector>
using namespace std;
int binarySearch(const vector<int> &nums, int key) {
    const int size = nums.size();
    int s = 0;
    int e = size -1;
    while(s <= e) {
        int m = s+ (e - s)/2;
        if(nums[m] == key)
            return m;
        else if(nums[m] > key)
            e = m-1;
        else
            s = m+1;
    }
    
    return -1;
}
int main() {
    vector<int> nums1 {10,30,45,60,75,80,90};
    vector<int> nums2 {3,10,30,45,60,75,80,90};
    vector<int> nums3 {10,30,45,60,75,80,90};
    vector<int> nums4 {10,30,35,45,60,75,80,90};
    cout<< "at index: "<< binarySearch(nums1, 90)<< endl;
    cout<< "at index: "<< binarySearch(nums2, 10)<< endl;
    cout<< "at index: "<< binarySearch(nums3, 60)<< endl;
    cout<< "at index: "<< binarySearch(nums4, 600)<< endl;
    return 0;
}