#include<stdio.h>
typedef unsigned char* byte_pointer;
size_t numCombine(size_t x,size_t y){
    size_t mask = 0xFF;
    size_t result = (x&mask)|(y&~mask);
    return result;
}
int main(){
    size_t x,y;
    scanf("%d",&x);
    sacnf("%d",&y);
    printf("%d",numCombine(x,y));
}
