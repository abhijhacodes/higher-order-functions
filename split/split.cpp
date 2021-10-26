#include "bits/stdc++.h"
using namespace std;

// splits a string/sentence into words seperated by a delimeter
vector<string> split(const string &s, char delim)
{
    istringstream iss(s);
    string word;
    vector<string> words;
    while (getline(iss, word, delim))
    {
        if (!word.empty())
            words.push_back(word);
    }
    return words;
}

// demo of how to use this split function
int main()
{
    string sentence1 = "Split sentence by space";
    vector<string> words1 = split(sentence1, ' ');

    string sentence2 = "Cpp#is#the#coolest#language";
    vector<string> words2 = split(sentence2, '#');
}