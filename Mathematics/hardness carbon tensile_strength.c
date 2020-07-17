#include<stdio.h>
#define pf printf
#define sf scanf
int main(){
    float hardness,carbon,tensile_strength;
    sf("%f%f%f",&hardness,&carbon,&tensile_strength);
    if(hardness>60.0&&carbon<0.7&&tensile_strength>5000.0)
        pf("10\n");
    else if(hardness>60&&carbon<0.7&&!tensile_strength>5000)
        pf("9\n");
    else if(!hardness>60&&carbon<0.7&&tensile_strength>5000)
        pf("8\n");
    else if(hardness>60&&!carbon<0.7&&tensile_strength>5000)
        pf("7\n");
    else if(hardness>60||carbon<0.7||tensile_strength>5000)
        pf("6\n");
    else
        pf("5\n");
}
