#include"sort.h"
#include<time.h>
#define N 20

int main(){
	int a[N],i;
	srand(time(0));

	for (i=0;i<N;i++)
	a[i]=rand() %100;
	printf("初始数据为: ");
	for (i=0;i<N;i++)
	printf("%d ",a[i]);
	printf("\n");
	bubble1(a,N);
	printf("冒泡排序后数据： ");
	for (i=0;i<N;i++) printf("%d ",a[i]);
	printf("\n");

	for (i=0;i<N;i++)
	a[i]=rand() %100;
	printf("初始数据为: ");
	for (i=0;i<N;i++)
	printf("%d ",a[i]);
	printf("\n");
        InsertSort(a,N);
	
	printf("插入排序后数据: ");
	for (i=0;i<N;i++) printf("%d ",a[i]);
	printf("\n");

        for (i=0;i<N;i++)
	a[i]=rand() %100;
	printf("初始数据为: ");

	for (i=0;i<N;i++)
	printf("%d ",a[i]);
	printf("\n");
	QuickSort(a,N);
	//MergeSort2(a,N);
	printf("快速排序后数据: ");
	for (i=0;i<N;i++) printf("%d ",a[i]);
	printf("\n");
}
        



