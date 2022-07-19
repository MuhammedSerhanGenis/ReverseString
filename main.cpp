#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

void reverseString(string s1);

int main(){
	
	string string1;
	
	cout <<"Enter the string to be reversed::"<<endl;
	getline(cin,string1);
	
	reverseString(string1);

	
return 0;
	
}


void reverseString(string string1){
	
	int length= string1.length();
	int n=length-1;
	int i=0;
	char temp;
	
	while (i<=n){
		temp=string1[i];
		string1[i]=string1[n];
		string1[n]=temp;
		n--;
		i++;		
		
	}
	cout<<endl;
	cout<<"Reversed string is:"<<endl;
	cout<<string1;
	
}
