#include<bits/stdc++.h>
using namespace std;

struct root
{
    int mark;
    int count;
    root *a[26];
};

void insert(root *t,string s)
{
    if(s.size()==0)
        return;
    root *temp=t;
    for(int i=0;s[i];i++)
    {
    if(temp->a[s[i]-'a']==NULL)
    {
        root *temp1=new root();
        temp1->mark=0;
        temp->a[s[i]-'a']=temp1;
    }
    temp=temp->a[s[i]-'a'];
    temp->count++;
    }
    temp->mark++;
}
pair<int,pair<int,int> > search(root *t,string s)
{
    if(s.size()==0)
        return {0,{0,0}};
    root *temp=t;
    string x;
    for(int i=0;s[i];i++)
    {
            if(temp->a[s[i]-'a'])
            {
                x+=s[i];
                temp=temp->a[s[i]-'a'];
            }
            else return {temp->mark,{i,temp->count}};
    }
    return {temp->mark,{s.size(),temp->count}};
}
int main()
{
    root *t=new root();
    t->mark=0;
    t->count=0;
    insert(t,"viveksingh");
    insert(t,"vivekchahar");
    insert(t,"vivekbabu");
    insert(t,"viveksinghchahar");
    pair<int,pair<int,int> > p=search(t,"vivek");
    cout<<p.first<<" "<<p.second.first<<" "<<p.second.second<<endl;

}




