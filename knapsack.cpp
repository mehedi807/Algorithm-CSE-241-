#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;  cin >> n;
	int w[n],p[n];
	for(int i=0; i<n; i++){
		cin >> w[i];
	}
	for(int i=0; i<n; i++){
		cin >> p[i];
	}
	int max_w;  cin >> max_w;
	int dp[n+1][max_w+1];
	for(int i=0; i<=n; i++){
		for(int j=0;j<=max_w;j++){
			if(i==0 or j==0)  dp[i][j] = 0;
			else if(w[i-1] < max_w)
				dp[i][j] = max(p[i-1]+dp[i-1][max_w - w[i-1]], dp[i-1][max_w]);
			else
				dp[i][j] = dp[i-1][max_w];
		}
	}
	cout << dp[n][max_w];
}
