//#include"head.h"
//
////void Insertsort(int arr[],int nLength) {
////	int temp1=0;//有序标记
////	int temp2=1;//无序标记
////	int a;//中间赋值
////	while (1)
////	{	//终止条件当temp2执行到最后一个时 
////		if (temp2 == nLength - 1)
////		{
////			break;
////		}
////		
////		if (arr[temp1]>arr[temp2]) {//有序大于无序 
////			//倒序遍历：看哪个比他小
////			int i = temp1;
////
////			while (1) {
////				if (arr[temp2]<arr[i]) {
////					i--;
////				}else {
////				// 插入最小的有序前面
////				a=arr[temp2];//保存无序数字
////				while (temp1=) {
////					arr[temp2]=arr[temp1];//有序的一部分统一后移一位到temp2处
////
////
////				}
////				arr[i] = a;//无序数字保存到有序的最小的位置
////				break;
////				}
////			}
////			temp1++;
////			temp2++;
////		}
////		else if(arr[temp1]<arr[temp2]) {//有序小于无序
////			//无序直接放后面 不动
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
//	int temp1;//有序标记
//	int temp2;//无序标记
//	int temp;//中间赋值
//	for (temp2=1; temp2 < nLength; temp2++) {
//		temp1 = temp2 - 1;//有序的是无序的前一个
//		temp = arr[temp2];//保存当前无序的数字
//		//倒序遍历有序数组
//
//		while (arr[temp1]>temp&&temp1>=0) {//当有序的数字大于无序的 且有序的不为0
//			//有序元素都往后移一位
//			arr[temp1 + 1] = arr[temp1];
//			temp1--;
//		}
//		//插入无序元素
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