#include<stdio.h>
int main(){
    int *all,*a,*b,*c,*d,i,n1,n2,n3,n4,nall;
    int j,k,l,temp;
    a=(int*)malloc(n1*sizeof(int));
    b=(int*)malloc(n2*sizeof(int));
    c=(int*)malloc(n3*sizeof(int));
    d=(int*)malloc(n4*sizeof(int));
    all=(int*)malloc(nall*sizeof(int));
    printf("Enter The Size For First Array: ");
    scanf("%d",&n1);
    for(i=0;i<n1;i++){
        printf("\n%d-> ",i+1);
        scanf("%d",&a[i]);
    }
    printf("Enter The Size For 2nd Array: ");
    scanf("%d",&n2);
    for(i=0;i<n1;i++){
        printf("\n%d-> ",i+1);
        scanf("%d",&b[i]);
    }
    printf("Enter The Size For 3rd Array: ");
    scanf("%d",&n3);
    for(i=0;i<n1;i++){
        printf("\n%d-> ",i+1);
        scanf("%d",&c[i]);
    }
    printf("Enter The Size For 4th Array: ");
    scanf("%d",&n4);
    for(i=0;i<n1;i++){
        printf("\n%d-> ",i+1);
        scanf("%d",&d[i]);
    }
    nall=n1+n2+n3+n4;
    for(i=0;i<n1;i++)
        all[i]=a[i];
    for(j=0;j<n2;j++){
        all[i]=b[j];
        i++;
    }

    for(k=0;k<n3;k++){
        all[i]=b[k];
        i++;
    }
    for(l=0;l<n4;l++){
        all[i]=b[l];
        i++;
    }
    for(i=0;i<nall;i++){
            for(j=i+1;j<nall;j++){
                if(all[i]>=all[j]){
                    temp=all[i];
                    all[i]=all[j];
                    all[j]=temp;
        }
        }
    }

    printf("\nNew Array In ascending order : \n");
    for(i=0;i<nall;i++){
        printf("%d ",all[i]);
    }
    free(a);
    free(b);
    free(c);
    free(d);
    free(all);
    return 0;
}
