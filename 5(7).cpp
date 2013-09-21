#include<iostream>
using std::cin;
using std::cout;
using std::endl;
int DG(int n,int m){
     int M=0;
     for(int i=0;i!=n;i++){
          if(n==1){
               return m;
          }
          else{
               M=m*DG(n-1,m);
               return M;
          }
     }
}
int main(){
     int x=0,y=0;
     cin>>x>>y;
     cout<<"x^y="<<DG(y,x)<<endl;
     return 0;
}
