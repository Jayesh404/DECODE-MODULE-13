# include <iostream>
# include <string>
# include <algorithm>
using namespace std;

int main(){

    string s1;
    cin>>s1;
    string s2=s1;
    reverse(s1.begin(),s1.end());
    s2+=s1;
    cout<<s2;

    return 0;
}