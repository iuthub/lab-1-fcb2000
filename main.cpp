#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n+10];
    for(int i=1;i<=n;i++) cin>>a[i];
    int ind1=max_element(a+1,a+1+n)-a;
    int ind2=min_element(a+1,a+1+n)-a;
    swap(a[ind1],a[ind2]);
    for(int i=1;i<=n;i++) cout<<a[i]<<" ";
    return 0;
}
