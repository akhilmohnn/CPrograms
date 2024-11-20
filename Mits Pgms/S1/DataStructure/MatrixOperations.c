#include<stdio.h>

#define MAX 5

int main(){
    int rows1,cols1,rows2,cols2,ch;
    int matrix1[MAX][MAX],matrix2[MAX][MAX],result[MAX][MAX];

    printf("Enter the number of rows and columns(matrix1): ");
    scanf("%d%d",&rows1,&cols1);
    printf("Enter the number of rows and columns(matrix2): ");
    scanf("%d%d",&rows2,&cols2);

    printf("Matrix 1: ");
    readMatrix(matrix1,rows1,cols1);
    printf("Matrix 2: ");
    readMatrix(matrix2,rows2,cols2);


    while(1){
        printf("Choose the option:\n");
        printf("1.Add matrices\n");
        printf("2.Perform substraction\n");
        printf("3.Multiplication\n");
        printf("4.exit\n");
        printf("Enter the choice: ");
        scanf("%d",&ch);

        switch(ch){
            case 1: if(rows1==1 && cols1==cols2)
            readMatrix(matrix1,matrix2,result,rows,cols)
        }
    }



}