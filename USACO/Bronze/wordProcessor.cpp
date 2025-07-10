// July 9, 2025
// USACO 2020 January Contest, Bronze
// Problem 1. Word Processor

#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>
#include <string>
#include <vector>
#include <tuple>
#include <algorithm>
#include <cstdio>
#include <numeric>
#include <map>
#include <unordered_map>
#include <sstream>

using namespace std;


int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("word.in", "r", stdin);
    freopen("word.out", "w", stdout);

    int n,k;
    cin>>n>>k;
    cin.ignore();
    string words;
    getline(cin, words);
    stringstream ss(words);
    string word;
    vector<string> essay;
    while (ss >> word) {
        essay.push_back(word);
    }
    int curLength = 0;
    string curLine = "";
    for (string word : essay) {
        curLength += word.size();
        
        if (curLength <= k) {
            curLine += word + " ";
        } else {
            curLine.pop_back();
            cout << curLine << endl;
            curLine = word + " ";
            curLength = word.size();
        }
    }
    if (!curLine.empty()) {
        curLine.pop_back();
        cout << curLine << endl;
    }
    

    

    

    return 0;
}

