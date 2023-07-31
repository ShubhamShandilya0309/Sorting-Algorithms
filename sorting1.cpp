#include <iostream>
using namespace std;
void selectionSort(int *arr,int n){
    for(int i=0;i<n-1;i++){
        int mini=i;
        for(int j=i;j<n;j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }
        if(i!=mini){swap(arr[mini],arr[i]);}
    }
}
void bubbleSort(int *arr,int n){
    for(int i=0;i<n-1;i++){
        int swapped=0;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
              swap(arr[j],arr[j+1]);
              swapped=1;
            }
        }
        if(!swapped){
          break;
        }
    }  
}
void insertionSort(int *arr,int n){
    for(int i=0;i<n;i++){
        int j=i;
        while(j>0 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
}
int main() {
    int arr[6]={13,46,24,52,20,9};
    //selectionSort(arr,6);
    //bubbleSort(arr,6);
    insertionSort(arr,6);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}