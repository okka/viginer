#include<stdio.h>
#include<stdlib.h>

int main()
{
	char plain [1000];
	char key   [10];
	char cipher[1000];
	
	int i,j,k;
	int n,m;
	
	printf("enter ur plain text: (don't use '.' only u'r finished ur text)\n");
	scanf("%c",&plain[0]);
	i=0;
	while(plain[i]!='.')
	{
		i++;
		scanf("%c",&plain[i]);
	}
	n=i;
	
	printf("enter ur the key: (don't use '.' only u'r finished ur text)\n");
	scanf("%c",&key[0]);
	i=0;
	while(key[i]!='.')
	{
		i++;
		scanf("%c",&key[i]);
	}
	m=i;
	
	
	for(i=0; i<n; i++){
		while(j<m){
			cipher[i]= (char)(((((int)(plain[i])-97)+ ((int)(key[j]))-97)%26)+97);
			j++;
		}
		j=0;		
	}

	for(i=0; i<n; i++){
		printf("%c", cipher[i]);
	}
	printf("\n");
	getch();
}
