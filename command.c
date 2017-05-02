#include<stdio.h>
#include<stdlib.h>
#include <inttypes.h>
#include"command.h"

enum {
    MaxCodeLength = 4
};

 struct str {
    uint8_t code[MaxCodeLength];
    size_t length;
} ;


int encode_file( const char *entry, const char *exit){
   uint32_t m; 
   int l=0;
   int code[100];
   unsigned long b;
   int c=1;
    FILE* vvod;
    vvod=fopen(entry,"r");
    fscanf(vvod, "%" SCNx32, &m);
    printf("%" PRIx32 "\n", m);
    for(int i=0;i<8;i++){
    code[i]=i<<2;
    }
     for(int i=0;i<8;i++){
    printf("%d",code[i]);
    }
     fclose(vvod);
     
     printf("%d\n",b);
   
    
     
       
}

int decode( const char *entry, const char *exit){



}

