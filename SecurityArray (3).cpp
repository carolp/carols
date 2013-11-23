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
int main(){
	int S[10]={0,1,2,3,4,5,6,7,8,9};
	class Array A;
	
}