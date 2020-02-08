#ifndef _LINKLIST_H_
#define _LINKLIST_H_

#include <stdlib.h>
 
//����Ԫ�����Ͷ���
typedef int ElemType;
 
//����ṹ���� 
typedef struct Node{
	ElemType data;
	struct Node *next;
}Node, *LinkList;

#define OK     0
#define ERROR -1

//����Ԫ�صĲ���
int listInsert(LinkList l, int i, ElemType e); 

//����Ԫ�ص�ɾ��
int listDelete(LinkList l, int i, ElemType *pe); 

//����Ԫ�صĶ�ȡ
int listRead(LinkList l, int i, ElemType *pe);

//����Ԫ�صĲ��� 
int listSearch(LinkList l, ElemType e);

#endif
