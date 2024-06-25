// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
using namespace std;

int main() {
   string c,m;
   
   cin >>c>>m;
   
   
   string o="";
   for(int i=0;i<c.size();i++){
       char x=c[i];
       char y=m[i];
       if(x!=y){
          o=o+"1"; 
       }else{
            o=o+"0";  
       }
   }
   cout<< o;
   
}