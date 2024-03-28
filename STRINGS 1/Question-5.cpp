# include <iostream>
# include <algorithm>

using namespace std;

int main(){

    string str;
    cin>>str;
    int x=0;
    for(int i=0;str[i]!='\0';i++){
        int y=(int)(str[i])-48;
        x=x*10+y;
    }
    cout<<x;
    
    return 0;
}