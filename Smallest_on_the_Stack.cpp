#include <bits/stdc++.h>
using namespace std;

main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    // cin.clear();
    // fflush(stdin);
    stack<int> st;
    string prob;
    int n, min;
    cin >> n;
    // scanf("%d", n);
    while (n--)
    {
        // cout << n << endl;
        cout << "Value of prob in beginning :  " << prob << endl;

        cin.clear();
        fflush(stdin);
        // cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        getline(cin, prob);

        cin.clear();
        fflush(stdin);


        if (prob == "POP")
        {
            if (st.empty())
            {
                cout << "EMPTY"
                     << "\n";
            }
            else
            {
                if (st.top() < min)
                {
                    min = 2 * min - st.top();
                }
                else
                {
                    st.pop();
                }
            }

            // cout << "Popping" << endl;
        }
        else if (prob == "PUSH")
        {
            int val;
            cin >> val;
            if (st.empty())
            {
                min = val;
                st.push(val);
            }
            else
            {
                if (val < min)
                {
                    st.push(2 * val - min);
                    min = val;
                }
                else
                {
                    st.push(val);
                }
            }
        }
        else if (prob == "MIN")
        {
            if (st.empty())
            {
                cout << "EMPTY"
                     << "\n";
            }
            else
            {
                cout << min << "\n";
            }

            // cout << "Getting MIN" << endl;
        }
    }
}