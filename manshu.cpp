#include<iostream>
#include<string>
using namespace std;

class Student 
{
	string name;
	int age;
	
	public:
		
		Student(int age, string nam) 
		{
			name=nam;
			this->age=age;
		}
		
		void display(Student s)
		{
			cout<<"Age ="<<s.age;
			cout<<endl<<"Name is= "<<s.name<<endl;
		}
};

int main()
{
	string name="manshu";
	Student s1(32,name);
	name[3]='e';
	Student s2(25,name);
	s1.display(s1);
	s2.display(s2);
	//display(s2);
	return 0;
}
