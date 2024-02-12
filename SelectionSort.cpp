#include<iostream>
using namespace std;

void Sort(int arr1[],int n){
    int temp;
    for(int i =0 ; i<n ;i++){
        for(int j = i+1; j<n; j++){
            if(arr1[i] > arr1[j]){
                temp = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = temp;
            }    
        }
    }
}

void printArray(int arr1[], int n){
    for(int i =0 ; i<n; i++){
        cout<<arr1[i]<<" ";
    }

}

int main(){
    int arr1[]={64,25,12,22,11};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    Sort(arr1,n);
    printArray(arr1,n);
}