// 12/26/2025
// Planets Cycles

#include <bits/stdc++.h>
using ll = long long;

using namespace std;

vector<int> planets;
vector<bool> visited;
vector<int> pathlength;
int steps=0;
queue<int> path;

void dfs(int planet){
    path.push(planet);
    if(visited[planet]){
        steps+=pathlength[planet];
        return;
    }
    visited[planet]=true;
    steps++;
    dfs(planets[planet]);
}

int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    planets.resize(n);
    visited.resize(n);
    pathlength.resize(n);

    for(int i=0;i<n;i++){
        cin>>planets[i];
        planets[i]--;
    }

    for(int i=0;i<n;i++){
        if(!visited[i]){
            steps=0;
            dfs(i);
            int d=1;
            while(!path.empty()){
                if(path.front()==path.back()){
                    d=0;
                }
                pathlength[path.front()]=steps;
                steps-=d;
                path.pop();
            }

        }
    }
    for(int i=0;i<n;i++){
        cout<<pathlength[i]<<" ";
    }
    return 0;
}

