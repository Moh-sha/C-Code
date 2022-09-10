#include <iostream>
using namespace std;

int knapsack(int weight[], int profit[], int items, int capacity)
{
    int table[items + 1][capacity + 1];


    for (int i = 0; i < items + 1; i++){
        for (int c = 0; c < capacity + 1; c++){
            if(i==0 || c==0)
                table[i][c]=0;
            else if (weight[i-1] > c)
                table[i][c] = table[i-1][c];
            else{

                table[i][c] = max( table[i - 1][c], profit[i-1] + table[i-1][ c-weight[i-1] ] );
            }
            cout<<table[i][c]<<" ";
        }
        cout<<endl;
    }
    return table[items][capacity];

}

int main()
{
    int capacity = 10;
    int items = 6;
    int profit[items] = {20, 5, 10, 40, 15, 25};
    int weight[items] = {1, 2, 3, 8, 7, 4};

    int p = knapsack(weight, profit, items, capacity);
    cout << "Knapsack profit is " << p << endl;

    return 0;
}
