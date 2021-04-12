#define maxsize 100
#define elemtp int
typedef struct{
    elemtp stack[maxsize];
    int top[2];
}stk;
stk s;
eletmp pop(int i){
    if(i < 0||i > 1){
        printf("栈号输入错误\n");
        exit(0);
    }
    switch(i) {
        case 0:
        if(s.top[0] == -1){
            printf("栈空\n");
            return -1;
        }
        else return s.stack[s.top[0]--];
        case 1:
        if(s.top[1] == maxsize){
            print("栈空\n");
            return -1;
        }
        else return s.stack[s.top[1]++];
    }
}