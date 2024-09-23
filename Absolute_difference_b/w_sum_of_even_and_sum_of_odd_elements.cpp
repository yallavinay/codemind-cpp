#include<iostream>
#include<math.h>
using namespace std;
int main ()
{
    int n,i,sum1=0,sum2=0;
    cin >> n;
   int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
        if (arr[i]%2==0)
        {
            sum1=sum1+arr[i];
        }
        else
        {
            sum2+=arr[i];
        }
    }
    int result = abs(sum1-sum2);
    cout<<result;
}