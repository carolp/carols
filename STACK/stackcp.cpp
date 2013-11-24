
#include "iostream"
using namespace std;

void Stack_Push(Stack s,int item);
void Stack_Top(Stack s,int *item);

int main(){
	Stack s;
	int item=1;
	int *item1;
	Stack_Init(s);
	Stack_Push(s,item);
	Stack_Top(s,item1);
	cout<<*item1<<endl;
	return 0;
}


typedef struct Node{
	int top;
	int entry[MAX];
}Stack,*StackPtr;

void Stack_Init(Stack s){    //s是Stack，返回值却是StackPtr，可行否？ 
	s.top=-1;
	//return s;
}
void Stack_Push(Stack s,int item){
	if(s.top!=MAX-1){               //判满 
		s.top++;
		s.entry[s.top]=item;
	}
}
/*void Stack_Pop(Stack s,int *item){
	if(s.top!=-1){
		*item=s.entry[top];
		s.top--;
	}
}*/
void Stack_Top(Stack s,int *item){
	if(s.top!=-1){
		*item=s.entry[s.top]; 
	}
}