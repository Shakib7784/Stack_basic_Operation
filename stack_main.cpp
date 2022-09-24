#include<bits/stdc++.h>
#include"stack_linked_List.h"
using namespace std;

int main()
{
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout<<s.Top()<<endl;
    while(!s.emptyy())
    {
        cout<<"Value  "<<s.pop()<<endl;
        cout<<"size: "<<s.sizee()<<endl;
    }

 cout<<s.Top()<<endl;




}
