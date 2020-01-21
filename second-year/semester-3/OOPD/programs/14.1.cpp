#include<iostream> 
#include <vector>
#include <algorithm>
using namespace std; 
void display(vector<int> &v)
{
    for (int i=0; i<v.size(); i++) 
        cout<< v[i]<<"\t";
        cout<<endl;
}
int main()
{
    int i;
    vector<int> v(10);
    cout<<"Original Vector:\n";
    display(v);
    v[0]=0;
    cout<<"Vector after setting first element to 0:\n";
    display(v);
    v[9]=9;
    cout<<"Vector after setting last element to 9:\n";
    display(v);
    for(i=1;i<9;i++)
        v[i]=1;
    cout<<"Vector after setting all other element to 1:\n";
    display(v);
    
}
