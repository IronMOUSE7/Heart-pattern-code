#include<iostream>
using namespace std;

int main(){
	int n,i;
	cout<<"Enter the number of rows you want in the pattern : ";
	cin>>n;
	
	//top
	for(i=0;i<n;i++){
		for(int j=0;j<n-i;j++){
			cout<<"  ";
		}
		for(int k=0;k<2*i+1;k++){
			cout<<"* ";     
		}
		for(int f=0;f<2*(n-i-1);f++){
			cout<<"  ";
		}
		for(int m=0;m<2*i+1;m++){
			cout<<"* ";
		}
		cout<<endl;
	}
	int n1=2*i-1;
	//bottom
	for(i=n1;i>0;i--){
		for(int j=0;j<n1-i+1;j++){
			cout<<"  ";
		}
		for(int f=2	;f<2*(i+1);f++){
			cout<<"* ";
		}
		cout<<endl;
	}
	
	

	return 0;
}
