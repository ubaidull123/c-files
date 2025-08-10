#include<iostream>
using namespace std;
int main()
{
    int a = 2;
    for(int i=1;i<=20;i++){

    if(i%a!=0)
    continue;
    cout<<i<<endl;
    }
}