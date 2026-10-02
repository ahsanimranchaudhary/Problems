# include<iostream>
# include<stack>
using namespace std;
class MinStack {
public:
    stack<int>st;
    stack<int>minvalues;
    MinStack() {
        
    }
    void push(int val) {
        if(st.empty())
        {
            st.push(val);
            minvalues.push(val);
        }
        else
        {
            st.push(val);
            if(val<minvalues.top())
            {
                minvalues.push(val);
            }
        }
    }
    void pop() {
        if(st.top()==minvalues.top())
        {
            minvalues.pop();
        }
        st.pop();
    }
    int top() {
       return st.top();
    }
    int getMin() {
        return minvalues.top();
    }
};
int main()
{   
    return 0;
}