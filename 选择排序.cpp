//#include"head.h"
//
//void SelectSort(int arr[],int nLength) {
//	int i = 0;
//	int a = 0;
//	int j;
//	for (i; i < nLength;i++) {
//		int Max=0;//Maxÿ�α������ǵ�һ������
//		for (j= 1; j < nLength-i-1;j++) {
//			if (arr[Max]<arr[j]) {
//				Max = j;
//			}
//		}if (Max != i) {//���max��=i��λ�õĻ� 
//			//����λ�� ��ʱ��ͷŵ�ĩβ�� ����һ�ν������ѭ����ʱ��Ͳ����õ����maxֵ �����ҵ��ľ��ǵڶ����ֵ
//				a = arr[j-1];
//						arr[j - 1] = arr[Max];
//						arr[Max] = a;
//		}
//		
//	}
//
//}
//
//int main() {
//	int arr[] = {1,4,6,8,2,9};
//	SelectSort(arr,sizeof(arr)/sizeof(arr[0]));
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]);i++) {
//		printf("%d", arr[i]);
//	}
//}