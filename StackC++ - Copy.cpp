#include<iostream>
#include<conio.h>
using namespace std;

int stack [100];
int top = -1;

bool isEmpty(){
	if(top >=0)return false;
	else return true;
	return false;
}

void push (int data){
	if(top <100 ){
		stack[++top] = data;
	}
	else cout << "Stack is full "  << endl;
}

void show (){
	if(!isEmpty())
	for(int i  = 0 ;i <= top ;i++)cout << stack[i] << " " ;
	else{
		cout << "Pease insert first" << endl;
	}
}

int pop (){
	int data;
	if(top>-1 ){
		return data = stack[top--];
	}
	else {
		cout << "Stack is empty " << endl;
		return -1;
	}
	
	return -1;
}

int peek(){
	if(top>-1)return stack[top];
	else cout << "Stack is empty"<< endl;
	return -1;
}



int main(){
	
	
	
	while(1){
		system("cls");
	cout << "1. Push a value "	<< endl;
	cout << "2. Pop a vlaue " << endl;
	cout << "3. Get peek value" << endl;
	cout << "4. Show Values " << endl;
	cout << "5. exit" << endl;
		
		cout << "Enter your choice = " ;
		int choice ;
		cin >> choice ;
		switch(choice ){
			
			case 1:
				{cout << "Enter the value = ";
				int val ;
				cin >> val;
				push(val);
				cout << "Push Successfully" << endl;
				getch();
				break;
				}
			
			case 2:
				{
					int po = pop ();
				if (!isEmpty()){
					cout << "You poped = " << po << endl;
				}
				else cout << "Please insert first "<< endl;
				getch();
				break;
				
				}
			case 3:
				{
					int pe = peek();
				if(!isEmpty()) cout << "The top element is = " << pe << endl;
				else cout << "Please insert first "<< endl;
				getch();
				break;
				
				}
				
			case 4:
				{
					show() ;
					getch();
					break;
				}
			case 5:
				{exit(0);
				break;
				}
			
			default :
				{
					cout << "Invalid Input, Please try again"<< endl;
				getch();
				break;
				}
		}
	}
	
	
}
