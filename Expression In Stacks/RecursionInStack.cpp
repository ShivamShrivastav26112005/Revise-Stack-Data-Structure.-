// stack pass by value hota h 
// recursion in stack 
// display stack using recursion in normal order and in reverse order 
// Recursion -> Base case , kaam , Call



// #include<iostream>
// #include<stack>
// using namespace std;
// void displayRecNormal(stack<int>& st)
// {
//     if(st.size()==0) return ;
//     cout<<st.top()<<" ";
//     int x= st.top();
//     st.pop();
//     displayRecNormal(st);
//     st.push(x);
// }

// void displayRecReverse(stack<int>& rt)
// {
//     if(rt.size()==0) return ;
//     int x=rt.top();
//     rt.pop();
//     displayRecReverse(rt);
//     cout<<x<<" ";
//     rt.push(x);
    
// }

// int main()
// {
//     stack<int>st;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     st.push(50);
//     cout<<"Stack display in normal oredr "<<endl;
//     displayRecNormal(st);
//     cout<<endl;
//     cout<<"Stack display in reverse order "<<endl;
//     displayRecReverse(st);
// }






// // again we display our stack in normal oredr and in reverse order 



// #include<iostream>
// #include<stack>
// using namespace std;
// void displayNormal(stack<int>& st)
// {
//     if(st.size()==0) return ;
//     cout<<st.top()<<" ";
//     int x=st.top();
//     st.pop();
//     displayNormal(st);
//     st.push(x);
// }

// void displayReverse(stack<int> & st)
// {
//     if(st.size()==0) return; 
//     int x=st.top();
//     st.pop();
//     displayReverse(st);
//     cout<<x<<" ";
//     st.push(x);
// }

// int main()
// {
//     stack<int> st;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     st.push(50);

//     displayNormal(st);
//     cout<<endl;
//     displayReverse(st);

// }





//     push ele. in the bottom of the stack using recursion 


// #include<iostream>
// #include<stack>
// using namespace std;

// // display stack using recursion 
// void display(stack<int>& st)
// {
//     if(st.size()==0) return ;
//     cout<<st.top()<<" ";
//     int x=st.top();
//     st.pop();
//     display(st);
//     st.push(x);
// }

// // push at bottom by using loop 
// void pushatbottom(stack<int>& st,int val)
// {
//     stack<int>temp;
//     while(st.size()>0)
//     {
//         int x=st.top();
//         st.pop();
//         temp.push(x);
//     }
//     st.push(val);
    
//     while(temp.size()>0)
//     {
//         int x=temp.top();
//         temp.pop();
//         st.push(x);
//     }
// }

// // push at bottom by using recursion  
// void pushatbottom(stack<int>& st, int val)
// {
//     if (st.size()==0)
//     {
//         st.push(val);
//         return ;
//     }
//     int x= st.top();
//     st.pop();
//     pushatbottom(st,val);
//     st.push(x);
// }

// int main()
// {
//     stack<int> st;
//     st.push(100);
//     st.push(200);
//     st.push(300);
//     st.push(400);
//     st.push(500);

//     display(st);
//     cout<<endl;
//     pushatbottom(st,1000);
//     display(st);
//     cout<<endl;
//     pushatbottom(st,10000);
//     display(st);

// }








//  Display stack in the reverse order using loop and one more thing is that we want stack in reverse order in st stack itself 
//  Not display stack in any other stack ony reverse stack in the same st stack 
//  Yes you can use multiple stack for reversing the st stack

#include<iostream>
#include<stack> 
using namespace std;
int main()
{
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    stack<int>rt;
    while(st.size()>0)
    {
        cout<<st.top()<<" ";
        int x=st.top();
        st.pop();
        rt.push(x);
    }
    cout<<endl;

    stack<int>vt;
    while(rt.size()>0)
    {
        int y=rt.top();
        rt.pop();
        vt.push(y);
    }

    while(vt.size()>0)
    {
        int z=vt.top();
        vt.pop();
        st.push(z);
    }
    
    stack<int>temp2;
    while(st.size()>0)
    {
        cout<<st.top()<<" ";
        int w=st.top();
        st.pop();
        temp2.push(w);
    }

}

// 50 40 30 20 10 
// 10 20 30 40 50 


                              // Done code 14-02-2024 11:20 PM