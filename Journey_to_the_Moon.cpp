#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'journeyToMoon' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. 2D_INTEGER_ARRAY astronaut
 */
void dfs (vector<vector<int>>& adj, int src, vector<int> & vis,int &astro){
            astro ++;
    vis[src] =1;
    for(auto it : adj[src]){
        if(!vis[it]){
            dfs(adj,it,vis,astro);
        }
    }
}
int journeyToMoon(int n, vector<vector<int>> astronaut) {
    vector<vector<int>> adj(n+1);
    for(auto i : astronaut){
        adj[i[0]].push_back(i[1]);
        adj[i[1]].push_back(i[0]);
    }
    int countries =0;
    vector<int> astroList;
    vector<int> vis(n+1,0);
    int sum =0;

    for(int i =0;i<n;i++){
        if(!vis[i]){
            countries ++;
            int astro =0;
            dfs(adj,i,vis,astro);
            sum += astro;
            astroList.push_back(astro);

        }
    }
    // for(auto it : astroList){
    //     cout<<it<<"  ";
    // }
    // cout<<sum<<endl;
    int ans=0;
    if(astroList.size() ==1)return 0;
    for(auto i : astroList){

        ans += (sum - i) * i;
        // cout<<ans <<"   ";
    }
    // cout<<ans/2<< "   ";
    return (ans/2);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);

    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

    int n = stoi(first_multiple_input[0]);

    int p = stoi(first_multiple_input[1]);

    vector<vector<int>> astronaut(p);

    for (int i = 0; i < p; i++) {
        astronaut[i].resize(2);

        string astronaut_row_temp_temp;
        getline(cin, astronaut_row_temp_temp);

        vector<string> astronaut_row_temp = split(rtrim(astronaut_row_temp_temp));

        for (int j = 0; j < 2; j++) {
            int astronaut_row_item = stoi(astronaut_row_temp[j]);

            astronaut[i][j] = astronaut_row_item;
        }
    }

    int result = journeyToMoon(n, astronaut);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
