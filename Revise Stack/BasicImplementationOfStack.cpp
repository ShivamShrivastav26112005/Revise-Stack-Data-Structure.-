// // Basic Implementation Of Stack We Perform basic operation over the stack and know how stack is works.
// // In stack index is starts from 0(zero) and starts from bottom of the stack.


// #include<iostream>
// #include<stack>
// using namespace std;
// int main()
// {
//     stack<int>st;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     st.push(50);
//     cout<<st.top()<<endl;
//     cout<<st.size()<<endl;
//     st.pop();
//     cout<<st.top()<<endl;
//     cout<<st.size()<<endl;
//     // display
//     while(st.size()>0)
//     {
//         cout<<st.top()<<" ";
//         st.pop();
//     }
// }






// #include<iostream>
// #include<stack>
// using namespace std;
// int main()
// {
//     stack<int> st ;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     st.push(50);
//     st.push(60);

//     // display stack
//     // we make a new stack named temp and we push values of stack st in the temp stack
//     // becoz ele's position doesn't disturb

//     stack<int>temp;
//     while(st.size()>0)
//     {
//         cout<<st.top()<<" ";
//         int x=st.top();
//         st.pop();
//         temp.push(x);
//     }

//     // now we again push values of temp stack into their original
//     // stack st so that position of the original stack is mentained

//     while(temp.size()>0)
//     {
//        int x= temp.top();
//        temp.pop();
//        st.push(x);
//     }
//     cout<<endl;
//     cout<<st.top()<<endl;
//     cout<<st.size()<<endl;
//     st.pop();
//     cout<<st.top()<<endl;
//     cout<<st.size()<<endl;

// }







// display stack from top to bottom and bottom to top using loops
// display stack in normal order and in reverse order using while loop.

// #include<iostream>
// #include<stack>
// using namespace std;
// int main()
// {
//     stack<int> st;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     st.push(50);

//     // display top to bottom -> stack in normal order

//     stack<int> temp;
//     while(st.size()>0)
//     {
//         cout<<st.top()<<" ";
//         int x= st.top();
//         st.pop();
//         temp.push(x);
//     }

//     while(temp.size()>0)
//     {
//         int x= temp.top();
//         temp.pop();
//         st.push(x);
//     }
//     cout<<endl;

//     // display bottom to top -> stack in reverse order

//     stack<int>temp2;
//     while(st.size()>0)
//     {
//         int x=st.top();
//         st.pop();
//         temp2.push(x);
//     }

//     while(temp2.size()>0)
//     {
//         cout<<temp2.top()<<" ";
//         int x= temp2.top();
//         temp2.pop();
//         st.push(x);
//     }
//     cout<<endl;

// }







// Push element in the bottom of the stack.

// #include<iostream>
// #include<stack>
// using namespace std;
// int main()
// {
//     stack<int> st;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     st.push(50);

//     stack<int>temp;
//     // display our original stack
//     while(st.size()>0)
//     {
//         cout<<st.top()<<" ";
//         int x=st.top();
//         st.pop();
//         temp.push(x);
//     }

//     cout<<endl;
//     st.push(100);

//     while(temp.size()>0)
//     {
//         int x=temp.top();
//         temp.pop();
//         st.push(x);
//     }

//     // display stack after adding ele in the bottom of the stack
//     while(st.size()>0)
//     {
//         cout<<st.top()<<" ";
//         int x=st.top();
//         st.pop();
//         temp.push(x);
//     }

// }








// add ele. in the bottom of the stack

// #include <iostream>
// #include <stack>
// using namespace std;
// int main()
// {
//     stack<int> st;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     st.push(50);

//     // // without adding ele in the bottom of the stack
//     // // display our original stack st

//     // stack<int>temp;
//     // while(st.size()>0)
//     // {
//     //     cout<<st.top()<<" ";
//     //     int x= st.top();
//     //     st.pop();
//     //     temp.push(x);
//     // }

//     // // push ele back to the original stack st

//     // while(temp.size()>0)
//     // {
//     //     int x=temp.top();
//     //     temp.pop();
//     //     st.push(x);
//     // }

//     // before adding ele. in the bottom of stack
//     // display our original stack

