// Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

// An input string is valid if:

// Open brackets must be closed by the same type of brackets.
// Open brackets must be closed in the correct order.
// Every close bracket has a corresponding open bracket of the same type.
#include<iostream>
#include<stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(char ch : s)
        {
            // push closing brackets
            if(ch == '(' || ch == '{' || ch == '[')
            {
                st.push(ch);
            }
            else
            {
                //agar stack empty ho aur closing brackets aye tab false return karega
                if(st.empty())
                {
                    return false;
                }
                // top find karenge
                char top = st.top();

                //check top se closing brackets match
                if((ch == ')' && top == '(') || (ch == '}' && top == '{') || (ch == ']' && top == '['))
                {
                    st.pop(); //match kare tho pop
                }
                else // match na kare tho false
                {
                    return false;
                }
            }
        }
        return st.empty();
    }
};
int main()
{
    string s = "()";
    Solution obj;
    if(obj.isValid(s))
    {
        cout << "true";
    }
    else
    cout << "false";
    return 0;
}