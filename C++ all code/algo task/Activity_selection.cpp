#include<iostream>
#include<algorithm>
using namespace std;

struct Activity
{
      int start, end;
};
   bool comp(Activity act1, Activity act2)
   {
      return (act1.end < act2.end);
   }
   void maxActivity(Activity act[], int n)
   {
   sort(act, act+n, comp);
   cout << "Selected Activities are: " << endl;
   int i = 0;
   cout << "Activity: " << i << " , Start: " <<act[i].start << " End: " << act[i].end <<endl;
   for (int j = 1; j < n; j++)
   {
      if (act[j].start >= act[i].end)
      {
         cout << "Activity: " << j << " , Start: " <<act[j].start << " End: " << act[j].end <<endl;
         i = j;
      }
   }
}
int main() {
   Activity actArr[] = {{5,9},{1,2},{3,4},{0,6},{5,7},{8,9}};
   int n = 6;
   maxActivity(actArr,n);
   return 0;
}
