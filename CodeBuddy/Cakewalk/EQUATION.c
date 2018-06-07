#include <stdio.h>
#include <string.h>

int main()
{
	int t, i;
    scanf("%d", &t);
    while(t--)
    {
    	char as[10], bs[10], cs[10];
    	scanf("%s + %s = %s", as, bs, cs);
    	if(as[0] == '?')
    	{
    		char* eptr;
    		long long int a = strtoll(cs, eptr, 10) - strtoll(bs, eptr, 10);
    		printf("%lld\n", a);
    	}
    	else if(bs[0] == '?')
    	{
    		char* eptr;
    		long long int b = strtoll(cs, eptr, 10) - strtoll(as, eptr, 10);
    		printf("%lld\n", b);
    	}
    	else if(cs[0] == '?')
    	{
    		char* eptr;
    		long long int c = strtoll(as, eptr, 10) + strtoll(bs, eptr, 10);
    		printf("%lld\n", c);
    	}
    }
    return 0;
}