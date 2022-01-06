// #include <iostream>
// #include <algorithm>
// #include <string>
// #include <cmath>
// using namespace std;
// #define MAX 100000;

// main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {

//         int n;
//         cin >> n;
//         // char input[100000];
//         // cin.ignore();
//         // cin.get(input, max);
//         // cin.ignore();
//         // input[n] = '\0';
//         // int j;
//         // while (input[j]!='\0')
//         //     {
//         //         cout<<j<<" : "<<input[j]<<endl;
//         //     }

//         cin.ignore();
//         string input;
//         getline(cin, input);
//         input.shrink_to_fit();
//         long int pos = 0;
//         // string ans;
//         while (pos < n)
//         {
//             int i = 0;
//             int sum = 0;
//             while (i < 4)
//             {

//                 sum += ((input[pos + i] - 48) * pow(2, 3-i));
//                 // int result = (input[pos + i] - 48) * pow(2, i);
//                 // int indexValue = input[pos + i];
//                 // int index = pos + i;
//                 // cout<<"index : "<<index<<endl;
//                 // cout<<"indexValue : "<<indexValue<<endl;
//                 // cout<<"result : "<<result<<endl;

//                 // cout<<"sum : "<<sum<<endl;
//                 i++;
//             }
//             cout<<char(97 + sum);
//             // ans.push_back(char(97 + sum));
//             pos += i;
//         }
//         // ans.shrink_to_fit();

//         cout <<  endl;
//     }
// }

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;

        // cin.ignore();
        string input;
        cin>>input;
        // input.shrink_to_fit();
        int pos = 0;
        
        while (pos < n)
        {
            int i = 0;
            int sum = 0;
            while (i < 4)
            {
                int b=1;
                sum += ((input[pos + i] - 48) * b<<(3-i));
                i++;
            }
            cout << char(97 + sum);
            pos += i;
        }
        cout << endl;
    }
}
