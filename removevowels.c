#include<stdio.h>
#define size 30

// A computer program receives a word from user, removes vowels except the first one, and saves in another string. Saved string is displayed.

int main(){
	
	char word[size];
	char array[size];
	char move[size];
	int b=0,count=0,count1=0,b2=1;
	printf("Enter a word:");
	scanf("%s",word);
	
	int l=strlen(word);
	int i,j,k;
	for(i=0;i<l;i++){
		
		if(word[i]=='a' || word[i]=='e' || word[i]=='i' || word[i]=='o' || word[i]=='u' || word[i]=='A' || word[i]=='E' || word[i]=='I' || word[i]=='O' || word[i]=='U'){
			array[b]=word[i];
			b++;
			count++;
		}
		else{
			word[b2]=word[i];
			count1++;
			b2++;
		
		}
	}
	for(j=0;j<count;j++){
		printf("%c",array[j]);
	}
	printf("\n");
	for(j=0;j<=count1;j++){
		printf("%c",word[j]);
	}
	
	
	
	return 0;
}

