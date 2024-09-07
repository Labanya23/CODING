#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int value;
    Node*next;
};
class Queue
{
    Node*head;
    Node*tail;
    public:

    Queue()
    {
        head=NULL;
        tail=NULL;
    }
    void push(int val)
{
    if(head==NULL  && tail==NULL){
        Node*temp=new Node();
        (*temp).value=val;
        (*temp).next=NULL;

        head=temp;
        tail=temp;

    }
    else{
        Node*temp=new Node();
        (*temp).value=val;
        (*temp).next=NULL;

        (*tail).next=temp;
        tail=temp;

    }
}

int isEmpty()
{
    if(tail==NULL)

        
    return 1;
    else
    return 0;
}

int front(){
    if(head==NULL){
        cout<<"Queue is empty"<<endl;
    }
    else
    return (*head).value;
}

void pop()
{
    Node*temp;
    if(isEmpty())
    {
        cout<<"Queue is empty"<<endl;
    }
    else{
        temp=head;
        head=(*head).next;
        delete temp;
    }

}
void print()
{
    Node*curr;
    if(isEmpty())
    {
        cout<<"Queue is empty"<<endl;
    }
    else{
        Node*curr=head;
        while(curr!=NULL)
        {
            cout<<(*curr).value<<" ";
            curr=(*curr).next;
        }
        cout<<endl;
    }
}

};

int main()
{
    Queue st;
    st.push(5);
    st.push(3);
    st.push(6);

    st.print();
    st.isEmpty();

    st.pop();
    st.print();
    return 0;
}