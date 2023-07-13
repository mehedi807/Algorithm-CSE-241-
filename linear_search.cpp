#include<bits/stdc++.h>
using namespace std;
void lin_search(int a[],int n,int num){
    for(int i=0; i<n; i++){
        if(a[i] == num){
            cout << "Found On index : " << i << endl;
            return;
        }
    }
    cout << "Not Found"<< endl;
}
int main()
{
    int n;   cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int num;  cin >> num;
   lin_search(a,n,num);
}
