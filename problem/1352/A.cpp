// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;


int main() {
    int n;
    cin >>n;
    vector<int> m;
    
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        m.push_back(x);
    }
    
    
    for(int i=0;i<n;i++){
        int x=m[i];
        int r;
        int d;
        vector<int> ans;
        for (int j=0;x>0;j++){
            d=x/10;
            r=x%10;
            if(r==0){
                x=x/10;
            }else{
                x=x/10;
                r =r*pow(10, j);
                ans.push_back(r);
                
            }
        }
        sort(ans.begin(), ans.end(), greater<int>()); 
        cout << ans.size()<<endl;
        for (int rr:ans){
            cout << rr<<" ";
        }
        cout <<endl;
    }
}