#include "iostream"
using namespace std;
class Array{
	private:
		int *array;
		int size;
	public:
		Array();
		Array(int *a,int s);
		Array(const Array& A);
		~Array();
		friend ostream& operator<<(ostream& os,const Array& A);
		friend istream& operator>>(istream& is,const Array& A);
		Array operator+(const Array& A);
		Array operator-(const Array& A);
		int getSize()const;
		int* getarr()const;	
};