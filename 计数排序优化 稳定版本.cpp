//#include"head.h"
//
//void CountSort(int arr[],int length) {
//	//计算最小值 最大值
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
//	//需要的数组大小
//	int countarr = max - min+1;
//
//		//malloc计数数组
//	int* count = (int*)malloc(sizeof(int)* countarr);
//	memset(count,0, sizeof(int) * countarr);
//
//	//遍历 计数
//	for (int i = 0; i < length;i++) {
//		count[arr[i]-min]++;
//	}
//
//	//名次数组
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
//	//malloc一个新数组
//	int* z = (int*)malloc(sizeof(int) * length);
//	memset(z, 0, sizeof(int) * length);
//
//	//倒序遍历arr数组
//	int i = length-1;
//	while (i>=0) {
//		z[p[arr[i] - min]-1]=arr[i];
//		p[arr[i] - min]--;
//		i--;
//	}
//	//放回
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