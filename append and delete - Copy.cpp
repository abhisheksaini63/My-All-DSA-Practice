/*#include <bits/stdc++.h>
using namespace std;
#define L (s.size() + t.size())

int main(){
    string s, t;
    int k, i;
    cin >> s >> t >> k;
    for(i = 0; s[i] == t[i]; i++);
    cout << (L <= k + i*2 && L%2 == k%2 || L < k ? "Yes" : "No");
    return 0;
}*/


// CPP Program to convert str1 to str2 in 
// exactly k operations 
#include <bits/stdc++.h> 
using namespace std; 

// Returns true if it is possible to convert 
// str1 to str2 using k operations. 
bool isConvertible(string str1, string str2, 
									int k) 
{ 
	// Case A (i) 
	if ((str1.length() + str2.length()) < k) 
		return true; 

	// finding common length of both string 
	int commonLength = 0; 
	for (int i = 0; i < min(str1.length(), 
						str2.length()); i++) { 
		if (str1[i] == str2[i]) 
			commonLength++; 
		else
			break; 
	} 

	// Case A (ii)- 
	if ((k - str1.length() - str2.length() + 2 * commonLength) % 2 >= 0) 
		return true; 

	// Case B- 
	return false; 
} 

// driver program 
int main() 
{ 
	string str1 , str2 ;
	cin >> str1 >> str2;
	int k ;
	cin >> k;
	if (isConvertible(str1, str2, k)) 
	cout << "Yes"; 
	else
	cout << "No"; 
	return 0; 
} 

