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
//	//��Ҫ������
//	int countarr = max - min+1;
//
//	//malloc����
//	int* p = (int*)malloc(sizeof(int)* countarr);
//	memset(p,0, sizeof(int) * countarr);
//
//	//����
//	for (int i = 0; i < length;i++) {
//		p[arr[i]-min]++;
//	}
//
//	//�Ż�
//	//for (int i = 0; i < countarr; i++) {
//	//	int index = 0;
//	//	index = p[i];
//	//	for (int k = i; k < index;k++) {
//	//		arr[k] = p[i];
//	//	}
//	//}
//	int j = 0;
//		for (int i = 0; i < countarr; i++) {
//			while (p[i]) {
//				arr[j] = i + min;
//				p[i]--;
//				j++;
//			}
//		}
//	
//
//
//	free(p);
//	p = nullptr;
//}
//
//int main() {
//	int arr[] = { 1,5,8,0,9,7,6,3,5,8,7 };
//	int length = sizeof(arr)/sizeof(arr[0]);
//	CountSort(arr,length);
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
//				printf("%d", arr[i]);
//			}
//}