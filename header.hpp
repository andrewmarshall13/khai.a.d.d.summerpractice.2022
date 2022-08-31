#include<stdio.h>

int inputMatrix(FILE *file, int lines, int columns, int array[255][255]) 
{
    int i,j;
    for(i=0;i<lines;i++) {
        for(j=0;j<columns;j++) {
            fscanf(file,"%d",&array[i][j]);
        }
    }
    return(0);
}

int outputMatrix(int lines, int columns, int array[255][255]) 
{
    int i,j;
    for(i=0;i<lines;i++) {
        for(j=0;j<columns;j++) {
            printf("%6d ",array[i][j]);
        }
        if(i<lines) printf("\n");
    }
    return(0);
}