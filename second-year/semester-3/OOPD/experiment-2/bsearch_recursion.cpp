//binary search
#include<iostream>
using namespace std;

int bsearch(int arr[],int low,int high,int item)
{
	if(high>=low)
	{
	int mid=(low+high)/2;
	if(arr[mid]==item)
		return(mid);
	else if(arr[mid]>item)
		return(bsearch(arr,low,mid-1,item));
	else
		return(bsearch(arr,mid+1,high,item));		
	}
	else
		return(-1);
}

int main()
{
	int n,ans,item;
	cout<<"Enter size\n";
	cin>>n;
	int arr[n];
	cout<<"Enter values in ascending order\n";
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cout<<"Enter the item to be searched\n";
	cin>>item;
	ans=bsearch(arr,0,n-1,item);
	if(ans!=-1)
		cout<<"The item "<<item<<" is present at location: "<<ans+1;
	else
		cout<<"Element not found";
}
