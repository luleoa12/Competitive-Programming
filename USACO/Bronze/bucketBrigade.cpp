// July 14, 2025
// USACO 2019 US Open Contest, Bronze
// Problem 1. Bucket Brigade

#include <iostream>
#include <vector>
#include <cmath>
#include <cctype>
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
#include <set>
using ll = long long;

using namespace std;


int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("buckets.in", "r", stdin);
    freopen("buckets.out", "w", stdout);
    pair<int, int> barn = make_pair(0, 0);
    pair<int, int> lake = make_pair(0, 0);
    pair<int, int> rock = make_pair(0, 0);
    char x;
    for (int i=0; i<10; i++) {
        for (int j=0; j<10; j++) {
            cin>>x;
            if (x == 'B') {
                barn = make_pair(i, j);
            } else if (x == 'L') {
                lake = make_pair(i, j);
            } else if (x == 'R') {
                rock = make_pair(i, j);
            }
        }
    }
    int ans=0;
    if (barn.first == lake.first && lake.first == rock.first && (barn.second<rock.second && rock.second<lake.second || rock.second>lake.second && barn.second>rock.second)) {
        ans += abs(barn.second-lake.second) + 1;
    } else if (barn.second == lake.second && lake.second == rock.second && (barn.first<rock.first && rock.first<lake.first || rock.first<barn.first && rock.first>lake.first)) {
        ans += abs(barn.first-lake.first) + 1;
    } else {
        ans += abs(barn.first-lake.first) + abs(barn.second-lake.second)-1;
    }
    cout << ans << endl;

    return 0;
}

