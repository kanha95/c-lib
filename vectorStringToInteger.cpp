#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<iostream>
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


vector <int> vv;


while(p!=NULL){

vv.push_back(atoi(p));

p=strtok(NULL," ");

}

int ar[vv.size()];
for(int i=0;i!=vv.size();i++){
ar[i]=vv.at(i);
}

for(int i=0;i<(sizeof(ar)/sizeof(*ar));i++){
cout<<ar[i]<<endl;
}


return 0;
}
