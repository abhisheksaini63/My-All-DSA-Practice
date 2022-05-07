// CPP program to check whether second string 
// can be formed from first string 
#include <bits/stdc++.h> 
using namespace std; 
const int MAX = 256; 

bool canMakeStr2(string str1, string str2) 
{ 
	// Create a count array and count frequencies 
	// characters in str1. 
	int count[MAX] = {0}; 
	for (int i = 0; i < str1.length(); i++) 
		count[str1[i]]++; 
		
	// Now traverse through str2 to check 
	// if every character has enough counts 
	for (int i = 0; i < str2.length(); i++) 
	{ 
		if (count[str2[i]] == 0) 
		return false; 
		count[str2[i]]--; 
	} 
	return true; 
} 

// Driver Code 
int main() 
{ 
	string str1 = "bat"; 
	string str2 = "tab"; 
	if (canMakeStr2(str1, str2)) 
	cout << "Yes"; 
	else
	cout << "No"; 
	return 0; 
} 

