// July 14, 2025
// CSES Problem Set: Introductory Problems - Chessboard and Queens

#include <iostream>
#include <vector>

using namespace std;

vector<vector<bool>> blocked(8, vector<bool>(8));
vector<bool> rows_taken(8);
vector<bool> diag1(8*2-1);
vector<bool> diag2(8*2-1);

int ans=0;

void search_queens(int c=0) {
    if (c==8) {
        ans++;
        return;
    }

    for (int r=0; r<8; r++){
        bool row_open = !rows_taken[r];
        bool diag_open = !diag1[r+c] && !diag2[r-c+8-1];
        if (!blocked[r][c] && row_open && diag_open) {
            rows_taken[r] = diag1[r+c] = diag2[r-c+8-1] = true;
            search_queens(c+1);
            rows_taken[r] = diag1[r+c] = diag2[r-c+8-1] = false;
        }
    }
}

int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    for (int r=0; r<8; r++) {
        string row;
        cin>>row;
        for (int c=0; c<8; c++) {blocked[r][c] = row[c] == '*';}
    }
    search_queens();
    cout << ans << endl;
    return 0;
}

