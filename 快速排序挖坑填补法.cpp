//#include"head.h"
//
//int Sort(int arr[],int start, int end) {//�����ҵ���׼ֵ����
//	int temp1=start;//�����
//	int temp2=end;//�Ҳ���
//
//	//ѡ����׼ֵ
//	int Mid=arr[start];//����
//
//	//ԭ������
//	while (temp1 != temp2) {//�������ֹ���� 
//		while (temp1<temp2) {//��������� 
//			if (arr[temp2]<Mid) {
//				arr[temp1] = arr[temp2];
//				temp1++;
//				break;//�����break��Ч������������� ʲôʱ����� ����С��ʱ��Ž��� û��С�ľ�--ȥ��һ������
//			}
//			else {
//				temp2--;
//			}
//		}
//		while (temp1 < temp2) {//�����ұ���
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
//	//�ѱ�ķ�������λ��
//	arr[temp1] = Mid;
//	return temp1;
//}
//void QuickSort(int arr[], int start, int end) {
// if (arr == NULL || start >= end) { return; }
//	int Middle;
//	//�ֳ������� �ֱ�����
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
