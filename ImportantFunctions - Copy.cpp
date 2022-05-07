#include<bits/stdc++.h>
using namespace std;
// find()
// swap()
//sort()
// binary_search()
// lower_bound()
// upper_bound()
// reverse()
// setBits()
// stringStream()
// next_permutation   // next greater element// very important	
int main()
{
	int a[] = {1,4,3,2,5,6};
	int n  = sizeof(a)/sizeof(int);
//	for(int i = 0 ;i< n;i++)cout << a[i]<< " ";
	
//	cout << find(a,a+n, 4)-a<< endl;

//	swap(a[1],a[3]);
//	for(int i = 0 ;i< n;i++)cout << a[i]<< " ";

//	sort(a,a+n);
//	for(int i = 0 ;i< n;i++)cout << a[i]<< " ";

//	sort(a,a+n);
//	cout << binary_search(a,a+n,2);

//	sort(a,a+n);
//	cout << lower_bound(a,a+n,3)-a;


//	sort(a,a+n);
//	cout << upper_bound(a,a+n,4)-a;

//	reverse(a,a+n);
//	for(int i = 0 ;i< n;i++)cout << a[i]<< " ";
	
//	int k = 5;
//	cout << __builtin_popcount(k);

//	string s ;
//	getline(cin ,s);
//	stringstream strm(s);
//	string word;
//	while(strm>>word)cout << word<< endl;


	for(int i: a) cout << i<< " ";
	cout << endl;
	next_permutation(a,a+n);
	for(int i: a) cout << i<< " ";
	
	
	
	
}
