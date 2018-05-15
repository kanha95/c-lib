
#include<bits/stdc++.h>

using namespace std;



int main(){


int a,b;
cin>>a>>b;

int ar[a];

list <int> queue;
vector <int> ll;

for(int i=0;i<a;i++){

cin>>ar[i];
queue.push_back(i);
}

while(!queue.empty()){

int x;

x=queue.front();
queue.pop_front();
ll.push_back(x);
ar[x]=ar[x]-b;
if(ar[x]>0){

queue.push_back(x);
}

}

int c;
cin>>c;

int temp;
while(c>0){
cin>>temp;
cout<<"p"<< (ll.at(temp-1)+1)<<endl;
c--;

}


return 0;
}
