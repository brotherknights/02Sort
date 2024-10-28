//#include <stdio.h>
//#include <stdlib.h>
//
//// 合并两个子数组的函数
//void merge(int arr[], int l, int m, int r) {
//    int i, j, k;
//    int n1 = m - l + 1; // 左侧子数组的大小
//    int n2 = r - m;     // 右侧子数组的大小
//
//    // 创建临时数组
//    int* L = (int*)malloc(n1 * sizeof(int));
//    int* R = (int*)malloc(n2 * sizeof(int));
//
//    // 拷贝数据到临时数组 L[] 和 R[]
//    for (i = 0; i < n1; i++)
//        L[i] = arr[l + i];
//    for (j = 0; j < n2; j++)
//        R[j] = arr[m + 1 + j];
//
//    // 合并临时数组回到原数组arr[]
//    i = 0; // 初始索引第一个子数组
//    j = 0; // 初始索引第二个子数组
//    k = l; // 初始索引合并子数组
//    while (i < n1 && j < n2) {
//        if (L[i] <= R[j]) {
//            arr[k] = L[i];
//            i++;
//        }
//        else {
//            arr[k] = R[j];
//            j++;
//        }
//        k++;
//    }
//    //当L先走完或者R先走完 那么对方数组就会有剩余的元素需要拷贝
//    // 拷贝L[]的剩余元素
//    while (i < n1) {
//        arr[k] = L[i];
//        i++;
//        k++;
//    }
//
//    // 拷贝R[]的剩余元素
//    while (j < n2) {
//        arr[k] = R[j];
//        j++;
//        k++;
//    }
//}
//
//// l 是数组的左边界，r 是右边界
//void mergeSort(int arr[], int l, int r) {
//    if (l < r) {
//        // 找到中间点
//        int m = l + (r - l) / 2;
//
//        // 递归地排序两半
//        mergeSort(arr, l, m);
//        mergeSort(arr, m + 1, r);
//
//        // 合并两半
//        merge(arr, l, m, r);
//    }
//}
//
//// 打印数组的函数
//void printArray(int A[], int size) {
//    for (int i = 0; i < size; i++)
//        printf("%d ", A[i]);
//    printf("\n");
//}
//
//
//int main() {
//    int arr[] = { 12, 11, 13, 5, 6, 7 };
//    int arr_size = sizeof(arr) / sizeof(arr[0]);
//
//    mergeSort(arr, 0, arr_size - 1);
//
//    printf("\n排序后的数组是 \n");
//    printArray(arr, arr_size);
//    return 0;
//}
//
////int MergeSort(int arr[],int start,int end) {
////	if () {//终止条件
////		return arr[0];
////	}
////	int Mid = (start + (end - start)) / 2;
////	MergeSort(arr,start,Mid); 
////
////	MergeSort(arr, Mid+1, end);
////}
////
////
////int main() {
////	int arr[] = {10,16,3,12,22,4,9,8}; 
////	MergeSort(arr,0,7);
////	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
////		printf("%d ", arr[i]);
////	}
////	return 0;
////}