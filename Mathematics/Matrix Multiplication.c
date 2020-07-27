#include <stdio.h>

int main(void) {
  int r1,c1,r2,c2,mat1[100][100],mat2[100][100],new_mat[100][100];
  printf("\nEnter Row And Column->1st matrix: \n");
  scanf("%d%d",&r1,&c1);
  printf("\nEnter Row And Column->2nd matrix \n");
  scanf("%d%d",&r2,&c2);
  if(r1!=c2){
    printf("\nMultiplication not porssble\n");
    exit(0);
  }
  printf("Enter First Matrix Value\n");
  int i,j,k;
  for(i=0;i<r1;i++){
    for(j=0;j<c1;j++){
      printf("\n(%d%d) ",i+1,j+1);
      scanf("%d",&mat1[i][j]);
    }
  }
  printf("Enter First Matrix Value\n");
  for(i=0;i<r2;i++){
    for(j=0;j<c2;j++){
      printf("\n(%d%d) ",i+1,j+1);
      scanf("%d",&mat2[i][j]);
    }
  }
  
  for(i=0;i<r1;i++){
    for(j=0;j<c2;j++){
      new_mat[i][j]=0;

    }
  }
  for(i=0;i<r1;i++){
    for(j=0;j<c2;j++){
      for(k=0;k<c1;k++){
        new_mat[i][j]+=mat1[i][k]*mat2[k][j];
      }

    }
  }
  printf("\n\tResult\n");
  printf("\n\t------\n");
  for(i=0;i<r1;i++){
    for(j=0;j<c2;j++){
      printf(" %d",new_mat[i][j]);
      if(j==c2-1){
        printf("\n");
      }

    }
  }
  return 0;
}
