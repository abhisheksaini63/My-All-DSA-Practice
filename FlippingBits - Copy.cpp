#include<bits/stdc++.h>
using namespace std;

unsigned int onesComplement(unsigned int n)
{

return ((1 << 32) - 1) ^ n;
}

int main()
{
unsigned int n;
cin >> n;
cout << onesComplement(n);
return 0;
}

