#include <iostream>
#include <vector>
using namespace std;

int linearSearch(const vector<int> &nums, int key){
    const int size = nums.size();
    for(int i = 0; i <= size/2;i++) {
        if(nums[i] == key){
            return i;
        }
        if(nums[size-1-i] == key) {
            return size-1-i;
        }
    }
    return -1;
}

int linearSearch2(const vector<int> &nums, int key){
    for(int i = 0; i < nums.size();i++) {
        if(nums[i] == key){
            return i;
        }
    }
    return -1;
}
int main() {
    vector<int> nums1 {10,30,45,20,6};
    vector<int> nums2 {10,30,16,20,6};
    vector<int> nums3 {10,30,45,20,6};
    cout<< "at index: "<< linearSearch(nums1, 6)<< endl;
    cout<< "at index: "<< linearSearch(nums2, 16)<< endl;
    cout<< "at index: "<< linearSearch(nums3, 600)<< endl;
    return 0;
}