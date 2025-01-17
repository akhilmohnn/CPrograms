#include<stdio.h>

int main(){
    int arr1[]={1,2,3};
    int arr2[]={4,5,6};
    int size1=sizeof(arr1)/sizeof(arr1[0]);
    int size2=sizeof(arr1)/sizeof(arr2[0]);
    int mergeArray[size1+size2];
    
    for(int i=0;i<size1;i++){
        mergeArray[i]=arr1[i];
    }
    
    for(int i=0;i<size2;i++){
        mergeArray[i+size1]=arr2[i];
    }
    printf("Merged array is: ");
    for(int i=0;i<(size1+size2);i++){
        printf("%d\t",mergeArray[i]);
    }
}
