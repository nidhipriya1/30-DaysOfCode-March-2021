#include<iostream>
using namespace std;
sumofdigits(int n)
{
	if(n==0)
	return 0;
	return(n%10+sumofdigits(n/10));
}
int main()
{
	int n,sum;
	cout<<"enter no ";
	cin>>n;
	sum=sumofdigits(n);
	cout << "Sum of digits is " <<sum << endl; 
    
	return 0;
	
}
