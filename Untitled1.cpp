#include<iostream>
using namespace std;
int arrangements(int input1)
{
  
  if (input1 == 1) return 0;
  if (input1 == 2) return 1;
 
  return (input1 - 1) * (arrangements(input1 - 1) + arrangements(input1 - 2));
}
int main()
{
	int input1=3;
	int input2[]={2,4,8};
	cout<<HCF(input1,input2);
	return 0;
}
