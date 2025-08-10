#include<iostream>
using namespace std;
int add(int num1,int num2);
int main(){
int s,a,b;
// Function Prototype
s=add(a,b);
cout<<s;
system("pause");
return 0;
}
// Function calling
int add(int num1,int num2 ){ // Function definition
int sum;
sum =num1+num2;
return sum;}