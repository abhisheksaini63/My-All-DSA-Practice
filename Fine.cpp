#include<iostream>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int d1,m1,y1;
    int d2,m2,y2;
    int fine=0;
    cin>>d1>>m1>>y1;
    cin>>d2>>m2>>y2;
    y2<y1?fine=10000:(m1>m2&&y1==y2?fine=500*(m1-m2):(d1>d2&&m1==m2&&y1==y2?fine=15*(d1-d2):fine =0));
    cout<<fine<<endl;
    if(y2<y1)
	fine=10000;
	else if(m1>m2&&y1==y2)
	fine=500*(m1-m2);
	else if(d1>d2&&m1==m2&&y1==y2)
	fine=15*(d1-d2);
	cout<<fine;
    return 0;
    
}
