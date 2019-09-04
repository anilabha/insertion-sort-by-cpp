/*
insertion sort algorithm


.......$Created By Anilabha Baral$..............

*/



#include<iostream>
using namespace std;


void sort(int array[],int size){
    for (int i= 1;i<size;i++){
        int val=array[i];
        int j=i;
        while (j>0 && array[j-1]>val){
            array[j]=array[j-1];
            j=j-1;
        }
        array[j]=val;
        
    }
}

int main(){
    int arr[]={4,5,3,2,1,6,9,10};
    int size =sizeof(arr)/sizeof(arr[0]);
    sort(arr,size);
    for (int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}