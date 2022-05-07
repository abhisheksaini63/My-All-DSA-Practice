#include <iostream>
#include<vector>
using namespace std;

class Solution {
	vector<char>s;
	vector<char>q;
	public:
		int top=-1;
		int last=q.size()-1;
	void enqueueCharacter(char a)
	{
		q.push_back(a);
		last++;
	}
	void pushCharacter(char c)
	{
		s.push_back(c);
		top++;
	}
	
	char popCharacter ()
	{
		return s[top--];
	}
	char dequeueCharacter()
	{
		return q[last--];
	}
    //Write your code here

};

int main() {
    // read the string s.
    string s;
    getline(cin, s);
    
  	// create the Solution class object p.
    Solution obj;
    
    // push/enqueue all the characters of string s to stack.
    for (int i = 0; i < s.length(); i++) {
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }
    
    bool isPalindrome = true;
    
    // pop the top character from stack.
    // dequeue the first character from queue.
    // compare both the characters.
    for (int i = 0; i < s.length() / 2; i++) {
        if (obj.popCharacter() != obj.dequeueCharacter()) {
            isPalindrome = false;
            
            break;
        }
    }
    
    // finally print whether string s is palindrome or not.
    if (isPalindrome) {
        cout << "The word, " << s << ", is a palindrome.";
    } else {
        cout << "The word, " << s << ", is not a palindrome.";
    }
    
    return 0;
}
