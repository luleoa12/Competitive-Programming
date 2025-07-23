// July 22, 2025
// Codeforces problem 701C - They Are Everywhere

#include <bits/stdc++.h>
using ll = long long;

using namespace std;


int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<char> flats(n);
    unordered_set<char> types;

    for(char &p : flats){
        cin>>p;
        types.insert(p);
    }

    int shortest = INT32_MAX;
    unordered_map<char,int> cur_pokemon;
    int closest_left=0;
    for(int right=0;right<n;right++){
        cur_pokemon[flats[right]]++;
        while(closest_left+1<=right && cur_pokemon.count(flats[closest_left]) && cur_pokemon[flats[closest_left]]>1){
            cur_pokemon[flats[closest_left]]--;
            closest_left++;
        }
        if(cur_pokemon.size()==types.size()){
            shortest = min(shortest,right-closest_left+1);
        }
    }
    cout<<shortest<<endl;
    return 0;
}

