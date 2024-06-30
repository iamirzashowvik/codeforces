// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#include<bits/stdc++.h> 
#include<string>

using namespace std;

int main() {
   int n;
   cin >>n;
   vector<string> vec;
   for( int i=0;i<n;i++){
       string x;
       cin >>x;
       transform(x.begin(), x.end(), x.begin(), ::tolower); 
       vec.push_back(x);
   }
   for( int i=0;i<n;i++){
       if(vec[i]=="yes"){
           cout << "YES"<<endl;
           
       }else{
            cout << "NO"<<endl;
       }
   }
   
   
}