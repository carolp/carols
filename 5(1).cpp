#include<iostream>
using std::cin;
using std::cout;
using std::endl;
double CF(long double c,long double f){//������c=0ʱ�ó��Ľ����Զ���㣬��һ���߼�������
	if(c==0){      //��������ʱc=0������Ҫ��f�����c������û�гɹ�
		c=(5/9)*(f-32);
		cout<<"c="<<c<<endl;//����ʹ�����д���������ʱ�����н��������š�nan����������Ϊʲô,��������ǡ�not a number��
		//return c;         //����һ�У�������Ϊʲô����һ������
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
