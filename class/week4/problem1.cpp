// 10/25/2025
// https://leetcode.com/problems/n-queens/

// class Solution {
// public:
//     bool rowUsed[100];
//     bool slashUsed[100];
//     bool backslashUsed[100];
//     void dfs(int col, vector<vector<string>> &ans, int n, vector<int> pos){
//         if(col==n){
//             vector<string> cur;
//             for(int i=0;i<n;i++){
//                 string curRow="";
//                 for(int j=0;j<n;j++){
//                     if(j==pos[i]){
//                         curRow+='Q';
//                     }else{
//                         curRow+='.';
//                     }
//                 }
//                 cur.push_back(curRow);
//             }
//             ans.push_back(cur);
            
//         }
//         for(int i=0;i<n;i++){ // row
//             if(!rowUsed[i]&&!slashUsed[i+col]&&!backslashUsed[i-col+n]){
//                 slashUsed[i+col]=true;
//                 rowUsed[i]=true;
//                 backslashUsed[i-col+n]=true;
//                 pos.push_back(i);
//                 dfs(col+1,ans,n, pos);
//                 slashUsed[i+col]=false;
//                 rowUsed[i]=false;
//                 backslashUsed[i-col+n]=false;
//                 pos.pop_back();
//             }
//         }
//     }
//     vector<vector<string>> solveNQueens(int n) {
//         vector<vector<string>> ans;
//         vector<int> pos;
//         dfs(0,ans,n,pos);
//         return ans;
//     }
// };