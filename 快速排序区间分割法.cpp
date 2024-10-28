//#include"head.h"
//
// int Sort(int arr[], int start, int end) {
//	int Small=start-1;//小区间指示
//	int temp=end;//标的
//	int b;//临时存储的地方
//	int c;
//
//	for (int start_index=start; start_index <end; start_index++) {
//		if (arr[start_index]<arr[temp]) {
//			Small++;//小区间后移一位
//			b = arr[Small];
//			arr[Small] = arr[start_index];
//			arr[start_index] = b;
//		}
//	}
//	if (Small!=end) {
//		c = arr[Small+1];
//		arr[Small+1]=arr[temp];//标的放入small的下一个
//		arr[temp] = c;
//	}
//	
//	return Small+1;
//}
//
//void QuickSort(int arr[], int start, int end) {
//	if (arr == NULL || start >= end) { return; }
//	int small;
//	small = Sort(arr,start,end);
//	QuickSort(arr,start,small-1);
//	QuickSort(arr,small+1,end);
//}
//
//int main() {
//	int arr[] = {10,16,3,12,22,4,9,8}; 
//	QuickSort(arr,0,7);
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}