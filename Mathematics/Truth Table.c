#include <stdio.h>
#include<math.h>

int main() {
    int x,y,z;
    printf("X\tY\tZ\tx*y+z\n");
    for(x=0;x<=1;x++){
        for(y=0;y<=1;y++){
            for(z=0;z<=1;z++){
                printf("%d\t%d\t%d\t%d\n",x,y,z,x&y|z);
            }
        }
    }

}
