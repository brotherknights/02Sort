//#include <stdio.h>
//#include <stdlib.h>
//
//// �ϲ�����������ĺ���
//void merge(int arr[], int l, int m, int r) {
//    int i, j, k;
//    int n1 = m - l + 1; // ���������Ĵ�С
//    int n2 = r - m;     // �Ҳ�������Ĵ�С
//
//    // ������ʱ����
//    int* L = (int*)malloc(n1 * sizeof(int));
//    int* R = (int*)malloc(n2 * sizeof(int));
//
//    // �������ݵ���ʱ���� L[] �� R[]
//    for (i = 0; i < n1; i++)
//        L[i] = arr[l + i];
//    for (j = 0; j < n2; j++)
//        R[j] = arr[m + 1 + j];
//
//    // �ϲ���ʱ����ص�ԭ����arr[]
//    i = 0; // ��ʼ������һ��������
//    j = 0; // ��ʼ�����ڶ���������
//    k = l; // ��ʼ�����ϲ�������
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
//    //��L���������R������ ��ô�Է�����ͻ���ʣ���Ԫ����Ҫ����
//    // ����L[]��ʣ��Ԫ��
//    while (i < n1) {
//        arr[k] = L[i];
//        i++;
//        k++;
//    }
//
//    // ����R[]��ʣ��Ԫ��
//    while (j < n2) {
//        arr[k] = R[j];
//        j++;
//        k++;
//    }
//}
//
//// l ���������߽磬r ���ұ߽�
//void mergeSort(int arr[], int l, int r) {
//    if (l < r) {
//        // �ҵ��м��
//        int m = l + (r - l) / 2;
//
//        // �ݹ����������
//        mergeSort(arr, l, m);
//        mergeSort(arr, m + 1, r);
//
//        // �ϲ�����
//        merge(arr, l, m, r);
//    }
//}
//
//// ��ӡ����ĺ���
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
//    printf("\n������������ \n");
//    printArray(arr, arr_size);
//    return 0;
//}
//
////int MergeSort(int arr[],int start,int end) {
////	if () {//��ֹ����
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