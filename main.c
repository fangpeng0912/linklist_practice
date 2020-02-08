#include <stdio.h>
#include <stdlib.h>
#include "linklist.h" 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	ElemType e;
	//创建头结点 
	LinkList l = (LinkList)malloc(sizeof(Node));
	l->next = NULL;
	//插入 
	listInsert(l, 1, 5); 
	listInsert(l, 2, 6); 
	listInsert(l, 3, 7);
	//读取 
	listRead(l, 1, &e);
	printf("%d\n", e);
	//删除 
	listDelete(l, 2, &e);
	printf("%d\n", e);
	//读取 
	listRead(l, 2, &e);
	printf("%d\n", e);
	//查找 
	printf("%d\n", listSearch(l, 6)); //返回 2 
	printf("%d\n", listSearch(l, 7)); //返回-1 
	return 0;
}
