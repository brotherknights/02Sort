//#include"head.h"
//
//void SelectSort(int arr[],int nLength) {
//	int i = 0;
//	int a = 0;
//	int j;
//	for (i; i < nLength;i++) {
//		int Max=0;//Max每次遍历都是第一个数字
//		for (j= 1; j < nLength-i-1;j++) {
//			if (arr[Max]<arr[j]) {
//				Max = j;
//			}
//		}if (Max != i) {//如果max！=i的位置的话 
//			//交换位置 这时候就放到末尾了 当下一次进入二层循环的时候就不会用到这个max值 遍历找到的就是第二大的值
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