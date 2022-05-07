#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string s;
	cin>> s;
	int n; 
	cin >> n;
	int a[n];
	int sum = 0;
	int count = 1;
	vector<int>ans;
	
	for(int i =0 ;i< n;i++){
		cin>> a[i];
	}
	
		for(int i = 0 ;i< s.length();i++)
		if(i>=1 && s[i] == s[i-1])
		{
			for(int j = i ;s[j-1] == s[j]&& j>0; j--)
			{
					sum = (int )(s[j]-'a'+1);
					count++;
			}
			ans.push_back(count * sum);
			count =1 ;
		}
		else
		{
			ans.push_back((int) (s[i]- 'a'+1));
		}
		vector<int> :: iterator it = ans.begin();
	sort(ans.begin(),ans.end());
	for(int i = 0 ;i< n;i++)
	{
		if(binary_search(ans.begin(),ans.end(),a[i]))
		{
			cout <<"YES" <<endl;
		}
		else
		{
			cout << "NO" <<endl;
		}
	}
	
	
	return 0;
	
	
}