//     stack<int> temp;
//     while (st.size() > 0)
//     {
//         cout << st.top() << " ";
//         int x = st.top();
//         st.pop();
//         temp.push(x);
//     }
//     cout << endl;
//     // size is 0 becoz our stack is empty we push our stack st ele in the temp stack
//     // so in this time our original stack st is empty
//     cout << st.size() << endl; // 0

//     // add ele. in the bottom
//     st.push(100);
//     // now our stack st size is 1 becoz no ele. in our original stack st.
//     // all ele.in our stack st is transfer into temp stack so, our stack st is empty
//     // we push only one ele 100 so the current size of the stack is 1.
//     cout << st.size() << endl; // 1

//     // if we push 3 ele. in the empty stack st then the current size of the stack st is 3
//     st.push(200);
//     st.push(300);
//     cout << st.size() << endl; // 3

//     // here we again push ele. back to the original stack
//     while (temp.size() > 0)
//     {
//         int x = temp.top();
//         temp.pop();
//         st.push(x);
//     }

//     // after adding ele. in bottom of the original stack
//     // display the original stack st

//     while (st.size() > 0)
//     {
//         cout << st.top() << " ";
//         int x = st.top();
//         st.pop();
//         temp.push(x);
//     }
//     // cout<<st.size()<<endl;

// }

// // output -:
// // 50 40 30 20 10 
// // 0
// // 1
// // 3
// // 50 40 30 20 10 300 200 100







// // push ele. in bottom of the stack by using function 
// #include<iostream>
// #include<stack>
// using namespace std;
// void display(stack<int>st)
// {
//     stack<int>temp;
//     while(st.size()>0)
//     {
//         cout<<st.top()<<" ";
//         int x= st.top();
//         st.pop();
//         temp.push(x);
//     }
//     cout<<endl;
// }

// void pushatbottom(stack<int>&st, int val)
// {
//     stack<int>temp;
//     while(st.size()>0)
//     {
//         int x=st.top();
//         st.pop();
//         temp.push(x);
//     }
//     st.push(100);

//     while(temp.size()>0)
//     {
//         int x=temp.top();
//         temp.pop();
//         st.push(x);
//     }
// }
// int main()
// {
//     stack<int>st;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     st.push(50);

//     display(st);
//     pushatbottom(st,100);
//     display(st);

// }






// // Push ele. in the bottom of the stack using function 
// #include<iostream>
// #include<stack>
// using namespace std;

// void display(stack<int>st)
// {
//     stack<int>temp;
//     while(st.size()>0)
//     {
//         cout<<st.top()<<" ";
//         int x= st.top();
//         st.pop();
//         temp.push(x);
//     }
//     cout<<endl;
// }


// void pushatbottom(stack<int>&st, int val)
// {
//     stack<int>temp;
//     while(st.size()>0)
//     {
//         int x= st.top();
//         st.pop();
//         temp.push(x);
//     }
//     st.push(100);

//     while(temp.size()>0)
//     {
//         int x=temp.top();
//         temp.pop();
//         st.push(x);
//     }
// }


// int main()
// {
//     stack<int>st;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     st.push(50);

//     display(st);
//     pushatbottom(st,100);
//     display(st);

// }







// Push element in the stack at any index by using function 
#include<iostream>
#include<stack>
using namespace std;
void display(stack<int>st)
{
    stack<int>temp;
    while(st.size()>0)
    {
        cout<<st.top()<<" ";
        int x= st.top();
        temp.push(x);
        st.pop();
    }
    cout<<endl;
}


void pushatidx(stack<int>&st, int idx, int val)
{
    stack<int>temp;
    while(st.size()>idx)
    {
        int x=st.top();
        temp.push(x);
        st.pop();
    }

    st.push(val);

    while(temp.size()>0)
    {
        int x=temp.top();
        st.push(x);
        temp.pop();
    }
    
}
int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    display(st);
    pushatidx(st,3,300);
    display(st);
    pushatidx(st,4,400);
    display(st);

}

// 50 40 30 20 10 
// 50 40 300 30 20 10 
// 50 40 400 300 30 20 10 

// Done code
// good job shivam all code is run successfully.

// ************* Important point *************

          // in stack idx starts from 0 and starts from bottom to top 
