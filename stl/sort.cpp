#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
bool cmp(int a,int b){
	return a>b;
}
struct greater{
	template<class T>
	bool operator()(T const &a, T const &b) const {return a>b; }
};
int main(){
	int n=20;
	int arr[n];
	for (int i=0;i<n;i++) arr[i]=rand()%100;
	cout<<"array is\n";
	for(int i=0;i<n;i++) cout<<arr[i]<<" ";
	cout<<endl;
	cout<<"normal sorting "<<endl;
	sort(arr,arr+n);
	for(int i=0;i<n;i++) cout<<arr[i]<<" ";
	cout<<endl;
	cout<<"reverse sorting\n";
	sort(arr,arr+n,cmp);
	for(int i=0;i<n;i++) cout<<arr[i]<<" ";
	cout<<endl;

}