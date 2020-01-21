#include<iostream>
#include<vector>
#include<list>
#include<algorithm>
using namespace std;
int main(){
	int i;
	list<int> arr;
	list<int>  lst;
	for(i=0;i<10;i++){
		if(i%2==0){
			arr.push_back(i);
		}
		else{
			lst.push_back(i);
		}
	}
//	showlist(arr);
	int x;
	while(arr.size()>0){
		x=arr.pop_front();
		cout<<x;
	}
//	vector<int> vct;
//	merge(arr.begin(),arr.end(),lst.begin(),lst.end(),vct.begin());	
//	for(i=0;i<arr.size();i++){
//		cout<<arr<<",";
//	}

	
}
