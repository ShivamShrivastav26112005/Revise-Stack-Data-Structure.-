// Here are most asked stack-related coding questions in interviews -: 

1. Valid Parentheses -: 
Problem: Given a string containing only (, ), {, }, [, and ], determine if the input string is valid.
Criteria for Validity:
Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.

Example:
Input: "({[]})"
Output: true


#include <iostream>
#include <stack>
using namespace std;

bool isValid(string s) {
    stack<char> st;
    for (char c : s) {
        if (c == '(' || c == '{' || c == '[') {
            st.push(c);
        } else {
            if (st.empty()) return false;
            char top = st.top();
            if ((c == ')' && top != '(') ||
                (c == '}' && top != '{') ||
                (c == ']' && top != '[')) {
                return false;
            }
            st.pop();
        }
    }
    return st.empty();
}

int main() {
    string s = "({[]})";
    cout << (isValid(s) ? "true" : "false") << endl;
    return 0;
}





2. Next Greater Element -: 
Problem: Given an array, find the next greater element for each element in the array. 
The next greater element for an element x is the first greater element on the right 
side of x in the array. If no such element exists, return -1.

Example:
Input: [4, 5, 2, 25]
Output: [5, 25, 25, -1]


#include <iostream>
#include <stack>
#include <vector>
using namespace std;

vector<int> nextGreaterElements(vector<int>& nums) {
    vector<int> res(nums.size(), -1);
    stack<int> st;
    for (int i = 0; i < nums.size(); i++) {
        while (!st.empty() && nums[st.top()] < nums[i]) {
            res[st.top()] = nums[i];
            st.pop();
        }
        st.push(i);
    }
    return res;
}

int main() {
    vector<int> nums = {4, 5, 2, 25};
    vector<int> result = nextGreaterElements(nums);
    for (int x : result) cout << x << " ";
    return 0;
}



3. Min Stack -: 
Problem: Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.
push(x) – Push element x onto the stack.
pop() – Remove the element on top of the stack.
top() – Get the top element.
getMin() – Retrieve the minimum element in the stack.



#include <iostream>
#include <stack>
using namespace std;

class MinStack {
    stack<int> mainStack, minStack;
public:
    void push(int val) {
        mainStack.push(val);
        if (minStack.empty() || val <= minStack.top()) {
            minStack.push(val);
        }
    }
    void pop() {
        if (mainStack.top() == minStack.top()) {
            minStack.pop();
        }
        mainStack.pop();
    }
    int top() {
        return mainStack.top();
    }
    int getMin() {
        return minStack.top();
    }
};

int main() {
    MinStack minStack;
    minStack.push(-2);
    minStack.push(0);
    minStack.push(-3);
    cout << minStack.getMin() << endl; // -3
    minStack.pop();
    cout << minStack.top() << endl;    // 0
    cout << minStack.getMin() << endl; // -2
    return 0;
}



4. Evaluate Reverse Polish Notation -: 
Problem: Evaluate the value of an arithmetic expression in Reverse Polish Notation (RPN). 
Valid operators are +, -, *, and /. Each operand may be an integer or another expression.

Example:
Input: ["2", "1", "+", "3", "*"]
Output: 9
Explanation: ((2 + 1) * 3) = 9


#include <iostream>
#include <stack>
#include <vector>
#include <string>
using namespace std;

int evalRPN(vector<string>& tokens) {
    stack<int> st;
    for (string& token : tokens) {
        if (token == "+" || token == "-" || token == "*" || token == "/") {
            int b = st.top(); st.pop();
            int a = st.top(); st.pop();
            if (token == "+") st.push(a + b);
            else if (token == "-") st.push(a - b);
            else if (token == "*") st.push(a * b);
            else if (token == "/") st.push(a / b);
        } else {
            st.push(stoi(token));
        }
    }
    return st.top();
}

int main() {
    vector<string> tokens = {"2", "1", "+", "3", "*"};
    cout << evalRPN(tokens) << endl; // 9
    return 0;
}



5. Stock Span Problem -: 
Problem: Given an array of daily stock prices, calculate the stock span for each day. 
The stock span is defined as the number of consecutive days before the current day 
where the price of the stock was less than or equal to the current day’s price.

Example:
Input: [100, 80, 60, 70, 60, 75, 85]
Output: [1, 1, 1, 2, 1, 4, 6]



#include <iostream>
#include <stack>
#include <vector>
using namespace std;

vector<int> stockSpan(vector<int>& prices) {
    stack<int> st;
    vector<int> span(prices.size());
    for (int i = 0; i < prices.size(); i++) {
        while (!st.empty() && prices[st.top()] <= prices[i]) {
            st.pop();
        }
        span[i] = st.empty() ? i + 1 : i - st.top();
        st.push(i);
    }
    return span;
}

