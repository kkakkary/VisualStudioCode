#include <stdio.h>
#include <string.h>

int main() {
    char setting[20][20] = { 
    { '_','_','_', '_', '_', '_', '_', '_','_', '_', '_', '_', '_' , '_' , '_' , '_' , '_' , '_' , '_' , '_'}, 
    {' ',' ', ' ', ' ', ' ', ' ', ' ', ' ',' ', ' ', ' ', ' ', ' ', ' ', ' ',' ', ' ', ' ', ' ', ' '}, 
    {' ',' ', ' ', ' ', ' ', ' ', ' ', ' ',' ', ' ', ' ', ' ', ' ', ' ' , ' ', ' ', ' ', ' ', ' ', ' '}, 
    {' ',' ', ' ', ' ', ' ', ' ', ' ', ' ',' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}, 
    {' ',' ', ' ', ' ', ' ', ' ', ' ', ' ',' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}, 
    {' ',' ', ' ', ' ', ' ', ' ', ' ', ' ',' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '} ,
    {' ',' ', ' ', ' ', ' ', 'O', ' ', ' ',' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}, 
    { ' ',' ',' ', ' ', ' ', ' ', ' ', ' ',' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    { '_','_','_', '_', '_', '_', '_', '_','_', '_', '_', '_', '_', '_', '_', '_','_', '_', '_', '_'}
    };
    int i,j;
    printf("Ready to game?\n");
    for (int i = 0;i<20;i++){
        for (int j = 0;j<20;j++){
            printf("%c",setting[i][j]);
        }
        printf("\n");
    }
    return 0;
}