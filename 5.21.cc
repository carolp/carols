#include<iostream>
#include<vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
int main(){
     int p;
     vector<int> ivec;
     while(cin>>p){
          ivec.push_back(p);
     }
     for(vector<int>::iterator iter=ivec.begin();iter!=ivec.end();++iter){
          if(!*iter%2){
               int temp=*iter;
               *iter=2*temp;
               cout<<temp<<endl<<*iter<<endl;
               }
          }

     return  0;
}
