#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"command.h"



int encode_file( const char *entry, const char *exit){
    char mass[20];
	int dv=0,c=1;
    FILE* vvod;
    vvod=fopen(entry,"r");
    fgets(mass,20, vvod);
    unsigned long x=strtoul(mass,0,0);
    printf("%lu\n",x);
    fclose(vvod);
    FILE* vivod;
    vivod=fopen(exit,"w"); 
    while(x){
	dv+=(x%2)*c;
	c*=10;
	x/=2;}
printf("%d\n",dv);
    



}

int decode( const char *entry, const char *exit){



}

