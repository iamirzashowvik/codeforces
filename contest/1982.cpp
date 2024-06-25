// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;
void print2DVector(const vector<vector<int>>& vec) {
    int ans=0;
    for (const auto& row : vec) {
      if(row[0]==row[1]){
          ans=1;
      }
    }
    if(ans==1){
       
         cout<<"NO";
    }else{
         cout<<"YES";
    }
     cout << endl;
}

int main() {
    int n;
    cin >>n;
    vector<int> m;
    
    
    for(int i=0;i<n;i++){
        int x,y,p,q;
        cin >>x>>y;
        cin >>p>>q;

        int ans=1;
        vector<vector<int>> nr;
        int max=y;
        
        for(int j=x;j<=p;j++){
           
         nr.push_back({j,max});
         if(max+1>=y&& max+1<=q ){
             nr.push_back({j,max+1});
             max=max+1;
         }
        }
        print2DVector(nr);
       
    }
    
    
    
}