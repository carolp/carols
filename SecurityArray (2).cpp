#include "iostream"
using namespace std;
class Array{
	private:
		int array[100];
		int size;
	public:
		Array():size(100);
		~Array();
		friend ostream& operator<<(ostream& os,const Array& A);
		friend istream& operator>>(istream& is,const Array& A);
		Array operator+(const Array& A);
		Array operator-(const Array& A);
		int Full(array){
			for(int s=0;array!=0;array++,s++){
			}
			if(s<100){
				return 0;
			}
			else
				return 1;
		}
};