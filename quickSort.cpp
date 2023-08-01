#include <bits/stdc++.h>
using namespace std;
int partition(int *arr,int lb,int ub){
    int pivot=arr[lb];
    int i=lb,j=ub;
    while(i<j){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<j) swap(arr[i],arr[j]);
    }
    swap(arr[j],arr[lb]);
    return j;
}
void QuickSort(int *arr,int lb ,int ub){
    if(lb<ub){
        int pivot=partition(arr,lb,ub);
        QuickSort(arr,lb,pivot-1);
        QuickSort(arr,pivot+1,ub);
    }
}
int main() {
    int arr[]={10,15,1,2,9,6,11};
    int n=7;
    QuickSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}