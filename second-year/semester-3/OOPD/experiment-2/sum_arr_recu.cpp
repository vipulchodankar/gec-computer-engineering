 //sum of all elements of an array
 #include<iostream>
 using namespace std;
 
 
 int sum_array(int arr[],int n)
 {
 	if(n==1)
 		return(arr[n-1]);
	else
		return(arr[n-1]+sum_array(arr,n-1));	
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
	ans=sum_array(arr,n);
	cout<<"The sum of elements of the array is: "<<ans;
 }
