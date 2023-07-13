#include<bits/stdc++.h>
using namespace std;
void binary_search(int a[],int n,int num){
   int l = 0, r = n-1 , m , f=0;
   while(l<=r){
        m = (l+r)/2;
        if(a[m] == num){
            cout << "Found on index : "<< m << endl;
           return;
        }
        else if(a[m] > num)    r = m-1;
        else l = m+1;
   }
    cout << "Not found" << endl;
}
int main()
{
    int n;   cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int num;  cin >> num;
    sort(a,a+n);
   binary_search(a,n,num);
}
