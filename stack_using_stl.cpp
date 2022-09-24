#include<bits/stdc++.h>
#include<stack>
using namespace std;
int main()
{
    stack<int>st;
    stack<int>rev;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    while(!st.empty())
    {
        cout<<st.top()<<endl;
        rev.push(st.top());
        st.pop();
    }
cout<<"size"<<rev.size()<<endl;
    cout<<"after reverse"<<endl;
    while(!rev.empty())
    {
        cout<<rev.top()<<endl;

        rev.pop();
    }

}
