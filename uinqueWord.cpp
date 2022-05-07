#include<bits/stdc++.h> 
using namespace std; 
  
int main() 
{  
    string s;
    string file_name="test.txt";
    map<string,int> m;
    ofstream ofs(file_name); 
    ofs<<"I code in C++ . He also codes in C++ . But she codes in java ."; 
    ofs.close(); 
    
    fstream fs(file_name);    
    while(fs>>s)
        if(!m.count(s))
            m.insert(make_pair(s,1));
        else
            m[s]++;
    fs.close(); 
  
    m.erase("."); 
    map<string,int>::iterator i;
    for(i=m.begin();i!=m.end();i++) 
        if (i->second==1)
            cout<<i->first<<endl;
    return 0; 
}
