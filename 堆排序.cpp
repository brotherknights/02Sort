////#include"head.h"
////
//////调整堆的
////int  Adjustheap(int arr[],int father,int length) {
////	int Max;
////	if (arr[2*father+1]<arr[2*father+2]) {
////		Max = 2 * father + 2;
////	}
////	else {
////		Max = 2 * father + 1;
////	}
////	if (arr[father]>arr[Max]) {
////		Max = father;
////	}
////	else {
////		//交换
////		int temp;
////		temp = arr[father];
////		arr[father] = arr[Max];
////		arr[Max] = temp;
////	}
////	return arr[father];
////}
////
//////排序的
////void heapSort(int arr[],int length) {
////	int i = 0;
////	int temp;
////	for (int i = 0; i <= length / 2 - 1;i++) {
////		temp = arr[i];
////		int t = Adjustheap(arr, i, length);
////		if (temp != t) {
////			//进行检查
////		}
////
////	}
////
////}
////
////int main() {
////
////}
//
//#include"head.h"
//#define LEFT 2*nRootID+1
//#define RIGHT 2*nRootID+2
//
//void Adjust(int arr[],int nLength,int nRootID) {
//	int MAX;
//	for (MAX = LEFT; MAX, nLength;MAX=LEFT) {
//		//两个孩子
//		if (RIGHT<nLength) {
//			//找大的
//			if (arr[RIGHT]>arr[MAX]) {
//				MAX = RIGHT;
//			}
//		}
//		//大的和父亲比较
//		if (arr[RIGHT]>arr[MAX]) {
//			arr[nRootID] = arr[MAX] ^ arr[nRootID];
//			arr[MAX] = arr[MAX] ^ arr[nRootID];
//			arr[nRootID] = arr[MAX] ^ arr[nRootID];
//			nRootID = MAX;
//		}
//		else {
//			break;
//		}
//	}
//}
//
//void HeapSort(int arr[],int nLength) {
//	//建初始堆
//	int i;
//	for (i = nLength / 2 - 1; i >= 0;i--) {
//		//依次调整各个父亲节点
//		Adjust(arr,nLength,i);
//	}
//	for (i = nLength - 1; i > 0;i--) {
//		//交换
//		arr[0] = arr[0] ^ arr[i];
//		arr[i] = arr[0] ^ arr[i];
//		arr[0] = arr[0] ^ arr[i];
//		//调整对顶
//		Adjust(arr, i, 0);
//	}
//}