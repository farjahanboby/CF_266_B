#include <iostream>

using namespace std;

int main()
{
    int i,n,count1=0;
    cin>>n;
    string s;
    cin>>s;
    for(i=0;i<s.length();i++){
            //cin>>s;
        if(s[i]==s[i+1])
            count1++;
    }
    /*for(i=0;i<n;i++){
        if(s[i]==s[i+1])
            count1++;
    }*/
    cout << count1 << endl;
    return 0;
}
