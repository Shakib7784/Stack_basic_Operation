#include<bits/stdc++.h>
#include"stack_practice.h"
using namespace std;
int main()
{
    Stack s;
     s.push(1);
    s.push(2);
    s.push(3);
    s.Display();
    cout<<"size: "<<s.Size()<<endl;
    cout<<"TOP: "<<s.Top()<<endl;
    while(!s.Empty())
    {
        cout<<s.pop()<<endl;
    }
    cout<<"Now top is: "<<s.Top()<<endl;

}
