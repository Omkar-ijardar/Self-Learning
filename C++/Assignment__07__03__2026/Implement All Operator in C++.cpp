#include<iostream>
using namespace std;

int main(){
	cout<<"\t\t\t  Implement All Operator  \t\t\t\n"<<endl;
	
	cout<<"=====================================================================================================";
	cout<<"\n Logical Operator :---->>"<<endl;
	int age,marks;
	cin>>age>>marks;
	if((age>=18&&marks>=50)||!(age<18&&marks<50))
	cout<<"Eligible";
	else
	cout<<"NotEligible";
	cout<<endl;
	cout<<"====================================================================================================="<<endl;
	
	
	
	
	cout<<" Unary Operator :---->>"<<endl;
	int a,b;
	cout<<"Enter value of a and b: "<<endl;
	cin>>a>>b;
	++a;
	b--;
	cout<<"After incrementing the value of a and b are: "<<endl;
	cout<<"b: "<<b;
	cout<<endl;
	cout<<"====================================================================================================="<<endl;
	
	
	
	cout<<" Ternary Operator :---->>"<<endl;
	cout<<"enter value of a and b: "<<endl;
	cin>>a>>b;
	int ans=(a>b)?a:b;
	cout<<ans<<" is greater";
	cout<<endl;
	cout<<"====================================================================================================="<<endl;
	
	
	
	cout<<" Assignment Operator :---->>";
	cout<<"The value of a and b is : "<<endl;
	cin>>a>>b;
	a+=b;
	cout<<"After performing Addition: "<<a<<endl;
	a-=b;
	cout<<"After performing subtraction: "<<a<<endl;
	a*=b;
	cout<<"After performing multiplication: "<<a<<endl;
	a/=b;
	cout<<"After performing division operation: "<<a<<endl;
	a%=b;
	cout<<"After performing Modulus Operation : "<<a;
	cout<<endl;
	cout<<"=====================================================================================================";
	
	
	return 0;
}
