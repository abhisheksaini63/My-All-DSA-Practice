#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
class node{
	public:
		int data;
		node *next;
		
		node(int data){
			this->data = data;
			this->next = nullptr;
		}
};


node *head = nullptr;


void insertNode(int data){
	node *t = new node(data);
	
	if(head == nullptr){
		head = t;
	}
	
	else {
		node *r = head ;
		while(r->next != nullptr){
			r = r->next;
		}
		
		r->next = t;
	}
}

void deleteNode(){
	node *t = head ;
	if(head == nullptr){
		cout << "List is empty" << endl;
		getch();
	}
	
	else{
		node *r = head;
		
		while(r->next->next != nullptr) r= r->next;
		
		node *d = r->next;
		delete(d);
		r->next = nullptr;
		cout << "Deleted Successfully" << endl;
		getch();
	}
	
}


void showList(){
	node *t = head ;
	if(head == nullptr ) cout << "List is empty" << endl;
	
	else{
		node *r = head ;
		
		while(r != nullptr ) {
			cout << r->data <<" " ;
			r = r->next;
		}
		getch();
	}
}


void reverseListIt(){	
	if(head == nullptr)cout << "List is empty" << endl;
	
	else{
		node *currNode = head, *pre = nullptr , *next ;
		while(currNode != nullptr){
			
			next= currNode->next;
			currNode->next = pre;
			pre = currNode;
			currNode = next;		
		}
		
		head = pre;
	}
	cout << "Reverse Successfully" << endl;
	getch();
}


void revrsRecursion(node *p){
	
	if(p->next == nullptr){
		head = p ;
		return ;
	}
	
	revrsRecursion(p->next);
	
	p->next->next = p;
	p->next = nullptr;
	cout << "Reverse Successfully" << endl;
	getch();	
}


void printNormalRecursion(node *r){
	if(r->next == nullptr) {
		cout << r->data << " ";
		getch();
		return ;
	}
	cout << r->data << " " ;
	
	printNormalRecursion(r->next);
	
}

void printReverseWithRecursion(node *r){
	if(r->next == nullptr) {
		cout << r->data <<" " ;
		getch();
		return ;
	}
	printReverseWithRecursion(r->next);
	cout << r->data << " " ;
	
}

int main() {
	int n;
	cin >> n;
	while(n--){
		int t;
		cin >> t;
		insertNode(t);
	}
	
	while(1){
		system("cls");
		cout << "1. Delete Last Node "  << endl;
		cout << "2. Show List" << endl;
		cout << "3. Reverse List "<< endl;
		cout << "4. Reverse With Recursion" << endl;
		cout << "5. Print With Recursion" << endl;
		cout << "6. Print Reverse With Recursion" << endl;
		cout << "7. Exit " << endl;
		
		int choice ;
		cin >> choice ;
		switch(choice ) {
			case 1:{
				deleteNode();
				break;
			}
			case 2:{
				showList();
				break;
			}
			case 3:{
				reverseListIt();			
				break;
			}
			case 4:{
				revrsRecursion(head);
				break;
			}
			case 5:{
				printNormalRecursion(head);
				break;
			}
			case 6:{
				printReverseWithRecursion(head);
				break;
			}
			case 7:{
				exit(0);
				break;
			}
			default:{
				cout << "Invalid Input" << endl;
				break;
			}
		}
		
	}
	
	return 0;
}






















