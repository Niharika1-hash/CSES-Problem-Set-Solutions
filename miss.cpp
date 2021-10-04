//https://cses.fi/problemset/task/1083
#include<iostream>
#include<vector>
using namespace std;

int main(int argc, char const *argv[]) 
{
    long n;
    cin>>n;
    vector <long> num (n-1);
    long sum = 0;
    for(long i = 0;i<n-1;i++)
    {
        cin>>num[i];
        sum+=num[i];
    }
    long n_sum = (n*(n+1))/2;
    cout<<n_sum-sum<<endl;
    return 0;
}
