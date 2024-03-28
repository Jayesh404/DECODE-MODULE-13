# include <iostream>
# include <string>
# include <algorithm>
# include <vector>
# include <sstream>
using namespace std;

int main(){

    string s1="htygyr";
    bool flag;
    int count=0;
    for(int i=0;i<s1.size();i++){
        for(int j=i;j<s1.size();j++){
            flag=true;
            string temp=s1.substr(i,j-i+1);
            for(int k=0;k<temp.size();k++){
                if (temp[k] != 'a' && temp[k] != 'e' && temp[k] != 'i' && temp[k] != 'o' && temp[k] != 'u')
                    flag = false;
            }
            if(flag) count++;
        }
        
    }
    cout<<count;

    return 0;
}