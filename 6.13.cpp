#include<iostream>
#include<bitset>
#include<stdexcept>
using std::cin;
using std::cout;
using std::endl;
using std::bitset;
using std::overflow_error;
//using std::__throw_overflow_error();
int main(){
	try{
		bitset<32> ibit(0xfffffffffffffffffffffff);
		unsigned long ul=ibit.to_ulong();
		if(ul>4394967295)
               throw overflow_error("too long");
	}catch(overflow_error){
		cout<<"unsigned long"<<endl;
	}
     return 0;
}
