// // stack as an array 
// #include<iostream>
// #include<stack>
// using namespace std;

// class Stack
// {
//     public:
//     int arr[5];
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int idx;

//     Stack()
//     {
//         idx=-1;
//     }

// void push(int val)
// {
//     if(idx==5)
//     {
//         cout<<"Stack is full ! Overflow "<<endl;
//         return ;
//     }
//     idx++; // becoz initially we set our idx in -1 when we want to add ele. in the stack/array then 
//     // 1st we increase our idx (from -1 idx to 0 idx) then starts adding ele. in the stack/array 
//     arr[idx]=val;

   
// }

// void pop()
// {
//     if(idx==0)
//     {
//         cout<<"Stack is empty ! Underflow "<<endl;
//         return ;
//     }
//     idx--;
// }

// int top()
// {
//     if(idx==0)
//     {
//         cout<<"Stack is empty ! Underflow "<<endl;
//         return -1;
//     }
//     return arr[idx];
  
// }

// int size()
// {
//     return idx+1;

// }

// void display()
// {
//     for(int i=0; i<=idx; i++)
//     {
//         cout<<arr[i]<<" ";
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
//     cout<<st.size()<<endl;
//     st.pop();
//     st.display();

//     cout<<st.top()<<endl;
//     cout<<st.size()<<endl;

// }








// Practice this code again.
// Implementation of the stack as an array 



#include<iostream>
#include<stack>
using namespace std;
class Stack
{
    public:
    int arr[5];
    int n=sizeof(arr)/sizeof(arr[0]);
    int idx;

    Stack()
    {
        idx=-1;
    }


void push(int val)
{
    if(idx==5)// idx==size means array place is not empty so we can't add ele. in the array
    {
        cout<<"Stack is full ! Overflow "<<endl;
        return ;
    }
    idx++;
    arr[idx]=val;
}


void pop()
{
    if(idx==0)
    {
        cout<<"Stack is empty ! Underflow "<<endl;
        return ;
    }
    idx--;
}


int top()
{
    if(idx==0)
    {
        cout<<"Stack is empty or array is Null ! Underflow "<<endl;
        return -1;
    }
    return arr[idx];
}


int size()
{
    return idx+1;
}


void display()
{
    for(int i=0; i<=idx; i++)
    {
        cout<<arr[i]<<" ";
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

    cout<<st.top()<<endl;
    cout<<st.size()<<endl;

    st.pop();
    st.pop();

    cout<<st.size()<<endl;
    cout<<st.top()<<endl;

    st.display();

}

// Done Code 15-02-2024 01:00AM