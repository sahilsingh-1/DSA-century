#include<bits/stdc++.h>
using namespace std;

int main() {
    int v=5;
    vector<int>adj[v];
    
    adj[0].push_back(1);
    adj[1].push_back(0);

    adj[1].push_back(2);
    adj[2].push_back(1);

    adj[2].push_back(4);
    adj[4].push_back(2);

    adj[4].push_back(0);
    adj[0].push_back(4);

    for(int i =0; i< v ; i++)
    {
        cout<<i <<"-->";
        for(int it : adj[i])
        {
            cout<<it<<" ";
        }
        cout<<endl;
    }



}