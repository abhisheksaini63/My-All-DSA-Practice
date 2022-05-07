#include<iostream>
#include<algorithm>
using namespace std;
void MaxSubarray(int arr[],int arrLength)
{
    int sum=0,best=0;
    for(int i=0;i<arrLength;i++)
        {
            sum = max(arr[i],sum+arr[i]);
            best = max(best,sum);
        }
    best==0? best = *max_element(arr,arr+arrLength):best;
    sort(arr,arr+arrLength,greater <int> ());    
    cout << best;
}
int main()
{
   
       int A[]=coderbyteInternalStdinFunction(stdin);
       int arrLength= sizeof(A) / sizeof(*A);
       MaxSubarray(A, arrLength);
   	   return 0;
}
