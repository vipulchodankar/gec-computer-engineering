#include<iostream>
using namespace std;
int rbsearchs(int a[],int low,int high,int item)
{
	int i,ch,mid;
	mid=(low+high)/2;
	if(a[mid]==item)
		return mid;	
		
	else{
		cout<<"element is not found at  "<<mid+1<<"\n";
	if (item>a[mid])
		rbsearchs(a,mid+1,high,item);
		
	else if (item<a[mid])
		rbsearchs(a,low,mid-1,item);
		
	else
		return -1;
}
}
int main()
{
	int n,item,m,o;
	cout<<"enter the no of elements\n";
	cin>>n;
	int a[n];
	cout<<"enter the elements";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"enter the element to be searched\n";
	cin>>item;
	cout<<"enter the range of values to which it has to be searched:-\n";
	cin>>m>>o;
	 int k=rbsearchs(a,m-1,o-1,item);
	 if(k!=-1)
	 cout<<"the element is found at "<<k+1<<" location.";
	 else
	 cout<<"the element is not found";
	
}
