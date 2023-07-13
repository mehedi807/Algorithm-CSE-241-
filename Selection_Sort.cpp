#include<bits/stdc++.h>
using namespace std;
selection_sort(int a[],int n){
    int i,j,min_index;
    for(int i=0; i<n-1; i++){
        min_index = i;
        for(j=i+1; j<n; j++){
            if(a[min_index] > a[j])
                min_index = j;
        }
        if(a[min_index] != i){
            swap(a[min_index] , a[i]);
        }
    }
}
int main()
{
    int n;   cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    selection_sort(a,n);
    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }
}
