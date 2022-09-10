#include<iostream>
using namespace std;


int partition(int A[],int start,int end)
{
       int   i=start;
  int  piv= A[start];
    for(int j=start+1;j<=end;j++){
            if (A[j]<piv){
                i++;
                swap (A[i],A[j]);
            }

}
swap (A[start],A[i]);
return i;}



void Quick_sort(int A[],int start,int end)
{
   if(start<end){

int    piv_pos= partition(A,start,end);
    Quick_sort(A,start,piv_pos-1);
    Quick_sort(A,piv_pos+1,end);
   }
}


void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<A[i]<<" ";

    }
    cout<<endl;

}

int main()
{
    int A[] = {6,5,3,10,8,13,2,11};
    int n = 8;
    printArray(A, n);
    Quick_sort(A, 0, n-1);
    printArray(A, n);

}

