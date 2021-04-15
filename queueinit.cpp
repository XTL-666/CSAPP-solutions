#define Maxsize 50
typedef struct{
    int data[Maxsize];
    int front,rear;
} SqQueue;

//初始化
void InitQueue(sqQueue &Q) {
    Q.rear = Q.front = 0;
}

//判空
bool isEmpty(sqQueue Q) {
    if(Q.rear == Q.front){
        return true;
    }
    else{
        return false;
    }

//入队
bool EnQueue(sqQueue &Q,int x){
    if((Q.rear+1)%Maxsize == Q.front){
        printf("队列已满")
        return false;
    } 
    Q.data[Q.rear]  = x;
    Q.rear = (Q.rear + 1)%Maxszie;
    return true;
}

//出队
bool DeQueue(sqQueue &Q,int x){
    if(isEmpty()){
        return false;
    }
    x = Q.data[Q.front];
    Q.front = (Q.front + 1)%Maxsize;
    return true;
}
// 链式存储
typedef struct {
    int data;
    struct LinkNode *next;
}LinkNode;

typedef struct {
    LinkNode *front,*rear;
}LinkQueue;


//链式初始化
void InitQueue (LinkQueue &Q){
    Q.front = Q.rear = (LinkNode*)malloc(sizeof(LinkNode));
    Q.fornt->next = NULL;
} 

//判空
bool Isempty(LinkQueue Q){
    if(Q.front == Q.rear){
        return true;
    }
    esle{
        return false;
    }
}

//入队
void EnQueue(LinkQueue &Q,int x){
    LinkNode *s =(LinkNode *)malloc(sizeof(LinkNode));
    s->data = x;
    s->next = NULL;
    Q.rear->next = s;
    Q.rear = s;
}

//出队
bool DeQueue(LinkQueue &Q,int x) {
    if(Q.front == Q.rear){
        return false;
    }
    Linknode *p = q.front->next;
    x = p->data;
    Q.front -> next = p -> next;
    if(Q.rear == p){
        Q.rear = Q.front;
    }
    free(p);
    return true;
}




















}
