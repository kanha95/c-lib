#include<stdio.h>
#include<string.h>
#include<bits/stdc++.h>

using namespace std;

int main(){

string s;
getline(cin,s);

int n=s.length();
char c[n+1];

strcpy(c,s.c_str());

char *p;

p=strtok(c," ");

while(p!=NULL){

printf("%s\n",p);
p=strtok(NULL," ");

}


return 0;

}

/*
Reading a string and then dividing it into tokens.
https://www.geeksforgeeks.org/convert-string-char-array-cpp/
http://www.cplusplus.com/reference/cstring/strcpy/
Input: hi bye hello
Output:
hi
bye
hello
*/
