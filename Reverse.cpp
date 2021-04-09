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
	Elemtype *data;
	int length;
	int listsize; 
}SqList;
//初始化
Status InitSqList(SqList &L){
	L.data=(Elemtype*)malloc(LISTSIZE*sizeof(Elemtype));
	if(!L.data){
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
		L.data[i]=num;
		L.length++;
	} 
	return OK;
}
Status Reverse(SqList &L){
    int l = 0;
    int r = L.length - 1;
    int temp;
    while(l < r){
    temp = L.data[l];
    L.data[l] = L.data[r];
    L.data[r] = temp;
    l++;
    r--;
	}
	for(int i = 0;i < L.length;i++){
	printf("%d",L.data[i]);
	}
}
int main(){
	SqList L;
	InitSqList(L);
	createList(L,7);
	Reverse(L);
}
