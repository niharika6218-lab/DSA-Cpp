class Solution {
public:
    char closing(char ch){
        switch(ch){
            case '(': return ')';
            case '{': return '}';
            case '[': return ']';
        }
        return '\0';
    }
    bool isValid(string s) {
        stack<char> st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                st.push(closing(s[i]));
            }
            else{
                if(st.empty() || s[i]!=st.top()) return false;
                st.pop();
            }
            
        }
        return st.empty();
    }
};