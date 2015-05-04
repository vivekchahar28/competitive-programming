#include<bits/stdc++.h>
using namespace std;
#define L long long
L numb;
L v[100002];
L pre[100003];

struct node
{
    L element;
    L value;
    L countarr[3];
    L add;
    node()
    {
        element = value = add = 0;
        countarr[0] = countarr[1] = countarr[2] = 0;
    }

    node(L x, L y, L a[])
    {   add = 0;
        element = x;
        value = y;
        countarr[0] = a[0];
        countarr[1] = a[1];
        countarr[2] = a[2];
    }

}tree[1000000];

void input()
{
    getchar();
    for(L i = 0 ; i<numb ; i++)
    {
        L x = getchar()-'0';
        v[i]=(x%3);
        pre[i] = (i == 0) ? v[0] : (pre[i-1]+v[i])%3;
    }
/*    for(L i = 0 ; i<n ; i++)
        cout<<v[i]<<" ";
    cout<<endl;
    for(L i = 0 ; i<n ; i++)
        cout<<pre[i]<<" ";
    cout<<endl;
*/
}

node combine(node x, node y)
{
    node temp;
    temp.countarr[0] = x.countarr[0]+y.countarr[0];
    temp.countarr[1] = x.countarr[1]+y.countarr[1];
    temp.countarr[2] = x.countarr[2]+y.countarr[2];
    return temp;
}

node construct(L ss, L se, L idx)
{
    if(ss == se)
    {   L temparr[] = {0,0,0};
        temparr[pre[ss]]++;
        node temp(v[ss],pre[ss],temparr);
        tree[idx] = temp;
        return tree[idx];
    }

    L mid = (ss+se)/2;

    construct(ss,mid,2*idx+1);
    construct(mid+1,se,2*idx+2);

    tree[idx] = combine(tree[2*idx+1],tree[2*idx+2]);
    return tree[idx];
}

node adjust(L idx, L num,L ss,L se)
{
    L temp[3];
    for(L i = 0 ; i<3; i++)temp[i] = tree[idx].countarr[i];

    L x = (tree[idx].add+num)%3;
    if(x == 1)
    {
        tree[idx].countarr[1] = temp[0];
        tree[idx].countarr[2] = temp[1];
        tree[idx].countarr[0] = temp[2];
    }
    else if(x == 2)
    {
        tree[idx].countarr[2] = temp[0];
        tree[idx].countarr[1] = temp[2];
        tree[idx].countarr[0] = temp[1];
    }
	if(ss!=se){
    tree[2*idx+1].add = ( tree[2*idx+1].add + x )%3;
    tree[2*idx+2].add = ( tree[2*idx+2].add + x )%3;
	}
	tree[idx].add = 0;

}



void update(L l, L r, L ss, L se, L idx, L num)
{
	 if(tree[idx].add>0)
    {
        adjust(idx,0,ss,se);
    }
    if(ss > r || se < l)
        return;

    if(ss >= l && se <= r)
    {
        adjust(idx,num,ss,se);
        return;
    }

    L mid = (ss+se)/2;

    update(l,r,ss,mid,2*idx+1,num);
    update(l,r,mid+1,se,2*idx+2,num);

    tree[idx] = combine(tree[2*idx+1],tree[2*idx+2]);

}


vector<L> query(L l, L r, L ss, L se, L idx)
{   vector<L> rv(3,0);

    if(tree[idx].add>0)
    {
        adjust(idx,0,ss,se);
    }

    if(ss > r || se < l)
    {   //cout<<"WAPAS\n";
        return rv;
    }

    if(ss >= l && se <= r)
    {
        if(tree[idx].add > 0)
        {  // cout<<"ADJUST IA HAI "<<tree[idx].add<<endl;
            adjust(idx,0,ss,se);
        }
        rv[0] = tree[idx].countarr[0];
        rv[1] = tree[idx].countarr[1];
        rv[2] = tree[idx].countarr[2];
        //cout<<"PURA MILA  "<<rv[0]<<" "<<rv[1]<<" "<<rv[2]<<endl;
        return rv;
    }
    //cout<<"BAHAR  ";
    L mid = (ss+se)/2;

    vector<L> two(3,0);

    if(se <= mid)
    {   rv = query(l,r,ss,mid,2*idx+1);
        //cout<<endl<<rv[0]<<" "<<rv[1]<<" "<<rv[2]<<endl;
        return rv;
    }
    if(ss > mid)
    {   rv = query(l,r,mid+1,se,2*idx+2);
        //cout<<endl<<rv[0]<<" "<<rv[1]<<" "<<rv[2]<<endl;
        return rv;
    }

    rv = query(l,r,ss,mid,2*idx+1);
    two = query(l,r,mid+1,se,2*idx+2);

    rv[0] += two[0];
    rv[1] += two[1];
    rv[2] += two[2];
    //cout<<one[0]<<" "<<one[1]<<" "<<one[2]<<endl;
    return rv;
}

 main()
{
    L queries;
    cin>>numb>>queries;
    input();
    construct(0,numb-1,0);
    while(queries--)
    {
        L type,l,r;
        cin>>type>>l>>r;
        if(type == 1)
        {
            r = r%3;
            L temp = (3+r-v[l-1])%3;
            v[l-1] = r;
            update(l-1,numb-1,0,numb-1,0,temp);
        }
        else
        {
            vector<L> rv = query(l-1,r-1, 0,numb-1,0);
            long long value = 0;

            L ac = v[l-1];
            vector<L> vv(3) ;
            vv=query(l-1,r-1,0,numb-1,0);
            L ay;
            if(vv[0] == 1) ay = 0;
            else if(vv[1] == 1) ay = 1;
            else ay = 2;
            L diff = ac-ay;
            L temp[3] = {0};
            if(diff > 0)
            {
                temp[(0+diff)%3] = rv[0];
                temp[(1+diff)%3] = rv[1];
                temp[(2+diff)%3] = rv[2];
                copy(temp,temp+3,rv.begin());

            }
            else if(diff < 0)
            {   diff = abs(diff);
                temp[0] = rv[(0+diff)%3];
                temp[1] = rv[(1+diff)%3];
                temp[2] = rv[(2+diff)%3];
                copy(temp,temp+3,rv.begin());
            }

            rv[0]++;
            //cout<<endl<<rv[0]<<" "<<rv[1]<<" "<<rv[2]<<endl;
            long long x = rv[0];
            value+=(x*(x-1))/2;
            x = rv[1];
            value+=(x*(x-1))/2;
            x = rv[2];
            value+=(x*(x-1))/2;
            printf("%lld\n",value);
        }
    }


}
