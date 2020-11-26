#ifndef sort_h
#define sort_h
#include<stdio.h>
#include<stdlib.h>


void bubble1(int a[],int n);
void InsertSort(int a[],int n);
void SelectSort(int a[],int n);
int Partition(int a[],int low,int high);
void Qsort(int a[],int low,int high);
void QuickSort(int a[],int n);

#endif
