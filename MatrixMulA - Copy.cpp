#include<iostream>
using namespace std;

class Matrix{
	public:
		
		int r= 0, c= 0, M[50][50];

		void getdata(){
			cout << "Enter the no. of rows = ";
			cin >> r;
			cout << "Enter the no. of columns = ";
			cin>> c;
			for(int i = 0 ;i < r ;i++)
			for(int j = 0; j< c; j++){
				cin >> M[i][j];
			}
			
			
			cout << endl;
			cout << endl;
		}
		
		
		void showdata(){
			
			for(int i = 0 ;i < r ;i++)
			{
				for(int j = 0; j< c; j++){
				cout<<  M[i][j] << "  ";
				}
				cout << endl;
			}
			cout <<endl;
			cout << endl;
			
		}
		
		
		friend void matrixMul(Matrix , Matrix);
};


void matrixMul(Matrix m1, Matrix m2){
	int  mul[3][3]= {0};
	int sum = 0;
	
	for(int i = 0 ;i < 3;i++)
	{
		
		for(int j = 0 ; j< 3; j++)
		{
			
			for(int k =0 ;k < 3;k++)
			{
				sum += m1.M[i][j] * m2.M[j][k];
			}
			
			mul[i][j] = sum ;
			sum = 0;
		}
	}
	
	cout << endl;
	cout <<"The Multiplication is below" <<endl;
	
	for(int i = 0 ;i < 3 ;i++)
	{
		for(int j = 0; j< 3; j++){
		cout<<  mul[i][j] << "  ";
		}
		cout << endl;
	}
		
		
	cout << "The End"<< endl;
	
}


int main()
{
	Matrix m1, m2;
	m1.getdata();	
	cout << "You have entered the below matrix " << endl;
	m1.showdata();
	
	m2.getdata();
	cout << "You have entered the below matrix " << endl;
	m2.showdata();
	
	
	
	matrixMul(m1, m2);
	
	
	return 0;
	
	
}













