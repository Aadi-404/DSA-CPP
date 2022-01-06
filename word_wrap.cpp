#include <bits/stdc++.h>
using namespace std;
#define inf 1e9 + 7
class solution
{
public:
    int minCost(int a[], int n,int m)
    {
        int space[n + 1][n + 1];
        int cost[n + 1][n + 1];
        int optimizedCost[n + 1];
        int path[n + 1];

        for (int i = 1; i <= n; i++)
        {
            space[i][i] = m - a[i - 1];
            for (int j = i + 1; j <= n; j++)
            {
                space[i][j] = space[i][j - 1] - a[j - 1] - 1;
            }
        }

        for (int i = 1; i <= n; i++)
        {
            for (int j = i; j <= n; j++)
            {
                if (space[i][j] < 0)
                    cost[i][j] = inf;
                else if (j == n && space[i][j] >= 0)
                    cost[i][j] = 0;
                else
                    cost[i][j] = space[i][j] * space[i][j];
            }
        }

        optimizedCost[0]=0;
        for(int i =1;i<=n;i++){
            optimizedCost[i] = inf;
            for(int j=1;j<=i;j++){
                if(optimizedCost[j-1] != inf and cost[j][i] != inf and optimizedCost[i] > optimizedCost[j-1] + cost[j][i]){
                    optimizedCost[i] = optimizedCost[j-1] + cost[j][i];
                    path[i] = j;
                }
            }
        }
        // for(int i =0;i<=n;i++){
        //     cout<<optimizedCost[i]<<"  ";
        // }

        return optimizedCost[n];
    }
};

main()
{
    int a[] = {6,6,7,4,4};
    int n = sizeof(a) / sizeof(int);
    solution obj;
    cout << obj.minCost(a, n,9);
}