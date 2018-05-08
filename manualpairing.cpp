
#include<bits/stdc++.h>

using namespace std;

class pp{

public: int x1,y1;

public: pp(int x,int y){
x1=x;
y1=y;
}

};



int main(){


vector <pp> vv;

for(int i=0;i<4;i++){
pp obj(i,i+2);

vv.push_back(obj);

}

for(int i=0;i<vv.size();i++){
cout<<vv.at(i).x1<<" "<<vv.at(i).y1<<endl;
}

for(vector<pp>::iterator i=vv.begin();i!=vv.end();i++){
cout<<i->x1<<" "<< (*i).y1<<endl;
}



return 0;
}
