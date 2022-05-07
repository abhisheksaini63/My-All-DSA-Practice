#include<iostream>
#include<algorithm>
using namespace std;
void sort(int mat[][6]) //for sort whth row wise, full matrix 
{ 
    int temp[180]; 
    int k = 0; 
    for (int i = 0; i < 30; i++) 
        for (int j = 0; j < 6; j++) 
            temp[k++] = mat[i][j]; 
    sort(temp, temp + k); 
    k = 0; 
    for (int i = 0; i < 30; i++) 
        for (int j = 0; j < 6; j++) 
            mat[i][j] = temp[k++]; 
} 

int main()
{
	int a[30][6],avg=0,sum=0,l=0,b=0,avgF=0;
	cout<<"Enter the test scores of 30 students =";
	for (int i=0;i<30;i++)
	for(int j=0;j<6;j++)
	cin>>a[i][j];
	// 1- Find the average grade of each test.
	for(int k=0;k<30;k++)
	{
	  for(l=0;l<6;l++)
		sum+=a[k][l];
	   avg = sum/6;
	cout<<"\navg grade of each test of "<<l<<" student is ="<<avg<<"\n";
	}
	// 2- Find the final grade of each student where the final grade is the average of the students five highest test scores.
	sort(a);
	for(int m=0;m<30;m++)
	{	int sm=0;
		for(int n=1;n<6;n++)				
			sm+=a[m][n];
		int final=0;
		final=sm/5;
		cout<<"\nfinal grade of student "<<m+1<<" is ="<<final<<"\n";
		avgF+=final;
		if(final<60) 
		b++;
	}
	 // 3- for number of students whose final grade is less than 60
	cout<<"\n number of students whose final grade is less than 60 is ="<<b<<"\n";
		
		// 4- find average of final grades 

	cout<<"\nAverage of final grades = "<<avgF;
	return 0;
	
}
