// codechef
// descrepencies in the voters list
// voters

#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
using namespace std;

main()
{
    int a1, a2, a3, input;
    cin >> a1 >> a2 >> a3;
    vector<int> v, vFinal;
    int j = 0, k = 0, count = 0;
    for (int i = 0; i < (a1 + a2 + a3); i++)
    {
        cin >> input;
        v.push_back(input);
    }
    // sort(v.begin(), v.end());
    // vector<int>::iterator ab;
    // for (ab = v.begin(); ab < v.end(); ab++)
    // {
    //     cout << *ab << endl;
    // }

    while (v[k] != '\0')
    {
        if (v[k] == v[j])
        {
            count++;
            j++;
        }
        else
        {
            if (count > 1)
            {
                vFinal.push_back(v[k]);
                k = j;
                count = 0;
            }
            else
            {
                k = j;
                count = 0;
            }
        }
    }
    cout<<"sorting and sepation completed"<<endl;
    cout<<"Final vector size : "<<vFinal.size()<<endl;
    vector<int>::iterator a;
    for (a = vFinal.begin(); a < vFinal.end(); a++)
    {
        cout << *a << endl;
    }
    // for (int l = 0; l < vFinal.size(); l++)
    // {
    //    cout<< vFinal[l]<<endl;
    // }
    
}
