#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
class inter {
	public:
		int a; 
		int b;
};
bool compare (inter ab, inter ba)
{
	return ab.a<ba.a;
}
int main()
{
	inter arr[] = {{9,4}, {1,3}, {2,4}, {4,3}, {5 ,2}};
	sort(arr, arr+5, compare);
	for(int i = 0 ;i < 5 ;i++)
	{
		cout<< arr[i].a << " : " << arr[i].b<<endl; 
		
	}
	return 0;
}
