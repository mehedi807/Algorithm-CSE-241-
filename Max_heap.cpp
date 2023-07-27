#include<bits/stdc++.h>
using namespace std;
int heap_size;
int leftchild(int i)
{
    return 2*i+1;
}
int rightchild(int i)
{
    return 2*i+2;
}
void max_heap(int a[],int n,int i)
{
    int heap_size = n;
    int larg = i;
    int l = leftchild(i);
    int r = rightchild(i);
    if(l<heap_size and a[l] > a[i])
        larg = l;
    else
        larg = i;
    if(r<heap_size and a[r] > a[i])
        larg = r;

    if(larg != i)
    {
        swap(a[i],a[larg]);
        max_heap(a,heap_size,larg);
    }

}
build_heap(int a[],int n)
{
   // heap_size = n;
    for(int i=(n/2)-1; i>=0 ; i--){
        max_heap(a,n,i);
    }
}
int main()
{
    int n = 7;
    int a[n] = {10,11,12,13,7,8,9};
//    for(int i = 0; i<n; i++){
//        cin >> a[i];
//    }
    build_heap(a,n);
     for(int i = 0; i<n; i++){
       cout << a[i] << " ";
    }
}
