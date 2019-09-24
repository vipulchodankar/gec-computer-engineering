//merge sort
#include<stdio.h>
#include<string.h>

int merge(int left[],int right[],int arr[],int len_left,int len_right)
{
	int k=0,l=0,r=0;
	while(l<len_left && r<len_right)
	{
		if(left[l]<=right[r])
		{
			arr[k]=left[l];
			l++;
		}
		else
		{
			arr[k]=right[r];
			r++;
		}
		k++;
	}
	while(l<len_left)
	{
		arr[k]=left[l];
		l++;
		k++;
	}
	while(r<len_right)
	{
		arr[k]=right[r];
		r++;
		k++;
	}
		
}

int merge_sort(int arr[],int n)
{
	if(n<2)
		return;
	int l,r,i,k=0;
	l=n/2;
	r=n-l;
	int left[l],right[r];
	for(i=0;i<l;i++)
	{
		left[i]=arr[k];
		k++;
	}
	for(i=0;i<r;i++)
	{
		right[i]=arr[k];
		k++;
	}
	merge_sort(left,l);
	merge_sort(right,r);
	merge(left,right,arr,l,r);
}

int main()
{
	int n,i;
	printf("Enter size\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter values\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("The unsorted array is:\n");
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	merge_sort(arr,n);
	printf("\nThe sorted array is:\n");
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
}
