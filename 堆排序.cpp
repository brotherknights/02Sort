////#include"head.h"
////
//////�����ѵ�
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
////		//����
////		int temp;
////		temp = arr[father];
////		arr[father] = arr[Max];
////		arr[Max] = temp;
////	}
////	return arr[father];
////}
////
//////�����
////void heapSort(int arr[],int length) {
////	int i = 0;
////	int temp;
////	for (int i = 0; i <= length / 2 - 1;i++) {
////		temp = arr[i];
////		int t = Adjustheap(arr, i, length);
////		if (temp != t) {
////			//���м��
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
//		//��������
//		if (RIGHT<nLength) {
//			//�Ҵ��
//			if (arr[RIGHT]>arr[MAX]) {
//				MAX = RIGHT;
//			}
//		}
//		//��ĺ͸��ױȽ�
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
//	//����ʼ��
//	int i;
//	for (i = nLength / 2 - 1; i >= 0;i--) {
//		//���ε����������׽ڵ�
//		Adjust(arr,nLength,i);
//	}
//	for (i = nLength - 1; i > 0;i--) {
//		//����
//		arr[0] = arr[0] ^ arr[i];
//		arr[i] = arr[0] ^ arr[i];
//		arr[0] = arr[0] ^ arr[i];
//		//�����Զ�
//		Adjust(arr, i, 0);
//	}
//}