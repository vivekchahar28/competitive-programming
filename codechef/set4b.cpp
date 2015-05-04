	int pp;
	#define MAX 1000
vector<vector<int> > PP(1000);
vector<int> P(MAX);;
void _sieve()
{

	for (i =0; i<MAX;i++)
		P[i]=0;

	for (long long k =0;k<prime.size();k++)
		{
		    j=prime[k];
            while (j<MAX)
			{
			    cout<<P[j]<<" ";
            P[j]=prime[k];
			j=j*prime[k];
			cout<<P[j];
			}
		}
	for (i =0; i<MAX;i++)
	{
	    if (P[i]!=0)
			pp=i;
			while( pp<MAX)
				{
                PP[pp].push_back(P[i]);
                cout<<PP[pp][0]<<" ";
				pp+=i;
				}
				}
}
