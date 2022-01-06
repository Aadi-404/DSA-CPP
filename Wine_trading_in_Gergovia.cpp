#include <bits/stdc++.h>
using namespace std;
main()
{
    while (1)
    {
        int t;
        cin >> t;
        if (t == 0)
            break;
        else
        {
            vector<pair<int, int>> buyer;
            vector<pair<int, int>> seller;
            for (int i = 0; i < t; i++)
            {
                int x;
                cin >> x;
                if (x > 0)
                    seller.push_back({i, x});
                else
                    buyer.push_back({i, x});
            }
            // sort(buyer.begin(), buyer.end());
            // sort(seller.begin(), seller.end());
            long long int work = 0;
            int i = 0;
            int j = 0;
            while ((i + j + 1) < t)
            {
                if ((buyer[i].second + seller[j].second) > 0)
                {
                    work += abs(seller[j].first - buyer[i].first) * abs(buyer[i].second);
                    seller[j].second += buyer[i].second;
                    i++;
                }
                else
                {
                    work += abs(seller[j].first - buyer[i].first) * abs(seller[j].second);
                    buyer[i].second += seller[j].second;
                    j++;
                }
            }
            cout<<work <<endl;
        }
    }
}