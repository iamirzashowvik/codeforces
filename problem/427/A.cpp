// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

int main() {
    
    
    int n;
    cin >>n;
    int p=0;
    int c=0;
    int unsolved=0;
    
    for(int i=0;i<n;i++){
        int m;
        cin >>m;
        if(m==-1 && p==0 ){
           unsolved++;
        }else if(m==-1 && p>0){
            p--;
        }else{
            p=p+m;
        }
    }
    cout<<  unsolved;
}