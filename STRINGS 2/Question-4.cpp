# include <iostream>
# include <string>
# include <algorithm>
# include <vector>
# include <sstream>
using namespace std;

int main(){

    string s="car";
    string t="arc";

    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t) cout<<true;
    else cout<<false;

    return 0;
}