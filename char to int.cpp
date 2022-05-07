#include<iostream>
#include<string>
using namespace std;
int saveThePrisinor(int ,int ,int );
int saveThePrisoner(int n, int m, int s) {
   if(n>=m)
   {
       long f=(m+s)-1;
        if(f<=n)
        return f;
        else
        {
            return f-n;
        }    
       
   }
   else
   {
       long a,d;
       a=m%n;
       d=(a+s)-1;
       if(d<=n)
       return d;
       else
       {
           return d-n;
       }
   }
return 0;
}

int main()
{
	int saveThePrisinor(int ,int ,int );
	int a=654809340;
	int b=204894365;
	int s=472730208;
	saveThePrisinor(a,b,s);
	return 0;
}
