#include<iostream>
using std::cin;
using std::cout;
using std::endl;
int MN(int x){
     int mn=0;
     if(x==1){
          return x;
     }
     else{
          mn=x*MN(x-1);
          return mn;
     }
}
int CC(int n,int m){
     int cmn=MN(m)/(MN(n)*MN(m-n));
     return cmn;
}

int main(){
     int m=0,n=0;
     cin>>n>>m;
     cout<<"cmn="<<CC(n,m)<<endl;
     return 0;
}
