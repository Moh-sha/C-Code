#include<iostream>

using namespace std;

int binarysearch(int A[],int low, int size, int searchval)
{
    bool isFound = false;
    cout<<"Searching Element = "<<searchval<<endl;
    int mid = ((size+low)/2);
    if(A[mid] == searchval){
        isFound = true;
        return (mid+1);
    }else if(searchval > A[mid]){
    low = mid+1;
    return binarysearch( A, low, size, searchval);

    }else if (searchval < A[mid]){
    size = mid -1;
    return binarysearch(A, low, size, searchval);
    }
}

int main(){
int A[] = {2,78,433,65,213,675,4};
int pos = binarysearch(A,0,7,65);
cout<<"Element found at index : "<<pos<<endl;
getch;

}

