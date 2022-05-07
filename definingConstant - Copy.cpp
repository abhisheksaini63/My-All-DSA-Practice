#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	bool arr [n] = {true};
	arr[0] = false;
	arr[1] = false;
	for(int i = 2 ; i * i <= n; i++)
	 {
	 	int c =i ;
	 	for(int j = c*c ;j <= n ;j = i * (++c))
	 	{
	 		arr[j] = false;
		 }
	 }
	 
	 int count =0;
	 for(int i =0 ; i<= n ;i++)
	{
		if(arr[i])
		count++;
	}
	cout << count <<endl;
}

//#include<bits/stdc++.h>
//using namespace std;
//bool checkPrime(int n)
//{
//	int count = 0;
//	for(int i= 1 ;i*i <= n;i++)
//	{
//		if(n % i == 0)
//		{
//			if(i *i == n)
//			count++ ;
//			else
//			count +=2;
//		}
//	}
//	if(count == 2)
//	return true;
//	
//	return false;
//}
//int main()
//{
//	int n;
//	cin >> n;
//	int count = 0;
//	for(int i = 1 ;i<= n; i++)
//	{
//		if(checkPrime(i))
//		count++;
//	}
//	
//	cout << count << endl;
//}
