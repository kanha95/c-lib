#include<bits/stdc++.h>

using namespace std;

int main(){


int n;
cin>>n;

map <long long, priority_queue <string, vector<string>, greater<string> > > hm;

for(int i=0;i<n;i++){

string s;
cin>>s;

long pr;
cin>>pr;

hm[pr].push(s);


}



for(int i=0;i<n;i++){

if(i%2==1) cout<<"-";

if(i%2==0){
string s;
s=(hm.begin()-> second).top();
(hm.begin()-> second).pop();
cout<<s;
if((hm.begin()-> second).empty()){
hm.erase((*hm.begin()).first);
}

}

else{

string s;
s=(hm.rbegin()-> second).top();
(hm.rbegin()-> second).pop();
cout<<s;
if(i!=n-1) cout<<"-";

if((hm.rbegin()-> second).empty()){
hm.erase((*hm.rbegin()).first);
}

}

}

return 0;

}
