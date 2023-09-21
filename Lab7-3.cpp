#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b;
    cin >> n;
    while(n--)
    {
        int f = 0;
        cin >> a;
        for(int i=0; i<100; i++){
            for(int j=0; j<100; j++){
                if(3*i + 7*j == a)
                    f = 1;
            }
        }
        if(f)  cout << "YES" << "\n";
        else   cout << "NO" << "\n";

    }

}


