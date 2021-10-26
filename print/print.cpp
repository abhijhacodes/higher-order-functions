#include "bits/stdc++.h"
using namespace std;

// prints all arguments seperated by space
template <typename... T>
void print(T &&...args)
{
    ((cout << args << ' '), ...);
}

// prints all arguments seperated by new line
template <typename... T>
void println(T &&...args)
{
    ((cout << args << '\n'), ...);
}

// demo of how to use this functions
int main()
{
    println(25, "abhi", 'j');
    print(25, "abhi", 'j');
}