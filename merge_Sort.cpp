#include<bits/stdc++.h>
using namespace std;
void mergef(int a[],int p, int mid, int r)
{
    int n1 = mid - p + 1;
    int n2 = r - mid;
    int l[n1];
    int R[n2];
    for(int i=0; i<n1; i++){
        l[i] = a[p+i];
    }
     for(int i=0; i<n1; i++){
        R[i] = a[mid +1+i];
    }
    int i=0,j=0 , k = p;
    while(i<n1 and j<n2)
    {
        if(l[i] <= R[j])
        {
            a[k] = l[i];
            i++;
        }
        else
        {
            a[k] = R[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        a[k] = l[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        a[k] = R[j];
        j++;
        k++;
    }
}
void merge_sort(int a[], int p, int r)
{
    if(p>=r)
        return;
    int mid = (p+r) / 2;
    merge_sort(a,p,mid);
    merge_sort(a,mid+1,r);
    mergef(a,p,mid,r);
}
int main()
{
    int n = 5;
    int arr[n] = {4,2,8,3,7};
    merge_sort(arr,0,n-1);

    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
}
