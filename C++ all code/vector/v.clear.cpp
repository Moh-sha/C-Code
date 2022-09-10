#include<bits/stdc++.h>

using namespace std;

int main()
{

    vector<int>v={2,3,4,5,6};

     v.erase(v.begin()+2,v.end()-1);
     for(int i=0;i<v.size();i++)
     {
        cout<<v[i]<<endl;
     }


}
