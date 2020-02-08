#ifndef _LINKLIST_H_
#define _LINKLIST_H_

#include <stdlib.h>
 
//链表元素类型定义
typedef int ElemType;
 
//链表结构定义 
typedef struct Node{
	ElemType data;
	struct Node *next;
}Node, *LinkList;

#define OK     0
#define ERROR -1

//链表元素的插入
int listInsert(LinkList l, int i, ElemType e); 

//链表元素的删除
int listDelete(LinkList l, int i, ElemType *pe); 

//链表元素的读取
int listRead(LinkList l, int i, ElemType *pe);

//链表元素的查找 
int listSearch(LinkList l, ElemType e);

#endif
