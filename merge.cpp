#include<stdio.h>
#include<malloc.h>
typedef struct LNode{
	int data;
	LNode *next;
}LNode;
LNode *A, *B, *C;
void merge(LNode *A, LNode *B, LNode *&C){
	LNode *p = A->next;
	LNode *q = B->next;
	LNode *s;
	LNode *r;
	C = A;
	C->next = NULL;
	free(B);
	r = C;
	while(p != NULL && q != NULL){
		if(p->data <= q->data){
			s = p;
			p = p->next;
			s->next = r->next;
			r->next = s;
		}
		else{
			s = q;
			q = q->next;
			s->next = r->next;
			r->next = s;
		}
	}
	while(p != NULL){
		s = p;
		p = p->next;
		s->next = r->next;
		r->next = s;
	}
	while(q != NULL){
		s = q;
		q = q->next;
		s->next = r->next;
		r->next = s;
	}
}
 
void createLinkList(){
	LNode *pa;
	LNode *pb;
	A = (LNode*)malloc(sizeof(LNode));
	B = (LNode*)malloc(sizeof(LNode));
	pa = A;
	pb = B;
	pa->next = NULL;
	pb->next = NULL;
	
	for(int i = 1; i <= 10; i += 2){
		LNode *newNode = (LNode*)malloc(sizeof(LNode));
		newNode->data = i;
		pa->next = newNode;
		pa = pa->next;
	} 
	pa->next = NULL;
	for(int i = 6; i <= 10; i+= 2){
		LNode *newNode = (LNode*)malloc(sizeof(LNode));
		newNode->data = i;
		pb->next = newNode;
		pb = pb->next;
	} 
	pb->next = NULL;
}
 
int main(void){
	createLinkList();
	merge(A, B, C);
	LNode *p = C;
	while(p->next != NULL){
		printf("%d ", p->next->data);
		p = p->next;
	} 
	return 0;
} 

