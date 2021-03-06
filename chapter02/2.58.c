#include<stdio.h>
typedef unsigned char* byte_pointer;
int is_little_endian(){
    int test = 0xbb;
    byte_pointer p = (byte_pointer)& test;
    if(p[0] == 0xbb)
    return 1;
    else 
    return 0;
}
int main(){
    if(is_little_endian())
    printf("the machine is little endian\n");
    else
    printf("the machine is big endian\n");
}