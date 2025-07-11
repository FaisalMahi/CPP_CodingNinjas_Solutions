// Question Link: https://www.naukri.com/code360/problems/reverse-first-k-elements-of-queue_982771


#include <bits/stdc++.h>
queue<int> reverseElements(queue<int> q, int k)
{
    stack<int> st;
    for (int i = 0; i < k && !q.empty(); ++i)
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
    while (!q.empty())
    {
        qe.push(q.front());
        q.pop();
    }
    return qe;
}
