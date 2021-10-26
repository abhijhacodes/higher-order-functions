#include "bits/stdc++.h"
using namespace std;

// input any number of elements of any data type

template <typename... T>
void input(T &...args)
{
    ((cin >> args), ...);
}

// demo of how to use this input function
int main()
{
    int n1, n2, n3;
    char c;
    string s;
    input(n1, n2, n3, c, s);
}