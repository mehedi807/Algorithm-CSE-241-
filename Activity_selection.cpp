#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int s[n],f[n];
    for(int i=0; i<n; i++)
    {
        cin >> s[i];
    }
    for(int i=0; i<n; i++)
    {
        cin >> f[i];
    }
    int cnt = 1;
    int i = 0;
    for(int j = 1; j<n; j++){
        if(f[i] <= s[j])  cnt++;
       i = j;
    }
    cout << cnt << "\n";
}

