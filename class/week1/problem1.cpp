// 9/17/2025
// http://poj.org/problem?id=3122


#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {    
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,f;
        cin>>n>>f;
        vector<int> pies;
        int max_pie=-1;
        for(int j=0;j<n;j++){
            int cur;
            cin>>cur;
            if(cur>max_pie){
                max_pie=cur;
            }
            pies.push_back(cur);
        }

        double left=0; // the larget slice found so far that works
        double right=max_pie*max_pie*3.14159265358979323846; 
        double mid; // volume of the slice
        while(right-left>0.00001){
            mid=left+(right-left)/2;
            long long max_people=0;
            for(int j=0;j<pies.size();j++){
                double area=pies[j]*pies[j]*3.14159265358979323846;
                max_people += (long long)(area/mid);
            }
            if(max_people<f+1){
                right=mid;
            }else{
                left=mid;
            }
        }
        // set precision to 4 decimal points
        cout.setf(ios::fixed);
        cout.precision(4);
        cout<<left<<endl;
    }
    return 0;
}
