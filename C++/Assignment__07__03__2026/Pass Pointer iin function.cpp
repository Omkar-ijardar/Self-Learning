#include<iostream>
using namespace std;
int sum(int* p, int* q){
	*p=*p+*q;
	return *p;
}
int main(){
	int a,b;
	cout<<"enter value of a and b is : "<<endl;
	cin>>a>>b;
	int ans =sum(&a,&b);
	cout<<"After performing passing pointer in function, the value be : "<<ans<<endl;
	cout<<"After performing pass by reference,the value of a: "<<a<<" and b: "<<b<<endl;
	return 0;
	
}
