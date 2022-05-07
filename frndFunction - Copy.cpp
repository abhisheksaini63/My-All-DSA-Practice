#include<bits/stdc++.h>
using namespace std;
class vo
{
	private:
	int A = 12;
	public:
		friend void frnd(vo i);
};

void frnd (vo i){
	
	cout << i.A;
}

int main()
{
	vo obj;
	frnd(obj);
	return 0;
}

