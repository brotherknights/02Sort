//#include"head.h"
//
////void Insertsort(int arr[],int nLength) {
////	int temp1=0;//������
////	int temp2=1;//������
////	int a;//�м丳ֵ
////	while (1)
////	{	//��ֹ������temp2ִ�е����һ��ʱ 
////		if (temp2 == nLength - 1)
////		{
////			break;
////		}
////		
////		if (arr[temp1]>arr[temp2]) {//����������� 
////			//������������ĸ�����С
////			int i = temp1;
////
////			while (1) {
////				if (arr[temp2]<arr[i]) {
////					i--;
////				}else {
////				// ������С������ǰ��
////				a=arr[temp2];//������������
////				while (temp1=) {
////					arr[temp2]=arr[temp1];//�����һ����ͳһ����һλ��temp2��
////
////
////				}
////				arr[i] = a;//�������ֱ��浽�������С��λ��
////				break;
////				}
////			}
////			temp1++;
////			temp2++;
////		}
////		else if(arr[temp1]<arr[temp2]) {//����С������
////			//����ֱ�ӷź��� ����
////			temp2++;
////			temp1++;
////		}
////
////		
////	}
////
////}
//
//void Insertsort(int arr[],int nLength) {
//	int temp1;//������
//	int temp2;//������
//	int temp;//�м丳ֵ
//	for (temp2=1; temp2 < nLength; temp2++) {
//		temp1 = temp2 - 1;//������������ǰһ��
//		temp = arr[temp2];//���浱ǰ���������
//		//���������������
//
//		while (arr[temp1]>temp&&temp1>=0) {//����������ִ�������� ������Ĳ�Ϊ0
//			//����Ԫ�ض�������һλ
//			arr[temp1 + 1] = arr[temp1];
//			temp1--;
//		}
//		//��������Ԫ��
//		arr[temp1+1] = temp;
//
//	}
//
//}
//
//int main() {
//	int arr[] = { 6,3,9,2,8,1,4 };
//	Insertsort(arr,sizeof(arr)/sizeof(arr[0]));
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
//				printf("%d", arr[i]);
//			}
//	return 0;
//}