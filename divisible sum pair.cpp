#include<iostream>
using namespace std;
int main(){
 int A[100] ;
 int n,k,s,t=0;
cin>>n>>k;
for(int i=0;i<n;i++)
    cin>>A[i];
for(int i =0;i<n;i++)
{
    for(int j=i+1;j<n;j++)
    {
        s=A[i]+A[j];
        if(s%k==0)
            t++;
    }
}
cout<<t;
}
