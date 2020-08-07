#include <iostream>
#include <string>
#include <vector>
using namespace std;

void bubbleSort(vector<int>& nums)
{
    int size = nums.size();
    int i = 1;
    while(i < size) {
        bool swapped = false;
        for(int i = 1; i < size; i++) {
            if(nums[i] < nums[i - 1]) {
                swap(nums[i], nums[i-1]);
                swapped = true;
            }
        }
        if(swapped == false)
            break;
        i++;
    }
    
}
int main()
{
    vector<int> nums1 = { 7, 5, 3, 6, 8 };
    vector<int> nums2 = { 10, 50, 30, 15, 8 };
    vector<int> nums3 = { 10, 20, 30, 45, 60 };
    vector<int> nums4 = { 3,2,1,4 };
    bubbleSort(nums1);
    bubbleSort(nums2);
    bubbleSort(nums3);
    bubbleSort(nums4);
    return 0;
}