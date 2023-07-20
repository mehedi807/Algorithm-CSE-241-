#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    int ans = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[i])
                ans++;
        }
    }
    cout << ans << "\n";

}

