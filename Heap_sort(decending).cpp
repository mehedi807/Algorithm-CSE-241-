#include<bits/stdc++.h>
using namespace std;
void max_heap(int arr[],int n,int i)
{
   int small = i;
   int l = 2*i + 1;
   int r = 2*i +2;
   if(l<n && arr[l] < arr[i])
   {
       small = l;
   }
   else
        small = i;
   if(r<n && arr[r] < arr[small])
   {
       small = r;
   }
   //else
        //small = i;
   if(small != i)
   {
       swap(arr[i] , arr[small]);
       max_heap(arr,n,small);
   }
}
void build_heap(int arr[],int n)
{
    for(int i = (n/2)-1; i>=0; i--)
    {
        max_heap(arr,n,i);
    }

    for(int i = n-1; i>=0; i--)
    {
        swap(arr[0] , arr[i]);
        max_heap(arr,i,0);
    }
}
//void heap_sort(int arr[] , int n)
//{
//    build_heap(arr,n);
//    for(int i = n-1; i>=0; i--)
//    {
//        swap(arr[0] , arr[i]);
//        max_heap(arr,i,0);
//    }
//}
int main()
{
    int n = 7;
    int arr[n] = {10,12,13,11,9,7,8};
    //heap_sort(arr,n);
    build_heap(arr,n);
    for(int i = 0; i<n ; i++)
    {
        cout << arr[i] << " ";
    }
}


