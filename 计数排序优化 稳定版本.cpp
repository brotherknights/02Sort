//#include"head.h"
//
//void CountSort(int arr[],int length) {
//	//������Сֵ ���ֵ
//	int min = arr[0];
//	int max = arr[0];
//	for (int i = 0; i < length;i++) {
//		if (arr[i]<min) {
//			min = arr[i];
//		}
//	}
//	for (int i = 0; i < length; i++) {
//		if (arr[i] > max) {
//			max = arr[i];
//		}
//	}
//
//	//��Ҫ�������С
//	int countarr = max - min+1;
//
//		//malloc��������
//	int* count = (int*)malloc(sizeof(int)* countarr);
//	memset(count,0, sizeof(int) * countarr);
//
//	//���� ����
//	for (int i = 0; i < length;i++) {
//		count[arr[i]-min]++;
//	}
//
//	//��������
//	int* p = (int*)malloc(sizeof(int) * countarr);
//	memset(p, 0, sizeof(int) * countarr);
//
//	for (int i = 0; i < countarr; i++) {
//		if (i==0) {
//			p[i] = count[i];
//		}
//		else {
//			p[i] = count[i] + p[i-1];
//		}
//	}
//
//	//mallocһ��������
//	int* z = (int*)malloc(sizeof(int) * length);
//	memset(z, 0, sizeof(int) * length);
//
//	//�������arr����
//	int i = length-1;
//	while (i>=0) {
//		z[p[arr[i] - min]-1]=arr[i];
//		p[arr[i] - min]--;
//		i--;
//	}
//	//�Ż�
//	for (int i = 0; i < length;i++) {
//		arr[i]=z[i];
//	}
//
//
//		free(p);
//	p = nullptr;
//		free(z);
//	z = nullptr;
//		free(count);
//	count = nullptr;
//
//
//}
//
//int main() {
//	int arr[] = {2,9,3,6,6,8,9,3,6,6};
//	int length = sizeof(arr)/sizeof(arr[0]);
//	CountSort(arr,length);
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
//				printf("%d", arr[i]);
//			}
//}