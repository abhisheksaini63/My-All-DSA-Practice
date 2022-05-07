#include<iostream>
using namespace std;
class Triplet{
	public:
		int gcd;
		int x;
		int y;
};

Triplet getAns(int a, int b)
{
	if(b == 0)
	{
		Triplet ans;
		ans. gcd = a;
		ans.x = 1;
		ans.y = 0;
		return ans;
	}
	
	Triplet smallans = getAns (b, a%b);
	Triplet myans ;
	myans.gcd = smallans.gcd;
	myans.x = smallans.y;
	myans.y = (smallans.x - (a/b)*smallans.y);
	
	return myans;
}

void getInverse(int a, int m)
{
	Triplet invers = getAns(a, m);
	cout << "Multiplicative modulas inverse is = " << invers.x;
	
}

int gcd (int a, int b)
{
	if (b== 0)
	return a;
	
	return gcd(b, a%b);
}


int main()
{
	int a, m;
	cin >>a>> m;
	getInverse(a, m);
//	Triplet ans = getAns(a, b);
//	cout << ans.gcd << endl;
//	cout << ans.x << endl;
//	cout << ans.y << endl;
	return 0;
	
}
