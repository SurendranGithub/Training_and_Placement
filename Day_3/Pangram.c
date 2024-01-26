#include <stdbool.h>
#include <stdio.h> 
#include <string.h> 

bool checkPangram(char str[]) 
{ 
	bool mark[26]; 
	int index;
	for(int i=0;i<26;i++)
	{
		mark[i]=false; 
	}
	size_t size=strlen(str); 
	for(int i=0;i<size;i++) 
	{ 
		if('A'<=str[i]&&str[i]<='Z')
		{	
			index=str[i]-'A';
		}
		else if('a'<=str[i]&&str[i]<='z') 
		{
			index=str[i]-'a';
		}
		else
		{	
			continue; 
		}
		mark[index] = true; 
	} 
	for(int i=0;i<=25;i++) 
	{
		if (mark[i]==false) 
		{
			return false; 
		}
	}
	return true; 
} 

int main() 
{ 
	char str[] ="The quick brown fox jumps over the lazy dog"; 
	if(checkPangram(str)==true) 
	{
		printf("%s\nPangram", str); 
	}
	else
	{
		printf("%s\nNot a pangram", str); 
	}
	return 0; 
} 



/* Output:
----------------------
The quick brown fox jumps over the lazy dog
Pangram
*/