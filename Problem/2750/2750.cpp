// 배열 - quick sort

// #include <iostream>
 
// using namespace std;
 
// void quick_sort(int[],int,int);
// int partition(int[],int,int);
 
// int main()
// {
//     int *a,n,i;

//     cin>>n;
//     a = (int *)malloc((n)* sizeof(int));
//     for(i=0;i<n;i++)
//         cin>>a[i];
        
//     quick_sort(a,0,n-1);

//     for(i=0;i<n;i++)
//         cout<<a[i]<<'\n';
    
//     return 0;        
// }
 
// void quick_sort(int a[],int l,int u)
// {
//     int j;
//     if(l<u)
//     {
//         j=partition(a,l,u);
//         quick_sort(a,l,j-1);
//         quick_sort(a,j+1,u);
//     }
// }
 
// int partition(int a[],int l,int u)
// {
//     int v,i,j,temp;
//     v=a[l];
//     i=l;
//     j=u+1;
    
//     do
//     {
//         do
//             i++;
            
//         while(a[i] < v && i < u);
        
//         do
//             j--;
//         while(v < a[j] && v > l );
        
//         if(i<j)
//         {
//             temp=a[i];
//             a[i]=a[j];
//             a[j]=temp;
//         }
//     }while(i<j);
    
//     a[l]=a[j];
//     a[j]=v;
    
//     return(j);
// }

#include <stdio.h>
#include <stdlib.h>
void quickSort(int nums[], int left, int right);
void swap(int *p, int *q);
int main()
{
	int i, n, *nums;
	scanf("%d", &n);
	nums = (int *)malloc((n)* sizeof(int));
	for (i = 0; i < n; i++)
		scanf("%d", &nums[i]);
	quickSort(nums, 0, n - 1);
	for (i = 0; i < n; i++)
		printf("%d\n", nums[i]);
	free(nums);
}

void quickSort(int nums[], int left, int right)
{
	int pivot, i, j;
	i = left;
	j = right + 1;
	pivot = nums[left];
	if (left < right) {
		do {
			do i++; while (nums[i] < pivot && i<right);
			do j--; while (nums[j] > pivot && j>left);
			if (i < j) swap(&nums[i], &nums[j]);
		} while (i < j);
		swap(&nums[left], &nums[j]);
		quickSort(nums, left, j - 1);
		quickSort(nums, j + 1, right);
	}
}
void swap(int *p, int *q)
{
	int temp = *p;
	*p = *q;
	*q = temp;
}