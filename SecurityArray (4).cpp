#include "iostream"
using namespace std;
class Array{
	private:
		int array[100];
		int size;
	public:
		Array();
		~Array();
		friend ostream& operator<<(ostream& os,const Array& A);
		friend istream& operator>>(istream& is,const Array& A);
		Array operator+(const Array& A);
		Array operator-(const Array& A);
		int Full(int []a){
			for(int s=0;a!=0;a++,s++){
			}
			if(s<100){
				return 0;//array is not full
			}
			else
				return 1;//array is full
		}
		void Insert(int []a){
			if(!Full(int []a)){
				for(;array!=0;array++,a++){
					*array=*a;
				}
			}
		}
};
