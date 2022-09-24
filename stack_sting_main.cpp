#include<bits/stdc++.h>
#include"stack_string.h"
using namespace std;
int main()
{
    Stack s;
     s.push("Shakib Hasan");
    s.push("Hridoy ");
    s.push("Jebin");
    s.Display();
    cout<<"size: "<<s.Size()<<endl;
    cout<<"TOP: "<<s.Top()<<endl;
    while(!s.Empty())
    {
        cout<<s.pop()<<endl;
    }
    cout<<"Now top is: "<<s.Top()<<endl;

}

