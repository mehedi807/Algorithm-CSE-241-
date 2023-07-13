#include<bits/stdc++.h>
using namespace std;
int binary_search(int a[],int n,int l,int r, int num){
    int  m = (l+r)/2;
    if(l<=r){
        if(a[m] == num)
        return 1;
    else if(a[m] > num){
        binary_search(a,n,l,m-1,num);
    }
    else{
        binary_search(a,n,m+1,r,num);
    }
    }
    else return -1;

}
int main()
{
    int n;   cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int num;   cin >> num;
    int l = 0, r = n-1;
    int x = binary_search(a,n,l,r,num) ;
    if( x == 1)
        cout << "Found" << endl;
    else
        cout << "Not Found" << endl;
}
