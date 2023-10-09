#pragma once
#include<iostream>
#define MAXSIZE 100
#define elemType int

typedef struct {
	elemType *data;
	int size; // 存储当前链表的长度
	int maxSize;//存储当前链表所拥有的内存大小
}SqList_node;

bool InitList();

