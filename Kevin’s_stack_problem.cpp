// Question Link: https://www.naukri.com/code360/problems/kevin-s-stack-problem_1169465


#include <bits/stdc++.h>
string kevinStackProblem(string &s)
{
    stack<char> st;
    for (char c : s)
    {
        st.push(c);
    }
    string ans;
    while (!st.empty())
    {
        ans.push_back(st.top());
        st.pop();
    }
    return ans;
}
