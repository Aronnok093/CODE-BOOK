#include<stdio.h>
int main(){
    int i,j,k,l,m,count=0;
        for(i=1;i<=9;i++){
            for(j=0;j<=9;j++){
                for(k=0;k<=9;k++){
                    for(l=0;l<=9;l++){
                        for(m=0;m<=9;m++){
                            if((i==2||i==4||i==6||i==8)&&(j==1||j==3||j==5||j==7||j==9)&&(k==3||k==5||k==7)&&(l!=k&&l!=i&&l!=j&&l!=m)&&(m!=k&&m!=i&&m!=j&&m!=l))
                                printf("%d%d%d%d%d->%d\n",i,j,k,l,m,count+=1);
                        }
                    }
                }
            }
        }
}
