#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;  cin >> n;
    string a,b;
    cin >> a >> b;
    int cnt = 0;
    for(int i=0; i<n; i++)
    {
        int x = a[i]-'0';
        int y = b[i]-'0';
        cnt += min(abs(x-y) , (10 - abs(x-y)));
    }
    cout << cnt << "\n";

}

