#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,m,c=0;
    vector<string>v1;
        vector<string>v2;

    vector<string>str;
    string tem,obj;
    cin>>n>>m;
    for ( int i=0; i<n; i++)
    {
        cin>>tem;
        str.push_back(tem);
    }
    for ( int i = 0; i<str.size(); i++)
    {
        for ( int j=i+1; j<str.size(); j++)
        {
            tem=str[j];
            reverse(tem.begin(),tem.end());
            if (str[i]==tem)
            {
                v1.push_back(str[i]);
                                v2.push_back(str[j]);

                str.erase(str.begin() + (&str[j] - &str[0]));
                break;
            }
        }
        tem=str[i];
        reverse(tem.begin(),tem.end());
        if (str[i]==tem)
            obj=str[i];
    }
    if (obj.size()>0)
    {
       c=1;
    }
    c+=v1.size() * 2;
   cout<<c*m<<endl;
    for (auto i=v1.begin(); i!=v1.end(); i++)
        cout<<*i;
    cout<<obj;
    for (auto i=v2.crbegin(); i!=v2.crend(); i++)
        cout<<*i;

    cout<<endl;



    return 0;
}
