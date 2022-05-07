#include<iostream>
#include<conio.h>
using namespace std;
class node
{
	public:
		int data;
		node *next;
		
		node(int data){
			this->data = data;
			this->next = nullptr;
		}	
};

node *start = nullptr;

void insertLast(int data ){
	node *t = new node (data);
	if(start == nullptr) start = t;
	else {
		node *r = start;
		while(r->next != nullptr)r = r->next;
		r->next = t;
	}
}

void insertFirst(int data){
	node *t = new node (data);
	if(start == nullptr) start = t;
	else {
		node *r = start ;
		t->next = r;
		start = t;
	}
}

void deleteFirst(){
	node *t = start;
	if(start != nullptr){
		start = start->next;
	delete(t);
	}
	else{
		cout << "List is Empty, Please insert some values first";
	}
	
}


void deleteLast(){
	node *t = start ;
	if(start == nullptr ) cout << "List is Empty, Please insert some values first";
	else if(start->next == nullptr ){
		node *r = start ;
		start = nullptr ;
		delete(r);
	}
	else {
		
		while(t->next->next != nullptr){
			t = t->next;
		}
		node *r = t->next;
		t->next = nullptr ;
		delete(r);
	}
}

void showList(){
	if(start == nullptr ) cout << "List is Empty, please insert some values first ";
	else 
	{
		node *r = start ;
		while(r != nullptr) {
			cout << r->data<< " " ;
			r = r->next;
		}
	}
}


int main(){
	while(1){
		system("cls");
		cout << "1: Insert at first " << endl;
		cout << "2: Insert at last " << endl;
		cout << "3: Delete at first "<< endl;
		cout << "4: Delete at last "<< endl;
		cout << "5: See list "<<endl;
		cout << "Please enter your choice = " ;
		int choice ;
		cin >> choice ;
		switch (choice ){
			case 1:{
				int data ;
				cout << "please Enter the value = " ;
				cin >> data ;
				insertFirst(data);
				getch();
				break;
			}
			case 2:{
				int data ;
				cout << "Please Enter the value = ";
				cin >> data;
				insertLast(data);
				getch();
				break;
			}
			case 3:{
				deleteFirst();
				getch();
				break;
			}
			case 4:{
				deleteLast();
				getch();
				
				break;
			}
			case 5:{
				showList();
				getch();
				break;
			}
			default:{
				cout << "Invalid input " << endl;
				break;
			}
		}
	}
}
















