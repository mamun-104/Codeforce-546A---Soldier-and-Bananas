#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    int k,n,w;
    cin>>k>>n>>w;
    int sum=0;

    int i;
    for(i=1;i<=w;i++)
    {
        sum = sum + (i*k);
    }

    // Careful, for 2 10 2, sum NEGATIVE, thats why if.
    if((sum-n)<=0){cout<<"0"<<endl;}
    else {cout<<sum-n<<endl;}

    return 0;
}



