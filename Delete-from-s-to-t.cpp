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
Status deleteList(SqList &L,int s,int t){
	if(s >= t || L.length == 0) {
		return 0;
	}
	int l = 0;
	int r = 0;
	for( int i = 0;L.elem[i] <= s&&i<L.length;i++ ){
		 l = i + 1;
	}
	for( int j = 0;L.elem[j] < t&&j<L.length;j++){
		 r = j + 1;
	}
	for(;r<L.length;l++,r++){
		L.elem[l] = L.elem[r];
	}
	L.length = l;
	for(int i = 0;i < L.length;i++){
		printf("%d",L.elem[i]);
	}
}
int main(){
	SqList L;
	InitSqList(L);
	createList(L,7);
	deleteList(L,2,6);
}
