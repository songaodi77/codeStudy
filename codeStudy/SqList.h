#pragma once
#include<iostream>
#define MAXSIZE 100
#define elemType int

typedef struct {
	elemType *data;
	int size; // �洢��ǰ����ĳ���
	int maxSize;//�洢��ǰ������ӵ�е��ڴ��С
}SqList_node;

bool InitList();

