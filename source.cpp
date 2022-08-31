#include"header.hpp"

int main(void)
{
    FILE *inputFile;
    int i,j,lines,columns;
    int matrix[255][255];

    inputFile = fopen("input.txt","r");
    fscanf(inputFile,"%d",&lines);
    fscanf(inputFile,"%d",&columns);

    inputMatrix(inputFile, lines, columns, matrix);
    outputMatrix(lines, columns, matrix);

    fclose(inputFile);
    return(0);
}