#include<bits/stdc++.h>
#include<string >
#include<math.h>
using namespace std;
string removeSpaces(string str)  
{ 
    str.erase(remove(str.begin(), str.end(), ' '), str.end()); 
    return str; 
}
int main()
{
	string s;
	getline (cin, s);
	s=removeSpaces(s);
	int r=0,c=0,len=s.length();
	float row=sqrt(len);
		r=row;
		c=row+1;
		if(row == (int)row)
		c=c-1;
	int result=c*r;
	if(result<=len)
	c=r;
	for(int i=0;i<r;i+=c)
	 {
	 	for(int j=i;j<c&&j<len;j++);
		 {
			cout<<	 	
		 }
	 }
	
	cout<<s;
	
}
