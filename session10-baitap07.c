#include<stdio.h>

int main(){
    int a,b;
    printf("nhập a: ");
    scanf("%d", &a);
    printf("nhập b: ");
    scanf("%d", &b);
    int array[a][b];

    for(int i=0; i< a; i++){
        for (int j=0;j<b;j++){
            printf("array[%d][%d]: ", i,j);
            scanf("%d", &array[i][j]);
        }
    }
    for(int i=0; i< a; i++){
        for (int j=0;j<b;j++){
            printf("%d,", array[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    for(int k=0;k<a;k++){
     for (int i =0; i < b-1; i++){
        for(int j=0; j< b-1; j++){
            if(array[i][j]>array[i][j+1]){
                int temp = array[i][j];
                array[i][j] = array[i][j+1];
                array[i][j+1] = temp;
            }
        }
     }
    }
     
    for(int i=0; i< a; i++){
        for (int j=0;j<b;j++){
            printf("%d,", array[i][j]);
        }
        printf("\n");
    }



    return 0;
}