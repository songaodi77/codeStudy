#pragma once
#define MAXSIZE 100
#define elemType int
class SqList
{
	typedef struct {
		elemType *data;
		int size; // 存储当前链表的长度
		int maxSize;//存储当前链表所拥有的内存大小
	}SqList_node;
	
	bool InitSqList(SqList_node &L) {
		// 申请地址空间存储链表
		elemType *node=malloc(MAXSIZE * sizeof(elemType));
	}
};

