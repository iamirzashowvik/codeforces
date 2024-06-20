// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>


using namespace std;

int main() {
    
    vector<int> mny={
      100,20,10,5,1
    };
    
    int x;
    cin >> x;
    int c=0;
    for(int i=0;;i++){
       
        int d=mny[i];
        int r=x/d;
        
        int m=x%d;
        if(x>=d){
           
           c=c+r;
           x=x-r*d;
           
        }
        if(x==0){
            break;
        }
        
        
    }
    cout<<c;
    
    
    
    
}