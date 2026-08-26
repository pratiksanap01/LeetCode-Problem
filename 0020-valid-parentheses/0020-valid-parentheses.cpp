class Solution {
public:
    bool isValid(string s) {
        stack<char> openPara;

        for(int i = 0; i < s.length(); i++) {

            if(s[i] == '(' || s[i] == '{' || s[i] == '[') {
                openPara.push(s[i]);
            } 
            else if(s[i] == ')' || s[i] == '}' || s[i] == ']') {

                if(openPara.empty()) {
                    return false;
                }

                if(s[i] == ')' && openPara.top() == '(') {
                    openPara.pop();
                } 
                else if(s[i] == '}' && openPara.top() == '{') {
                    openPara.pop();
                } 
                else if(s[i] == ']' && openPara.top() == '[') {
                    openPara.pop();
                } 
                else {
                    return false;
                }
            }
        }

        return openPara.empty();
    }
};