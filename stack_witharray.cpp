#include<bits/stdc++.h>
using namespace std;
void push(int a[], int *top, int value, int siz)
{
    if(*top>=siz)
    {
        cout<<"overflow is happen"<<endl;
    }
    else
    {
        *top++;
        int v = *top;
        a[v]=value;
    }
}
void display(int arr[], int *t )
{
    if(*t>=0)
    {
        cout<<"stack elements are"<<endl;
        for(int i=*t; i>=0;i--)
        {
            cout<<arr[i]<<endl;
        }
    }
    else
    {

        cout<<"stack is empty"<<endl;
    }
}
int main()
{
    int arr[100], top =-1;
    int siz =sizeof(arr)/sizeof(arr[0]);
    push(arr,&top,10,siz);
    push(arr,&top,1,siz);
    push(arr,&top,2,siz);
    push(arr,&top,3,siz);
    display(arr, &top);

}
