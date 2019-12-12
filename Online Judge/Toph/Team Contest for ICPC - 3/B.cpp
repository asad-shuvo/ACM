 #include<stdio.h> 
#include<string.h> 
#include<stdbool.h> 
#include<bits/stdc++.h>
using namespace std; 
bool isPalindrome(char *str) 
{ 
	int len = strlen(str);  
	if (len == 1) 
		return true; 
	char *ptr1 = str; 
	char *ptr2 = str+len-1; 

	while (ptr2 > ptr1) 
	{ 
		if (*ptr1 != *ptr2) 
			return false; 
		ptr1++; 
		ptr2--; 
	} 

	return true; 
} 

int noOfAppends(char s[]) 
{ 
	if (isPalindrome(s)) 
		return 0; 
	s++; 

	return 1 + noOfAppends(s); 
} 
 
int main() 
{ 
	char s[5005];
	cin>>s;
	string a="";
	for(int i=0;i<strlen(s);i++){
		a+=s[i];
	}
	int ret=noOfAppends(s);
	string b="";
for(int i=0;i<ret;i++){
	b+=a[i];
}
reverse(b.begin(),b.end());
a+=b;
cout<<a<<endl;

} 

