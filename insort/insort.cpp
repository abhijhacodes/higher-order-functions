#include "bits/stdc++.h"
using namespace std;

// inserts an element in a sorted array such that it remains sorted after insertion
template <typename T>
void insort(vector<T> &arr, T element)
{
    auto index = lower_bound(arr.begin(), arr.end(), element);
    arr.insert(index, element);
}

// demo of how to use this insort function
int main()
{
    vector<int> intArr = {1, 4, 5, 7, 8};
    insort<int>(intArr, 6);

    vector<char> charArr = {'a', 'b', 'd', 'e'};
    insort<char>(charArr, 'c');

    vector<string> strArr = {"a", "ab", "abhi"};
    insort<string>(strArr, "abh");
}