#include<bits/stdc++.h>

using namespace std;

int main()
{
       vector<int>v={2,3,4,5,6};

      v.insert(v.begin(),1);
      v.insert(v.begin()+3,9);
      v.insert(v.end(),10);

     for(int i;i<v.size();i++)
      {
      cout<<v[i]<<endl;
      }



}
