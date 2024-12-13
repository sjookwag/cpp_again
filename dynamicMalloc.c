#include <stdio.h>
#include <stdlib.h>

int main() {
    int row, col;
    
    printf("행의 수를 입력하세요: ");
    scanf("%d", &row);
    
    printf("열의 수를 입력하세요: ");
    scanf("%d", &col);
    
    int** matrix = (int**)malloc(sizeof(int*) * col);
    
    for (int i=0;i<row;i++) {
        matrix[i] = (int*)malloc(sizeof(int) * row);
    }
    
    for (int x=0;x<row;x++) {
        for (int y=0;y<col;y++) {
            printf("matrix[%d][%d]: ", x, y);
            scanf("%d", &matrix[x][y]);
        }
    }
    
    for (int h=0;h<row;h++) {
        for (int z=0;z<col;z++) {
            printf("%d ", matrix[h][z]);
        }
        printf("\n");
        free(matrix[h]);
    }
    free(matrix);
    
    

    return 0;
}
//출처: https://hyungin0505.tistory.com/74 [간디의 세상:티스토리]
