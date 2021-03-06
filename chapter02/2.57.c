#include<stdio.h>
typedef unsigned char* byte_pointer;
void show_bytes(byte_pointer start,size_t len){
    size_t i;
    for(i = 0; i < len; i++){
        printf("%.2x",start[i]);
    }
    printf("\n");
}
void show_short(short x){
    show_bytes((byte_pointer)&x,sizeof(short));
}
void show_long(long x){
    show_bytes((byte_pointer)&x,sizeof(long));
}
void show_float(float x){
    show_bytes((byte_pointer)&x,sizeof(float));
}
int main(){
    double num = 114514.1919810;
    short nums = (short)num;
    long numl = (long)num;
    float numf = (float)num;
    show_bytes((byte_pointer)&num,sizeof(int));
    show_short(nums);
    show_float(numf);
}