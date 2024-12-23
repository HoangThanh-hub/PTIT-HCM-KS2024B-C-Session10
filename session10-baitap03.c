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
    for(int i= 1;i< size; i++){
        int key= array[i];
        int j=i-1;

        while(j>=0 && array[j] > key){
            array[j+1] =array[j];
            j=j-1;
        }
        array[j+1]=key;
    }
    for(int i=0; i< size; i++){
        printf("%d ", array[i]);
    }
    printf("\n");

    


    return 0;
}