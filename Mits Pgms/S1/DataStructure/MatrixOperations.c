#include<stdio.h>

#define MAX 5


int readMatrix(int matrix[MAX][MAX],int rows,int cols){
    printf("Enter the elements of matrix (%d x %d)",rows,cols);
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("Element [%d][%d]:",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }
}

int displayMatrix(int matrix[MAX][MAX],int rows,int cols){
    printf("Matrix elements (%d x%d):\n",rows,cols);
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("%d  ",matrix[i][j]);
        }
        printf("\n");
    }
}

int addMatrix(int matrix1[MAX][MAX],int matrix2[MAX][MAX],int result[MAX][MAX],int rows,int cols){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            result[i][j]=matrix1[i][j]+matrix2[i][j];
        }
    }
    printf("Result after addition:\n");
    displayMatrix(result,rows,cols);
}

int subMatrix(int matrix1[MAX][MAX],int matrix2[MAX][MAX],int result[MAX][MAX],int rows,int cols){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            result[i][j]=matrix1[i][j]-matrix2[i][j];
        }
    }
    printf("Result after substraction:\n");
    displayMatrix(result,rows,cols);
}

int multiplyMatrix(int matrix1[MAX][MAX],int matrix2[MAX][MAX],int result[MAX][MAX],int rows1,int rows2,int cols1,int cols2){

for(int i=0;i<rows1;i++){
    for(int j=0;j<cols2;j++){
        result[i][j]=0;
        for(int k=0;k<cols1;k++){
            result[i][j]+=matrix1[i][k]*matrix2[k][j];
        }
    }
}
printf("Result of matrix multiplication:\n");
    displayMatrix(result, rows1, cols2);

}

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
        printf("\nChoose the option:\n");
        printf("1.Add matrices\n");
        printf("2.Perform substraction\n");
        printf("3.Multiplication\n");
        printf("4.exit\n");
        printf("Enter the choice: ");
        scanf("%d",&ch);

        switch(ch){
            case 1: if(rows1==rows2 && cols1==cols2){
            addMatrix(matrix1,matrix2,result,rows1,cols1);
            }
                    else{
                        printf("Matrix addition not possible, different dimensions!!!\n");
                    }

            break;

            case 2:if(rows1==rows2 && cols1==cols2){
                subMatrix(matrix1,matrix2,result,rows1,cols1);
                }
                else{
                    printf("Matrix substraction not possible, different dimensions!!!\n");
                }
                break;

            case 3: if(cols1==rows2){
                multiplyMatrix(matrix1,matrix2,result,rows1,rows2,cols1,cols2);
            }
            else{
                printf("Mutiplication not possible, differnt cols. and rows. sizes");
            }
            break;

            case 4: printf("Exiting program");
            return 0;

            default: printf("Invalid,try again!!!");

                
        }
            
        
        }



}