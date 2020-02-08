#include "linklist.h"

int listInsert(LinkList l, int i, ElemType e)
{
	int j = 1;
	LinkList p = l, s;
	while(p && j < i){
		p = p->next;
		++j;
	}
	if(p && j == i){
		s = (LinkList)malloc(sizeof(Node));
		s->data = e;
		s->next = p->next;
		p->next = s;		
		return OK;
	}
	return ERROR;
}

int listDelete(LinkList l, int i, ElemType *pe)
{
	int j = 1;
	LinkList p = l, s;
	while(p && j < i){
		p = p->next;
		++j;
	}
	if(p->next && j == i){
		s = p->next;
		*pe = s->data;
		p->next = s->next;
		free(s);		
		return OK;
	}
	return ERROR;
}

int listRead(LinkList l, int i, ElemType *pe)
{
	int j = 1;
	LinkList p = l->next;
	while(p && j < i){
		p = p->next;
		++j;
	}
	if(p && j == i){
		*pe = p->data;		
		return OK;
	}
	return ERROR;
}
 
int listSearch(LinkList l, ElemType e)
{
	//±éÀú²éÕÒ
	int j = 1;
	LinkList p = l->next;
	while(p){
		if(p->data == e){
			return j;
		}
		p = p->next;
		++j; 
	}
	return -1;
}
