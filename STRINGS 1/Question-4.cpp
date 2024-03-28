# include <iostream>
# include <algorithm>

using namespace std;

int main(){

    string str;
    cin>>str;
    int n=str.size()/2;
    reverse(str.begin()+n,str.end());
    cout<<str;
    return 0;
}