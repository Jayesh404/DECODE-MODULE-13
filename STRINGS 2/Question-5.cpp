# include <iostream>
# include <string>
# include <algorithm>
# include <vector>
# include <sstream>
using namespace std;

int main(){

    string s="decode dsa with pw";
    stringstream ss(s);
    string temp;
    vector<string> v;
    while(ss>>temp){
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    cout<<v[v.size()-1];

    return 0;
}