#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
      sort(a,a+n);
      vector<int>v;
      for(int i=0;i<n-2;i++)
        {
            int diff = abs((a[i]-a[i+1])+(a[i+1]-a[i+2]));
            v.push_back(diff);
        }
        int mi = v[0];
        for(int i=0;i<v.size();i++)
        {
            if(mi>v[i])
            {
                mi=v[i];
            }
        }
        cout<<mi<<endl;
    }
}
