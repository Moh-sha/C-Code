#include<iostream>
using namespace std;
int main()
{
    int array[2][100], n, w, i, k, arr[100], max = -1, totalprofit = 0;
    cout << "Enter number of objects: ";
    cin >> n;
    cout << "Enter the weight of the knapsack: ";
    cin >> w;
    for (i = 0; i < n; i++)
    {
        cin >> array[0][i] >> array[1][i];
    }
    for (i = 0; i < n; i++)
    {
        arr[i] = 0;
    }
    k = w;
    while (k >= 0)
    {
        max = -1;
        for (i = 0; i < n; i++)
        {
            if ((arr[i] == 0) && ((max == -1) || (((float) array[1][i]
                    / (float) array[0][i]) > ((float) array[1][max]
                    / (float) array[0][max]))))
            {
                max = i;
            }
        }
        arr[max] = 1;
        k -= array[0][max];
        totalprofit += array[1][max];
        if (k >= 0)
        {
            cout << "Added object " << max + 1 << " Weight: "
                    << array[0][max] << " Profit: " << array[1][max]
                    << " completely in the bag, Space left: " << k;
        }
        else
        {
            cout << "Added object " << max + 1 << " \nWeight: "
                    << (array[0][max] + k) << "\nProfit: "
                    << (array[1][max] / array[0][max]) * (array[0][max]
                            + k) << "partially in the bag, Space left: 0"
                    << " Weight added is: " << k + array[0][max];
            totalprofit -= array[1][max];
            totalprofit += ((array[1][max] / array[0][max]) * (array[0][max]
                    + k));
        }
    }
    cout << "Bags filled with objects worth: " << totalprofit;
    return 0;
}
