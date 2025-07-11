#include <bits/stdc++.h>
queue<int> reverseQueue(queue<int> q)
{
    stack<int> st;
    while (!q.empty())
    {
        st.push(q.front());
        q.pop();
    }
    queue<int> qe;
    while (!st.empty())
    {
        qe.push(st.top());
        st.pop();
    }
    return qe;
}
