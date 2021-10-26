#include "bits/stdc++.h"
using namespace std;

// there is a transform function in STL that works same as map in python

// demo of how to use this transform function
int main()
{
    vector<int> nums = {2, 4, 6, 8, 10};

    // squaring all numbers in array using lambda function
    transform(nums.begin(), nums.end(), nums.begin(), [&](int num)
              { return num * num; });

    // adding elements of two arrays and storing values in a third array
    vector<int> nums1 = {2, 3, 4, 5};
    vector<int> nums2 = {6, 7, 8, 9};
    vector<int> nums3(nums1.size());
    transform(nums1.begin(), nums1.end(), nums2.begin(), nums3.begin(), plus<int>());
}
