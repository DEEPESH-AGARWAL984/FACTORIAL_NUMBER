//WAP TO FIND THE FACTORIAL OF A NUMBER (USER INPUT)

#include<iostream>
using namespace std;

int fact(int n){
	if(n==1){
		return 1;
	}
	else{
		return (n*fact(n-1));
	}
}
int main(){
	int n;
	cout<<"Enter the number: ";
	cin>>n;
	
	cout<<"The factorial of entered number is: "<<fact(n);
}
