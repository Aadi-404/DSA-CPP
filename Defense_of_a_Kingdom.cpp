#include <bits/stdc++.h>
using namespace std; 
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int w, h, n;
        cin >> w >> h >> n;
        vector<int> posX;
        vector<int> posY;
        posX.push_back(0);
        posY.push_back(0);
        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            posX.push_back(x);
            posY.push_back(y);
        }
        posX.push_back(w + 1);
        posY.push_back(h + 1);
        sort(posX.begin(), posX.end());
        sort(posY.begin(), posY.end());
        int mx = 0;
        int my = 0;
        // cout << max_width_diff << " <--- width and height---> " << max_height_diff << endl;
        for (int i = 0; i < posX.size() - 1; i++)
        {
            mx = max((posX[i + 1] - posX[i]) - 1, mx);
            my = max((posY[i + 1] - posY[i]) - 1, my);
        }

        cout << mx * my << endl;
    }
}