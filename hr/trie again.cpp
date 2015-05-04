#include<bits/stdc++.h>
using namespace std;
struct node{
    int mark=0;
    int count=0;
    node *a[26];
};

void insert(node *t,string s)
{
    if(!s.size())
        return ;
        node *temp=t;
    for(int i=0;s[i];i++)
    {
        if(!temp->a[s[i]-'a'])
        {
            node *t1=new node();
            temp->a[s[i]-'a']=t1;
        }
        temp=temp->a[s[i]-'a'];
        temp->count++;
    }
    temp->mark++;
}
pair<int,pair<int,int> > search(node *t,string s)
{
    if(!s.size())
        return {0,{0,0}};
        node *temp=t;
    for(int i=0;s[i];i++)
    {
        if(temp->a[s[i]-'a'])
        {
            temp=temp->a[s[i]-'a'];
        }
        else return {temp->mark,{temp->count,i}};
    }
    return {temp->mark,{temp->count,s.size()}};
}
int main()
{
    node *t=new node();
    insert(t,"viveksingh");
    insert(t,"vivekchahar");
    insert(t,"vivekbabu");
    insert(t,"viveksinghchahar");
    pair<int,pair<int,int> > p=search(t,"viveksingh");
    cout<<p.first<<" "<<p.second.first<<" "<<p.second.second<<endl;

}
