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
cout<<"Reverse of no. is ";
for(int j=0;j<i;j++){
cout<<number[j];
}
return 0;
}