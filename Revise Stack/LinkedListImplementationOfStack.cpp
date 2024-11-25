//  Stack as a Linked List
// Implementation of the stack as a linked list  
// In this example we must need to use only head of the ll and apply all operation like push, pop, top at the head of the ll 
// becoz we implement stack from the ll 
// and in stack all the operation is perform at the top of the stack 
// not bottom or in case of ll not in tail 
// so we use only head becoz we implement a stack and all ops in stack is perform over the top of the stack.

// #include<iostream>
// using namespace std;
// class Node
// {
//     public:
//     int val;
//     Node* next;

//     Node(int val)
//     {
//         this->val=val;
//         this->next=NULL;
//     }
// };
// class Stack
// {
//     public:
//     Node* head;
//     int size;

//     Stack()
//     {
//         head=NULL;
//         size=0;
//     }


// void push(int val)
// {
//     Node* temp=new Node(val);
//     temp->next=head;
//     head=temp;
// }


// void pop()
// {
//     if(head==NULL)
//     {
//         cout<<"Stack is empty ! Underflow "<<endl;
//         return ;
//     }
//     else
//     {
//         head=head->next;
//     }
// }

// int top()
// {
//     if(head==NULL)
//     {
//         cout<<"Stack is empty ! Underflow "<<endl;
//         return -1;
//     }
//     else
//     {
//         return head->val;
//     }
// }


// void display()
// {
//     Node* temp=head;
//     while(temp!=NULL)
//     {
//         cout<<temp->val<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;
// }
// };

// int main()
// {
//     Stack st;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     st.push(50);

//     st.display();
//     cout<<st.top()<<endl;

//     st.pop();
//     st.pop();
    
//     st.display();
//     cout<<st.top()<<endl;

// }





// Practice upper code again 
// Implementation of the stack using linked list 

#include<iostream>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;

    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};

class Stack
{
    public:
    Node* head;
    int size;
    
    Stack()
    {
        head=NULL;
        size=0;
    }

void push(int val)
{
    Node* temp=new Node(val);
    temp->next=head;
    head=temp;
    size++;
}

void pop()
{
    if(size==0)
    {
        cout<<"Stack is empty Underflow !"<<endl;
        return ;
    }
    head=head->next;
    size--;
}

int top()
{
    if(size==0)
    {
        cout<<"Stack is empty Underflow "<<endl;
        return -1;
    }
    return head->val;
}



void display()
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

};
int main()
{
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    st.display();
    cout<<st.size<<endl;
    cout<<st.top()<<endl;
    st.pop();
    st.pop();
    st.pop();

    st.display();
    cout<<st.top()<<endl;

    cout<<st.size;

}