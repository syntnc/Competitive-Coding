#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int t, n, h, g, dif, cur, i, j;
    scanf("%d", &t);
    for(i = 0; i < t; i++) {
    	scanf("%d %d", &n, &h);
    	for(j = 0; j < n; j++){
    		scanf("%d", &g);
    		if(j == 0){
    			dif = abs(h - g);
    		}
    		else {
	    		cur = abs(h - g);
	    		if(cur < dif) dif = cur;
    		}
    	}
    	printf("%d\n", dif);
    }
    return 0;
}