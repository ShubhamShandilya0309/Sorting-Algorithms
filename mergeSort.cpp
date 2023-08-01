#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high){
    vector<int>ans;
    int i=low;
    int j=mid+1;
    while(i<=mid && j<=high){
        if(arr[i]<=arr[j]){
            ans.push_back(arr[i]);
            i++;
        }
        else{
            ans.push_back(arr[j]);
           j++; 
        }
    }
    while(i<=mid){
        ans.push_back(arr[i]);
        i++;
    }
    while(j<=high){
        ans.push_back(arr[j]);
        j++;
    }
    for(int i=low;i<=high;i++){
        arr[i]=ans[i-low];
    }
}
void mergeSort(vector<int> &arr,int low,int high){
    if(low>=high)return;
    int mid=(low+high)/2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid+1, high);
    merge(arr, low, mid, high);
}
int main() {
    vector<int> arr= {3, 1, 2, 4, 1, 5, 2, 6, 4};
    int n=9;
    mergeSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}