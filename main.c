#include <stdio.h>
#include <stdlib.h>
#include "linklist.h" 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	ElemType e;
	//����ͷ��� 
	LinkList l = (LinkList)malloc(sizeof(Node));
	l->next = NULL;
	//���� 
	listInsert(l, 1, 5); 
	listInsert(l, 2, 6); 
	listInsert(l, 3, 7);
	//��ȡ 
	listRead(l, 1, &e);
	printf("%d\n", e);
	//ɾ�� 
	listDelete(l, 2, &e);
	printf("%d\n", e);
	//��ȡ 
	listRead(l, 2, &e);
	printf("%d\n", e);
	//���� 
	printf("%d\n", listSearch(l, 6)); //���� 2 
	printf("%d\n", listSearch(l, 7)); //����-1 
	return 0;
}
