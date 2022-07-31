class Solution {
public:
    bool isValid(string s) 
    {
        stack <char> st;
        for(int i=0;i<s.size();i++)
        {
            if(st.empty() && (s[i]==')'||s[i]=='}'||s[i]==']'))
                return false;
            if(s[i]=='('||s[i]=='{'||s[i]=='[')
            {
                st.push(s[i]);
            }
            else if(s[i]==')' && st.top()=='(')
                st.pop();
            else if(s[i]=='}' && st.top()=='{')
                st.pop();
            else if(s[i]==']' && st.top()=='[')
                st.pop();
            else
                return false;
        }
        if(st.empty()==1)
            return true;
        return false;
        }
};