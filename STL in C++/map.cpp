#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string,int> m;
    //insert
    m.insert({"DAV",20});
    m.insert({"CSS", 19});
    m.insert({"SEPM", 17});
    m.insert({"ML", 14});
    m.insert({"DC", 20});
    cout<<m.size()<<endl;
    //traverse
    for(auto x: m){
        cout<<x.first<<" "<<x.second<<endl;
    }
    //Accessing Elements
    cout<<m["DAV"]<<endl;
    cout<<m["CSS"]<<endl;
    cout<<m["OS"]; // if key doesn't exists , it will create key with value 0
    //finding
    if(m.find("OS")!= m.end()){
        cout<<"key exists";
    }
    //erasing 
    m.erase("OS");
    //clear map
    m.clear();

}