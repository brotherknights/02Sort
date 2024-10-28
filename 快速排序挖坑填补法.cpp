//#include"head.h"
//
//int Sort(int arr[],int start, int end) {//用来找到标准值并且
//	int temp1=start;//左侧标记
//	int temp2=end;//右侧标记
//
//	//选定标准值
//	int Mid=arr[start];//枢轴
//
//	//原地排序
//	while (temp1 != temp2) {//最外层终止条件 
//		while (temp1<temp2) {//右向左遍历 
//			if (arr[temp2]<Mid) {
//				arr[temp1] = arr[temp2];
//				temp1++;
//				break;//这里的break有效控制右向左遍历 什么时候结束 当有小的时候才结束 没有小的就--去下一个那里
//			}
//			else {
//				temp2--;
//			}
//		}
//		while (temp1 < temp2) {//左向右遍历
//			if (arr[temp1]>Mid) {
//				arr[temp2] = arr[temp1];
//				temp2--;
//				break;
//			}
//			else {
//				temp1++;
//			}
//		}
//	}
//	//把标的放入最后的位置
//	arr[temp1] = Mid;
//	return temp1;
//}
//void QuickSort(int arr[], int start, int end) {
// if (arr == NULL || start >= end) { return; }
//	int Middle;
//	//分成两部分 分别排序
//	Middle=Sort(arr,start,end);
//	QuickSort(arr, start, Middle - 1);
//	QuickSort(arr, Middle+1, end);
//
//}
//
//int main() {
//	int arr[] = {10,16,3,12,9,16,22,4,9,8}; 
//	QuickSort(arr,0,9);
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
