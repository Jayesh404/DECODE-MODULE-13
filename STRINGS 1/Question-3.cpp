# include <iostream>
# include <algorithm>

using namespace std;

int main(){

    string str;
    cin>>str;
    bool flag=true;
    int i=0;
    int j=str.size()-1;
    while(i<j){
        if(str[i]!=str[j]){
            flag=false;
            break;
        }
        i++;
        j--;
    }
    if(flag) cout<<"Palindrome";
    else cout<<"Not Palindrome";
    return 0;
}