#include<bits/stdc++.h>
#define p pair<int,int>
using namespace std;
bool cmp(p A, p B){
    return A.first * B.second > A.second * B.first;
}
int main()
{
    int n,w;  cin >> n >> w;
    int a,b;
    vector<p> v(n);
    int i = 0;
    while(n--){
        cin >> a >> b;
        v[i].first = a;
        v[i].second = b;
        i++;
    }
    sort(v.begin(),v.end(),cmp);
    int ans = 0;
     for(int i = 0; i<v.size() ; i++){
        int z = min(w,v[i].second);
        w-=z;
        if(z<=w)
        ans +=  v[i].first;
        else
            ans +=  z * (v[i].first/v[i].second);
     }
     cout << ans << "\n";
}

