void sieve_prime(void)
{
	__int64 i,j;
    for(i=3;i<L;i+=2)
	{
		if(ip[i]==0)
		{
			for(j=i*i;j<L;j+=i+i)
				ip[j]=1;
		}
	}
	p[0]=2;
    j=1;
	for(i=3;i<L;i+=2)
	{
		if(ip[i]==0)
			p[j++]=i;
	}
}