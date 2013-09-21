#include<iostream>
using std::cin;
using std::cout;
using std::endl;
double CF(long double c,long double f){//当输入c=0时得出的结果永远是零，哪一步逻辑出错了
	if(c==0){      //假如输入时c=0即代表将要由f计算出c，但是没有成功
		c=(5/9)*(f-32);
		cout<<"c="<<c<<endl;//当我使用这行代码进行输出时，运行结果最后会跟着“nan”不明白是为什么,度娘解释是“not a number”
		//return c;         //接上一行，不明白为什么不是一个数？
	}
	else{
		f=9*c/5+32;
		cout<<"f="<<f<<endl;
		//return f;
	}
}
int main(){
	long double c=0,f=0;
	cin>>c>>f;
	cout<<CF(c,f)<<endl;
	return 0;
}
