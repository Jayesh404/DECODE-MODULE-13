# include <iostream>
# include <string>
# include <algorithm>
# include <vector>
# include <sstream>
using namespace std;

int main(){

    string s1="123456789";
    int max=s1[0];
    int smax=s1[0];
    for(int i=0;i<s1.size();i++){
        int y=s1[i];
        if(max<y){
            smax=max;
            max=y;
        }
    }
    cout<<smax-48;

    return 0;
}