#pragma once
#define MAXSIZE 100
#define elemType int
class SqList
{
	typedef struct {
		elemType *data;
		int size; // �洢��ǰ����ĳ���
		int maxSize;//�洢��ǰ������ӵ�е��ڴ��С
	}SqList_node;
	
	bool InitSqList(SqList_node &L) {
		// �����ַ�ռ�洢����
		elemType *node=malloc(MAXSIZE * sizeof(elemType));
	}
};

