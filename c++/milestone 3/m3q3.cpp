#include<iostream>
using namespace std;
int main(){
int n,i=0,a,temp,number[10];
cout<<"Enter no.";
cin>>n;
while(n>=1){
a=n%10;
n=n/10;
number[i]=a;
i+=1;
}
temp=number[i-1];
number[i-1]=number[0];
number[0]=temp;
for(int j=i-1;j>=0;j--){
cout<<number[j];
}
return 0;
}