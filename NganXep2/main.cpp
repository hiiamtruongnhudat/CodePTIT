#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q; cin >> q;
    int n; 
    string s;
    stack<int>st;
    while(q--)
    {
        cin >> s;
        if ( s == "PUSH")
        {
            cin >> n;
            st.push(n);
        }
        else if (s == "POP" && st.size() > 0)
            st.pop();
        else if (s == "PRINT")
        {
            if (st.size() == 0)
                cout << "NONE";
            else
                cout << st.top();
        }
        cout << "\n";
    }
    return 0;
}