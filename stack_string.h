#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    string value;
    Node *Next;
    Node *prev;
    Node(string val)
    {
        value= val;
        Next=NULL;
        prev = NULL;
    }
};

class Stack
{
    Node *head=NULL;
    Node *top=NULL;
    int countt =0;
    //push method
    public:
    void push(string value)
    {
        Node *newnode = new Node(value);
        if(head==NULL)
        {
            head=top=newnode;
            countt++;
        }
        else
        {
            top->Next=newnode;
            newnode->prev=top;
            top=top->Next;
            countt++;
        }
    }
    //pop method
    string pop()
    {
        string check;
         Node *delnode = top;
        if(head==NULL)
        {
            return "0";
        }
        else if(top==head)
        {
            top=head=NULL;
            countt--;
        }
        else
        {
            top=delnode->prev;
            top->Next=NULL;
            countt--;
        }
        check=delnode->value;
        delete delnode;
        return check;
    }

    //top method
    string Top()
    {
        if(top==NULL)
        {
           return "0";
        }
        else
        {
            return top->value;
        }
    }

    //empty method
    bool Empty()
    {
        if(head==NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    //find size
    int Size()
    {
        return countt;
    }
    void Display()
    {
        Node  *temp=top; // if I give here head, then it will give us value bottom to top, reverse orderr
        for(int i=0;i<Size();i++)
        {
            cout<<temp->value<<endl;
            temp=temp->prev; // if we give head then we have to give here temp->Next;

        }
    }

};

