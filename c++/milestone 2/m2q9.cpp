#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter no. to print its table";
cin>>n;
for(int i=1;i<11;i++){
cout<< n <<" X "<< i << " = " << n*i<<endl;
}
return 0;
}