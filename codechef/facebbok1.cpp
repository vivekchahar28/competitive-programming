#include<bits/stdc++.h>
using namespace std;
#define L long long

L convert(vector<L> v)
{
    L temporay_var = 0;
    for(L i = 0 ; i<v.size(); i++)
    {
        temporay_var = temporay_var*10 + v[i];
    }
    return temporay_var;
}
 main()
{
    L t;
    cin>>t;


    for(L i = 1; i<= t ; i++)
    {
        L n;
        cin>>n;

        if(n / 10 == 0)
        {   cout<<"Case #"<<i<<": "<<n<<" "<<n<<endl;;
            continue;
        }
        vector<L> v;
        L temporay_var = n;
        L nz = 0;
        while(temporay_var)
        {
            v.push_back(temporay_var%10);
            if(temporay_var%10 > 0)
                nz++;
            temporay_var = temporay_var/10;
        }
        reverse(v.begin(),v.end());

        if(nz == 1)
        {
           cout<<"Case #"<<i<<": "<<n<<" "<<n<<endl;
            continue;
        }
        L lower_number = n;
        L upper_number = n;
        for(L j = 0 ; j < v.size() ; j++)
            for(L k = 0 ; k < v.size(); k++ )
            {   if(j == k)
                    continue;

                swap(v[j],v[k]);
                if(v[0] == 0)
                {
                    swap(v[j],v[k]);
                    continue;
                }
                temporay_var = convert(v);
                lower_number = min(temporay_var,lower_number);
                upper_number = max(temporay_var,upper_number);
                swap(v[j],v[k]);
            }
    cout<<"Case #"<<i<<": "<<lower_number<<" "<<upper_number<<endl;
    }
    return 0;
}
