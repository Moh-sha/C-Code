#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>v(n,0);
    for(int i=0;i<v.size();i++)
    {
        cin>>v[i];

    }
    v.erase(v.begin()+1,v.end()-2);

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }









}
