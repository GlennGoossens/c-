#include <iostream>
#include "container.h"
#include <stack>
#include <iterator>
using namespace std;

void vul_in_zoveelste_map_beeld_van_sleutel_aan_met_set_van_drie(vector <map<string,stack<set<string> > > > & v,int index,string sleutel,string s1,string s2,string s3){
  set<string> stringSet;
  stringSet.insert(s1);
  stringSet.insert(s2);
  stringSet.insert(s3);
  stack<set<string> > setStack;
  setStack.push(stringSet);
  map<string,stack<set<string> > > stackMap;
  stackMap[sleutel] = setStack;
  v[index] = stackMap;
}

bool zoveelste_map_beeldt_woord_af_op_stack_waarvan_bovenste_dit_element_bevat(vector <map<string,stack<set<string> > > > & v,int index,string woord,string element){
map<string,stack<set<string> > > map = v[index];
stack<set<string> > stack;
set<string> set;
//iterator
map<string,stack<set<string> > >::iterator it = map.begin();
while(it != map.end()){
  if(it->first == "woord"){
    stack = it->second;
  }
  it++;
}
if(!stack.empty()){
  set = stack.top();
  if(set.find(element) != set.end()){
    return true;
  }else{
    return false;
  }
  }
}

int main(){
  vector<map<string,stack<set<string> > > > v(5);
  vul_in_zoveelste_map_beeld_van_sleutel_aan_met_set_van_drie(v,0,"noot","do","re","mi");

  return 0;
}
