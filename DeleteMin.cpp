#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#define ERROR -1
#define OK 0
#define INCREMENT 10//增量
#define LISTSIZE 100//初始空间
typedef int Status;
typedef int Elemtype;
//顺序存储结构 
typedef struct {
	Elemtype *elem;
	int length;
	int listsize; 
}SqList;
//初始化
Status InitSqList(SqList &L){
	L.elem=(Elemtype*)malloc(LISTSIZE*sizeof(Elemtype));
	if(!L.elem){
		return ERROR;
	}
	
	L.length=0;
	L.listsize=LISTSIZE;
}
//获取顺序表长度 
Status getLength(SqList &L){
	return L.length;
}
//创建顺序表 
Status createList(SqList &L,int n){
	printf("请输入%d个元素：\n",n);
	int i = 0;
	int num;
	for(i=0;i<n;i++){
		scanf("%d",&num);
		L.elem[i]=num;
		L.length++;
	} 
	return OK;
}
Status deleteMin(SqList &L){
	if(L.length == 0){
		return 0;
	}
	int pos = 0;
	int min = L.elem[0];
	for(int i =1;i<L.length;i++) {
		if(min > L.elem[i]){
			min = L.elem[i];
			pos = i;
		}
	}
	L.elem[pos] = L.elem[L.length - 1];
	L.length--;
	for(int i = 0;i < L.length;i++){
	printf("%d",L.elem[i]);
	}
}
int main(){
	SqList L;
	InitSqList(L);
	createList(L,7);
	deleteMin(L);
}
