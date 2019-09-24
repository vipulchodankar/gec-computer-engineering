//min element in an array
#include<iostream>
using namespace std;

int mini(int arr[],int n,int small)
{
	if(n==-1)
		return(small);
	else if(arr[small]>=arr[n])
		mini(arr,n-1,n);
	else
		mini(arr,n-1,small);	
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
	ans=mini(arr,n-1,0);
	cout<<"The smallest element of the array is: "<<arr[ans];
}