int main() {
    vector<int> prices = {100, 80, 60, 70, 60, 75, 85};
    vector<int> result = stockSpan(prices);
    for (int x : result) cout << x << " ";
    return 0;
}


6-: Stack Permutations  -: 
Given two sequences of integers inputSeq and outputSeq, determine if it is possible
to generate outputSeq using a stack starting with inputSeq.

Example 1:
Input:
inputSeq = [1, 2, 3]
outputSeq = [2, 1, 3]
Output: true
(Explanation: Push 1, push 2, pop 2, pop 1, push 3, pop 3.)

Example 2:
Input:
inputSeq = [1, 2, 3]
outputSeq = [3, 2, 1]
Output: false
(Explanation: This order cannot be generated with a stack.)

Constraints:

Solve the problem by simulating the stack operations.
Output whether the permutation is valid (true or false).



#include <iostream>
#include <stack>
#include <vector>
using namespace std;

bool isStackPermutation(vector<int>& inputSeq, vector<int>& outputSeq) {
    stack<int> st;
    int j = 0; // Pointer for outputSeq
    for(int i = 0; i < inputSeq.size(); i++){
        // Push the current element from inputSeq into the stack
        st.push(inputSeq[i]);
        // Keep popping from the stack if the top matches the outputSeq
        while(!st.empty() && st.top() == outputSeq[j]){
            st.pop();
            j++;
        }
    }
    // If the stack is empty and we have processed all elements of outputSeq
    return st.empty() && j == outputSeq.size();
}

int main() {
    vector<int> inputSeq = {1, 2, 3};
    vector<int> outputSeq = {2, 1, 3};
    
    if(isStackPermutation(inputSeq, outputSeq)){
        cout<<"true"<<endl;
    }else{
        cout<<"false"<<endl;
    }
}




7 -: Implement Stack Using Two Queues. 
Design a stack using two queues. Implement the following operations:

push(x): Push an element onto the stack.
pop(): Remove the top element of the stack.
top(): Get the top element.
isEmpty(): Return whether the stack is empty.
Example:
Input:
push(1), push(2), top(), pop(), isEmpty()
Output:
2, false

Hint: Use queue operations to mimic stack behavior.


#include <iostream>
#include <queue>
using namespace std;

class Stack {
    queue<int> q1, q2;

public:
    void push(int x) {
        q2.push(x);
        while (!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }
        swap(q1, q2);
    }

    void pop() {
        if (!q1.empty()) q1.pop();
    }

    int top() {
        return q1.empty() ? -1 : q1.front();
    }

    bool isEmpty() {
        return q1.empty();
    }
};

int main() {
    Stack s;
    s.push(1);
    s.push(2);
    cout << s.top() << endl; // 2
    s.pop();
    cout << s.isEmpty() << endl; // 0 (false)
    return 0;
}



8-: Sort a Stack.
You are given a stack of integers. Sort the stack in descending order such that the largest number is at the top.
You can use only one additional stack for temporary storage and no other data structure like arrays.

Example:
Input: stack = [3, 1, 4, 2]
Output: stack = [4, 3, 2, 1]

Hint: Compare elements between the two stacks during sorting.


#include <iostream>
#include <stack>
using namespace std;

void sortStack(stack<int>& s) {
    stack<int> tempStack;
    while (!s.empty()) {
        int temp = s.top();
        s.pop();
        while (!tempStack.empty() && tempStack.top() < temp) {
            s.push(tempStack.top());
            tempStack.pop();
        }
        tempStack.push(temp);
    }
    while (!tempStack.empty()) {
        s.push(tempStack.top());
        tempStack.pop();
    }
}

void printStack(stack<int> s) {
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int main() {
    stack<int> s;
    s.push(3);
    s.push(1);
    s.push(4);
    s.push(2);
    
    sortStack(s);
    printStack(s); // Output: 4 3 2 1

}


9 -: Longest Valid Parentheses. 

Problem: Find the length of the longest valid parentheses substring.
Example:
Input: ")()())"
Output: 4

#include<iostream>
#include<stack>
#include<string>
using namespace std;
int longestValidParentheses(string s){
    stack<int>st;
    st.push(-1); // Initialize with -1 to handle edge cases
    int maxLength=0;
    for(int i=0; i<s.length(); i++){
        if(s[i]=='('){
            st.push(i);
        }else{
            st.pop();
            if(st.empty()){
                st.push(i);
            }else{
                maxLength=max(maxLength, i-st.top());
            }
        }
    }
    return maxLength;
}

int main() {
    string s=")()())";
    cout<<longestValidParentheses(s)<<endl; // Output: 4

}
