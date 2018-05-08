
#include<bits/stdc++.h>

using namespace std;



int main(){


vector < pair<int,int> > vv;

for(int i=0;i<4;i++){

vv.push_back(make_pair(i,i+2));

}

for(int i=0;i<vv.size();i++){
cout<<vv.at(i).first<<" "<<vv.at(i).second<<endl;
}

for(vector < pair<int,int> >::iterator i=vv.begin();i!=vv.end();i++){
cout<<i->first<<" "<< (*i).second<<endl;
}



return 0;
}
