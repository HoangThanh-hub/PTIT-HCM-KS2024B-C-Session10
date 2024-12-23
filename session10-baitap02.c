#include<stdio.h>
#include <stdlib.h>

int main(){
    int size = 10;
    int array[10];
    printf("dãy số trước khi sắp xếp:\n");
    for(int i= 0;i < size;i++){
        array[i] = rand()%100;
        printf("%d ", array[i]);
    }
    printf("\ndãy số sau khi sắp xếp:\n");
    for (int i =0; i < size -1; i++){
        for(int j=0; j< size-1-i; j++){
            if(array[j]>array[j+1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    for(int i=0; i< size; i++){
        printf("%d ", array[i]);
    }
    printf("\n");



    return 0;
}