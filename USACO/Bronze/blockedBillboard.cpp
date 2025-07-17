// July 16, 2025
// USACO 2017 December Contest, Bronze
// Problem 1. Blocked Billboard

#include <bits/stdc++.h>
using ll = long long;

using namespace std;

struct Rect {
    int x1, y1, x2, y2;
    void read() {
        cin>>x1>>y1>>x2>>y2;
    }
    int area() {
        return (y2-y1)*(x2-x1);
    }
};

int intersect(Rect p, Rect q) {
	int xOverlap = max(0, min(p.x2, q.x2) - max(p.x1, q.x1));
	int yOverlap = max(0, min(p.y2, q.y2) - max(p.y1, q.y1));
	return xOverlap * yOverlap;  
}


int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("billboard.in", "r", stdin);
    freopen("billboard.out", "w", stdout);

    Rect a, b, t;
    a.read();
    b.read();
    t.read();
    
    cout << a.area() + b.area() - intersect(a, t) - intersect(b, t) << endl;



    return 0;
}

