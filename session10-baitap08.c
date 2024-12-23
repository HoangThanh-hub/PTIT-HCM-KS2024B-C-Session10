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
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    for(int k=0;k<b;k++){
     for (int j =0; j < b; j++){
        for(int i=0; i< a-1; i++){
            if(array[i][j]>array[i+1][j]){
                int temp = array[i][j];
                array[i][j] = array[i+1][j];
                array[i+1][j] = temp;
            }
        }
     }
    }
     
    for(int i=0; i< a; i++){
        for (int j=0;j<b;j++){
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }



    return 0;
}