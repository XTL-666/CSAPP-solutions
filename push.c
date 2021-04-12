#define maxsize 100
#define elemtp int
typedef struct{
    elemtp stack[maxsize];
    int top[2];
}stk;
stk s;
int push(int i,elemtp x){
    if(i < 0||i > 1){
    printf("栈号输入不对");
    exit(0);
    }
    if(s.top[1] -s.top[0] == 1){
        printf("栈满了")；
        return 0;
    }
    switch(i) {
        case 0:s.stack[++s.top[0]] = x;
        return 1;
        break;
        case 1:s.stack[--s.top[1]] = x;
    }
}