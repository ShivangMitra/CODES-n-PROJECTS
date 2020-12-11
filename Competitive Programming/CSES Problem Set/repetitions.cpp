#include<iostream>
#include<string.h>
using namespace std;

int main(){
    string s;
    int max = 0; 
    while(cin >> s){
        char ch = s.at(0);
        int tmax = 1;
        for(int i=1;i<s.length();i++)
        {
            if(ch == s.at(i))
            {
                tmax++;
            }
            else
            {
                ch = s.at(i);
                if(max<tmax)
                {
                    max = tmax;
                }
                tmax = 1;
            }   
        }
        if(max < tmax)
        {
            max = tmax;
        }
        cout<<max;
    }
}