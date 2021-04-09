#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#define ERROR -1
#define OK 0
#define INCREMENT 10
#define LISTSIZE 100
typedef int Status;
typedef int Elemtype;

typedef struct {
	Elemtype *data;
	int length;
	int listsize; 
}SqList;

Status InitSqList(SqList &L){
	L.data=(Elemtype*)malloc(LISTSIZE*sizeof(Elemtype));
	if(!L.data){
		return ERROR;
	}
	
	L.length=0;
	L.listsize=LISTSIZE;
}
 
Status getLength(SqList &L){
	return L.length;
}
 
Status createList(SqList &L,int n){
	printf("«Î ‰»Î%d∏ˆ‘™Àÿ£∫\n",n);
	int i = 0;
	int num;
	for(i=0;i<n;i++){
		scanf("%d",&num);
		L.data[i]=num;
		L.length++;
	} 
	return OK;
}
Status delete2(SqList &L,int s,int t){
    if(s >= t || L.length == 0){
    	return 0;
	}	
	int k = 0;
	for(int i =0;i < L.length ; i++){
	if( L.data[i] < s || L.data[i] > t){
		L.data[k] = L.data[i];
		k++;  
	}	
    }
    L.length = k ;
	for(int i = 0;i < L.length;i++){
	printf("%d",L.data[i]);
	}
}
int main(){
	SqList L;
	InitSqList(L);
	createList(L,7);
	delete2(L,2,4);
}
