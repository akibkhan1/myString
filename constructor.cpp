#include<bits/stdc++.h>
using namespace std;
class myString
{
    private:
        int str_size;
        char *str;
    public:
        myString()
        {
            str_size=100;
            str= (char*)malloc(sizeof(char)*str_size);
        }
        myString(int n)
        {
            str_size=n;
            str= (char*)malloc(sizeof(char)*str_size);
        }
        bool set_str(char *_str)
        {
            int i=0,len=0;
            while(_str[i]!=NULL)
            {
                len++;
                i++;
            }
            if(len<=str_size)
            {
                str=_str;
                return true;
            }
            else
                return false;
        }
        void print()
        {
            cout<<str<<endl;
        }

};
