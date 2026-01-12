#include<bits/stdc++.h>
using namespace std;

int main() {
    stack<int> st;
    string token;

    cout << "Enter postfix expression (end with ) ):\n";

    while (cin >> token) {
        // Sentinel
        if (token == ")")
            break;

        // If operand
        if (isdigit(token[0])) {
            st.push(stoi(token));
        }
        // If operator
        else {
            int A = st.top(); st.pop();
            int B = st.top(); st.pop();

            int result;
            switch (token[0]) {
                case '+': result = B + A; break;
                case '-': result = B - A; break;
                case '*': result = B * A; break;
                case '/': result = B / A; break;
            }

            st.push(result);
        }
    }

    cout << "Final Value = " << st.top() << endl;
    return 0;
}