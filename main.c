
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
            printf("%d is in index %d\n", arr[middle], middle);
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

int main(void)
{
    int intArray[10] = {0,2,4,6,8,10,12,16,18,49};
    int length = (sizeof(intArray)/sizeof(int));
    binarySearch(intArray, length);
}