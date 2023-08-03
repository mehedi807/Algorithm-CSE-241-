#include<bits/stdc++.h>
using namespace std;
int n = 5;
int partition(int a[],int p, int r)
{
    int pivot = a[r];
    int i = p-1;
    for(int j=p; j<r; j++){
        if(a[j] <= pivot){
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1] , a[r]);
    return i+1;
}
void quick_sort(int a[],int p, int r)
{
    int q;
    if(p<r){
        q = partition(a,p,r);
        quick_sort(a,p,q-1);
        quick_sort(a,q+1,r);
    }
}
int main()
{
    int a[n] = {6,3,8,1,9};
    quick_sort(a,0,n-1);
    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }
}
