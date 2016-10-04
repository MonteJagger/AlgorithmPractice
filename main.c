
    /*
     Hiumathy Lam
     2168-CSE-3320-001
     Assignment #1
     */
    

#include <stdlib.h>
#include <stdio.h>

void binarySearch(int arr[], int len){
    int i;
    int left=0, right= len-1;
    int middle;
    int user;
    printf("Type a number: ");
    scanf("%d", &user);
    
    while (left<=right){
        middle = (left+right)/2;
        if (arr[middle] == user){
            break;
        }
        if (arr[middle] < user)
            left = middle+1;
        else
            right = middle-1;
    }
    
    if (left > right)
        printf("Does not exist\n");
    printf("\n");
}

void SelectionSort(int A[], int N){
    int i, j, temp;
    for (i=0; i<N-1; i++){ // (N-1)
        int min=i;
        for (j=i+1; j<N; j++) //(N-1-i)
            if (A[j] < A[min])
                min = j;
        temp = A[min];
        A[min] = A[i];
        A[i] = temp;
    }
}

void InsertionSort(int A[], int N){
    int i, j, key;
    for (i=1; i<N; i++){
        key = A[i];
        j = i-1;
        while (j>=0 && A[j]>key){
            A[j+1] = A[j];
            j = j-1;
        }
        A[j+1] = key;
    }
}

void Print(int arr[], int len){
    int i;
    for (i=0; i<len; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


int main(void)
{
    int intArray[10] = {48, 43, 1, 4, 7, 9, 23, 6, 1, 0};
    int length = (sizeof(intArray)/sizeof(int));
    Print(intArray, length);
    
    //SelectionSort(intArray, length);
    InsertionSort(intArray, length);
    Print(intArray, length);
    
    
    //binarySearch(intArray, length);
}