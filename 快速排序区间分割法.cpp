//#include"head.h"
//
// int Sort(int arr[], int start, int end) {
//	int Small=start-1;//С����ָʾ
//	int temp=end;//���
//	int b;//��ʱ�洢�ĵط�
//	int c;
//
//	for (int start_index=start; start_index <end; start_index++) {
//		if (arr[start_index]<arr[temp]) {
//			Small++;//С�������һλ
//			b = arr[Small];
//			arr[Small] = arr[start_index];
//			arr[start_index] = b;
//		}
//	}
//	if (Small!=end) {
//		c = arr[Small+1];
//		arr[Small+1]=arr[temp];//��ķ���small����һ��
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