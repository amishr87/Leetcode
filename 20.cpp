class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;

        for (char c : s) 
        {
            if (c == '(' || c == '[' || c == '{') 
            {
                // Push opening brackets onto the stack
                stk.push(c);
            } 
            else 
            {
                // For closing brackets, check if the stack is not empty
                // and the top of the stack matches
                if (stk.empty()) 
                {
                    return false;
                }

                char top = stk.top();
                stk.pop();
                
                if ((c == ')' && top != '(') || 
                    (c == ']' && top != '[') || 
                    (c == '}' && top != '{')) 
                {
                    return false;
                }
            }
        }

        // The stack should be empty if all opening brackets 
        //have been properly closed
        return stk.empty();
    }
};
