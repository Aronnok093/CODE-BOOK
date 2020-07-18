#include<stdio.h>
//The matrix have most element null is Sparse if not then Dense Matrix.
int main(){
    int mat[100][100],row,col,i,j,count=0,size;
    printf("\nEnter The Size Of Row And Coloumn:\n");
    scanf("%d%d",&row,&col);
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("row->%dCol->%d: ",i+1,j+1);
            scanf("%d",&mat[i][j]);
        }
    }
    size=row*col;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            if(mat[i][j]==0)
                count+=1;
        }
    }
    if(count>(size/2)){
        printf("\nThe Matrix is Sparse\n");
        printf("\nTotal Eliment->%d\nTotal Zero->%d\n",size,count);
    }
    else{
        printf("\nThe Matrix is Dense Matrix\n");
        printf("\nTotal Eliment->%d\nTotal Zero->%d\n",size,count);
    }
return 0;
}
