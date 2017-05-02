#include<stdio.h>
#include"command.h"
int main( int argc,char argv[]){
 for (i = 0; i < argc; ++i) {
        printf("argv[%d] = %s\n", i, argv[i]);
    }
    if(argv[1]=="encode")
    encode_file(argv[1],argv[2]);
    if(argv[1]=="decode")
    decode_file(argv[1],argv[2]);
return 0;
}
