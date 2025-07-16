// July 15, 2025
// USACO 2017 January Contest, Bronze
// Problem 1. Don't Be Last!

#include <bits/stdc++.h>
using ll = long long;

using namespace std;


int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("notlast.in", "r", stdin);
    freopen("notlast.out", "w", stdout);

    int n;
    cin>>n;
    map<string, int> cows;
    vector<string> all = {"Bessie", "Elsie", "Daisy", "Gertie", "Annabelle", "Maggie", "Henrietta"};
    for (string name : all) {
        cows[name] = 0;
    }
    for (int i=0; i<n; i++) {
        string name;
        int milk;
        cin>>name>>milk;
        cows[name]+=milk;
    }
    set<int> milk_vals;
    for (auto& [name, amount] : cows) {
        milk_vals.insert(amount);
    }
    if (milk_vals.size() == 1) {
        cout << "Tie" << endl;
        return 0;
    }
    auto i = milk_vals.begin();
    ++i;
    int ans=*i;

    vector<string> candidates;
    for (auto& [name, amt] : cows) {
        if (amt == ans) {
            candidates.push_back(name);
        }
    }

    if (candidates.size() == 1) {
        cout << candidates[0] << endl;
    } else {
        cout << "Tie" << endl;
    }

    
    

    return 0;
}

