#include<stdio.h>
#include<stdlib.h>

int main(){
    int size = 10;
    int array[10];
    printf("dãy số trước khi sắp xếp:\n");
    for(int i= 0;i < size;i++){
        array[i] = rand()%100;
        printf("%d ", array[i]);
    }
    printf("\ndãy số sau khi sắp xếp:\n");
    for (int i=0;i< size-1; i++){

        int minIndex=i;
        for(int j=i+1; j< size;j++){

            if(array[j]< array[minIndex]){
                minIndex=j;
            }
        }
        int temp=array[minIndex];
        array[minIndex]=array[i];
        array[i]= temp;
    }
    for(int i=0; i< size; i++){
        printf("%d ", array[i]);
    }
    printf("\n");


    return 0;
}