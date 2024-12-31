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

