#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 100					//���Ա��������󳤶�
typedef int elemtype;
typedef struct						//�������Ա�Ľṹ
{
	elemtype data[MAXSIZE];			//��ʾ���Ա�a1��a2����.,an��
	int length;						//length��ʾ���Ա��ʵ�ʳ���
}SeqList;
/* ���Ա��ʼ����InitSeqList()
��ʼ��������L�����ڣ�
�������������һ���յ����Ա� */
SeqList* InitSeqList()
{
	SeqList* L;
	L = (SeqList*)malloc(sizeof(SeqList));
	if (!L)
		return NULL;
	else
	{
		L->length = 0;
		return L;
	}
}
/* ���Ա�ֵ��AssignSeqList(L)
��ʼ��������L����������
�������������һ������ָ����ֵ�����Ա� */
void AssignSeqList(SeqList* L)
{
	int i;
	printf("������Ԫ�ظ�����\n");
	scanf("%d", &L->length);
	printf("����Ԫ�ظ�����������Ԫ��ֵ��\n");
	for (i = 0; i < L->length; i++)
		scanf("%d", &L->data[i]);
}
/* ���Ա������OutputSeqList(L)
��ʼ��������L����
���������������Ա��е��������� */
void OutputSeqList(SeqList* L)
{
	int i;
	printf("˳���ĳ�����%d\n", L->length);
	if (L->length != 0)
	{
		printf("˳����Ԫ�������ǣ�");
		for (i = 0; i < L->length; i++)
			printf("%4d", L->data[i]);
	}
	else
	{
		printf("��ǰ˳���Ϊ�գ�");
	}
	printf("\n");
}
/* ���������InsertSeqList(L,i,x)
��ʼ���������Ա�L������δ��������λ����ȷ (1<=i<=ԭ��+1)��
��������������Ա�L�ĵ� i ��λ�ã��±�Ϊ i-1���ϲ���һ��ֵΪ x ����Ԫ�أ�����ʹԭ�±�Ϊ i-1, i��i+1, ... , L->length-1 ������Ԫ�ص��±��Ϊ i��i+1, ... , L->length��������=ԭ��+1��������ɹ�����1�����򷵻�-1�� */
int InsertSeqList(SeqList* L, int i, elemtype x)
{
	// �������ﲹ����룬��ɱ�������
	/********** Begin *********/
	if (L->length == MAXSIZE)
	{
		return 0;
	}
	int j = 0;
	L->length++;
	for (j = L->length; j >= i; j--)
	{
		L->data[j] = L->data[j - 1];
		if (j == i)
		{
			L->data[j] = x;
			break;
		}
	}
	return 1;
	/********** End **********/
}
int main() {
	SeqList* L;
	int i, x, k;
	L = InitSeqList();
	if (L == NULL)
		printf("��ʼ��˳���ʧ�ܣ�\n");
	else
	{
		AssignSeqList(L);
		OutputSeqList(L);
		printf("���������λ�ã�\n");
		scanf("%d", &i);
		printf("������������ݣ�\n");
		scanf("%d", &x);
		k = InsertSeqList(L, i, x);
		if (k == 1)
		{
			printf("��������ɹ�������Ԫ�غ�˳�������\n");
			OutputSeqList(L);
		}
		else
			printf("�������ʧ��\n");
	}
	return 0;
}