#include<bits/stdc++.h>
using namespace std;
class Node
{
public :
    int value;
    Node *Next;
    Node *prev;
    Node(int val)
    {
        value=val;
        Next=NULL;
        prev=NULL;
    }
};
class Stack
{
    Node *head =NULL;
    Node *top =NULL;
    int countt=0;
public:
    /*Stack()
    {
        head=NULL;
        top=NULL;
    }*/
    //push operation
    void push(int value)
    {
        Node *newnode = new Node(value);
        if(head == NULL)
        {
            head=top=newnode;
            countt++;
            return;
        }
        else
        {
            top->Next=newnode;
            newnode->prev=top;
            top=newnode; // top=top->Next
            countt++;
        }
    }

    //pop operation
    int pop()
    {
        Node *delnode =top;
        int check =-1;
        if(head==NULL) // when there is no vlaue
        {
            return -1;
        }
        else if(head==top)//when there is one value
        {
            head=top=NULL;
            countt --;
        }
        else // when there is multiple values
        {
            top= delnode->prev;
           top->Next=NULL;
           countt --;
        }

        check = delnode->value;
        delete delnode;
        return check;
    }
    // empty operation
    bool emptyy()
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
    //top operation
    int Top()
    {

        if(top==NULL)
        {
            return -1;
        }
        else
        {
            return top->value;
        }
    }
    // size operation
    int sizee()
    {
       return countt;
    }

};

