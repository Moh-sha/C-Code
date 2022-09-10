#include<bits/stdc++.h>
using namespace std;

int main()
{

    ios_base :: sync_with_stdio(false);cin.tie(nullptr);


    vector<int>v;


    for(int i=1;i<=5;i++)
    { //inserting value
        v.push_back(i);

    }
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        //print
        cout<<v[i]<<endl;

    }

    v.push_back(10);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;

    }

    for(auto val : v)
    {
        cout<<val<<endl;
    }


   v.pop_back();

    for(auto val : v)
    {
        cout<<val<<endl;
    }


    return 0;

}

