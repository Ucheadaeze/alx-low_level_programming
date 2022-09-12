#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 * Description: print
 * 
 *
 *
 */
int main()
{
	int nl = 0, n2;
	while (nl <= 9)
	{
		n2 = 0;
		while(n2 <= 9)
		{
			if (n != n2 && nl < n2)
		{
			putchar (nl + 48);
			putchar (n2 + 48);
			
			if (nl + n2 !=17)
			{
				putchar(',');
				putchar(' ');
			}
		}
	        ++n2;
                }      
                ++nl;
         }
         putchar ('\n');
         return 0;
}
