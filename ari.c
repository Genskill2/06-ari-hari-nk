#include<stdio.h>
#include<cs50.h>
#include<ctype.h>
#include<string.h>
#include<math.h>

string ari(string s){
	int characters=0;
	int words=0;
	int sentences=0;

	for(int i=0;i<strlen(s);i++){
		if(isalnum(s[i])){
			characters++;
		}
		else if(isspace(s[i])){
			words++;
		}
		else if(s[i]=='.' || s[i]=='?' || s[i]=='!'){
			sentences++;
		}

	}
	string gradlev[]={"Kindergarten","First/Second Grade",
"Third Grade","Fourth Grade","Fifth Grade","Sixth Grade",
"Seventh Grade","Eighth Grade","Ninth Grade","Tenth Grade",
"Eleventh Grade","Twelfth grade","College student","Professor"} ;

float ari=4.71 * characters/words+ 0.5*words/sentences - 21.43;
int index=(int) ceil(ari) ;

return gradlev[index-1] ;
}
