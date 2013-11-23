#include "iostream"
using namespace std;
class Student{
	private:
		char name[15];
		double grade;
		char ID[15];
	public:
		Student():grade(0.0){}
		~Student(){}
};//student[200];
class Node{
	private:
	class Student stu;
	class Node *next;
};
class List{
	private:
	class Node;
}
void AddStu(Node& st,List& L){
	struct Node *pre;
	for(pre=(*L).next;pre!=0;pre=(*pre).next){
		if((*pre).stu.ID==(*st).stu.ID){
			cout<<"can not be added twice!"<<endl;
		}
		elsr{
			pre.next=st;
		}
	}	
}
void DeleteStu(Student& stu,List& L){
	struct Node *pre,*temp;
	for(pre=(*L).next;pre!=0;pre=(*pre).next){
		if((*pre).next.stu.ID==(*st).stu.ID){
			temp=(*pre).next.next;
			delete[] (*pre).next;
			pre=temp;	
		}
}
void getStu(List& L){
	for(Struct Node *s=(*L).next;s!=0;s=(*s).next){
		cout<<"Name:"<<(*s).stu.name<<endl;
		cout<<"ID:"<<(*s).stu.ID<<endl;
		cout<<"Grades:"<<(*s).stu.grade<<endl;
	}
}
void setGrade(List& L){
	for(Struct Node *s=(*L).next;s!=0;s=(*s).next){
		double g=0;
		char id[15];
		cou<<"ID:"<<endl;
		cin>>id[15];
		cout<<"Grade:"<<endl;
		cin>>g;
		if((*s).stu.ID==id[15]){
			(*s).stu.grade=g;
			char Action;
			cout<<"continue? 1)Yes;2)No,exit;"<<endl;
			cin>>Action;
			switch(Action){
				case '1':
					s=(*L).next;
					break;
				case '2':
					exit(1);
					break;
			}			
		}
	}
}
