#include <iostream>
#include <queue>
using namespace std;
class mystack
{
    queue<int> q1;

public:
    void push(int n)
    {
        q1.push(n);
    }
    int top()
    {
        if (!q1.empty())
        {
            int size=q1.size();
            for(int i=0;i<size-1;i++)
            {
                q1.push(q1.front());
                q1.pop();
            }
            int ans = q1.front();
            q1.push(q1.front());
            q1.pop();
            return ans;
        }
        return -1;
    }
    void pop()
    {
        if(!q1.empty())
        {
            int size=q1.size();
        for(int i=0;i<size-1;i++)
        {
            q1.push(q1.front());
            q1.pop();
        }
    }
        q1.pop();
    }
};
int main()
{
    mystack st;
    st.push(10);
    st.push(20);
    st.push(30);
    cout << "Top: " << st.top() << endl;
    st.pop();
    cout << "Top: " << st.top() << endl;
    st.pop();
    cout << "Top: " << st.top() << endl;
    st.pop();
    cout << "Top: " << st.top() << endl;
    return 0;
}