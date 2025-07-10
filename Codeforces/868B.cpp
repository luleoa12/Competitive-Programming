// July 7, 2025
// Codeforces problem 868B - Race Against Time

#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>
#include <string>
#include <vector>
#include <tuple>
#include <algorithm>
#include <cstdio>

using namespace std;


int main() {    
    int h, m, s, t1, t2, ans = 0;
    cin >> h >> m >> s >> t1 >> t2;
    if(t1>t2)
    {
        swap(t1,t2);
    }
    if(h>=t1 && h<t2)
    {    
        ans++;
    }
    if(m>=t1*5 && m<t2*5)
    {
        ans++;
    }
    if(s>=t1*5 && s<t2*5)
    {
        ans++;
    }
    if (ans == 0 || ans == 3)
    {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}

