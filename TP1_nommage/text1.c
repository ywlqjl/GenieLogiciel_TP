#include <stdio.h>
#include<stdlib.h>
#include<string.h>
char digitToChar ( long N);
void digitTo36 ( long N);
char str4[100];
char str5[100];
char digitToChar ( long n)
{
	if (n >= 10)
	  return 'A' + (n - 10);
	else
	  return n + '0';
}

void digitTo36 ( long N)
{
	char  ch;
	long digit;
	int i=0;
	while(N % 36)
	{
		digit =N %36;
		ch = digitToChar (digit);
		str4[i] = ch;
		i++;
		N=N/36;
	}
    int j=0 ,k=0 ;
	for( j=i-1,k=0;j>=0;j--,k++)
	{
		str5[k]=str4[j];

	}

	char *dest_str;
    dest_str = (char *)malloc(sizeof(char) * (sizeof(str5) + 1));
    strncpy(dest_str, str5, sizeof(str5));
	puts(dest_str);


}
int main ()
{
	long N;
	scanf ("%d", &N);
	digitTo36(N);
	return 0;

}
