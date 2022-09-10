
#include <iostream>
#include <string>
using namespace std;
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define endl "\n"
typedef long long int ll;
typedef unsigned long long int llu;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, K;
        cin >> N >> K;
        int arr[N];
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
        {
            if (K >= arr[i])
            {
                cout << "1";
                K = K - arr[i];
            }
            else
            {
                cout << "0";
            }
        }
        cout << endl;
    }
    return 0;
}
