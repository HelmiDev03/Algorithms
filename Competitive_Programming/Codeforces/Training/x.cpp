#include <bits/stdc++.h>
using namespace std;


class Solution {
public:

    bool Transform (stack<char> & charStack , string expression) {
        for (auto ch : expression) {
            if (ch == ')') {
                if (!charStack.empty()) {
                    int trueCount = 0;
                    int falseCount = 0;
                    while (!charStack.empty() && charStack.top() != '(') {
                        char currentChar = charStack.top();
                        charStack.pop();
                        if (currentChar == 't')
                            trueCount++;
                        else if (currentChar == 'f')
                            falseCount++;
                    }
                    charStack.pop();
                    char operation = charStack.top();
                    if (operation == '&') {
                        if (falseCount)
                            charStack.push('f');
                        else
                            charStack.push('t');
                    } else if (operation == '|') {
                        if (trueCount)
                            charStack.push('t');
                        else
                            charStack.push('f');
                    } else {
                        if (falseCount)
                            charStack.push('t');
                        else
                            charStack.push('f');
                    }
                }
            } else {
                charStack.push(ch);
            }
        }
        return (charStack.top() == 't') ? true : false;
    }
    bool parseBoolExpr(string expression) {
        stack<char> charStack;
        return Transform(charStack, expression);
        
    }
};

int main() {
    Solution s;
    cout << s.parseBoolExpr("&(|(f))") << endl;
    return 0;
}

