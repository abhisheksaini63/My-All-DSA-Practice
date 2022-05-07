#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int findMinDiff(int arr[], int n)
{

int diff = INT_MAX;
 
for (int i=0; i<n-1; i++)
    for (int j=i+1; j<n; j++)
        if (abs(arr[i] - arr[j]) < diff)
                diff = abs(arr[i] - arr[j]);

return diff;
}
int main()
{
	int n;
	cin >> n;
	int a[n];
	for(int i = 0 ;i< n; i++) cin >> a[i] ;

	vector<int> v;
	int mindif = findMinDiff(a,n);
	for(int i = 0 ;i< n -1;i++)
	{
		for(int j = i+1 ;j < n;j++)	
		{
			int diff = abs(a[i]-a[j]) ;
			if(diff == mindif )
			{
				v.push_back(a[i]);
				v.push_back(a[j]);
			}
		}
	}
	
	sort(v.begin(),v.end());
	for(int i= 0 ;i<v.size();i++)
	{
		cout << v[i] << " " ;
	}
	return 0;
	
	
}
