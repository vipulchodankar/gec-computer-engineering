//quick sort using recursion 
#include<iostream>
#include<string.h>
using namespace std;

int partition(int *arr,int start,int end)
{
	int pivot=arr[end];
	int pindex=start;
	for(int i=start;i<end;i++)
	{
		if(arr[i]<pivot)
		{
			swap(arr[i],arr[pindex]);
			pindex++;	
		}
	}
	swap(arr[end],arr[pindex]);
	return(pindex);
}

void quick_sort(int *arr,int start,int end)
{
	if(start<end)
	{
		int pindex=partition(arr,start,end); 
		quick_sort(arr,start,pindex-1);
		quick_sort(arr,pindex+1,end);
	}
}

int main()
{
	int n,ans;
	cout<<"Enter size of array\n";
	cin>>n;
	int arr[n];
	cout<<"Enter elements\n";
	for(int i=0;i<n;i++)
		cin>>arr[i];
	quick_sort(arr,0,n-1);
	cout<<"The quick sorted array is:\n";
	for(int j=0;j<n;j++)
		cout<<arr[j]<<" ";
}
