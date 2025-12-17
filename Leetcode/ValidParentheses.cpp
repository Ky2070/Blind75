//
// Created by Administrator on 17/12/2025.
//
#include "ValidParentheses.h"

#include <stack>

bool isValid(std::string s) {
    std::stack<char> st;
    for (auto c : s) {
        if (c == '(' || c == '{' || c == '[') {
            st.push(c);
        }
        else{
            if (st.empty()) {
                return false;
            }
            char top = st.top();
            st.pop();
            if (c == ')' && top != '(') return false;
            if (c == '}' && top != '{') return false;
            if (c == ']' && top != '[') return false;
        }
    }
    if (st.empty()) {
        return true;
    }else {
        return false;
    }
}