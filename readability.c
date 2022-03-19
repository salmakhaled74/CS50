#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
int main(void){
	string s = get_string("text: ");
	int cnt1=0, cnt2=0, cnt3=0, cnt4=0;
	for(int i=0; i<strlen(s); i++){
		if(s[i] == '.' || s[i] == '?' 
		|| s[i] == '!'){
			cnt1++;
		}
	}
	for(int i=0; i<strlen(s); i++){
		if(s[i] >= 'A' && s[i] <= 'Z'){
			cnt2++;
		}else if(s[i] >= 'a' && s[i] <= 'z'){
			cnt3++;
		}
	}
	for(int i=0; i<strlen(s); i++){
		if(s[i] == ' '){
			cnt4++;
		}
	}
	int letters = cnt2+cnt3;
	int words = cnt4+1;
	int sentences = cnt1;
	float l =  (float) letters / words * 100;
	float m = (float) sentences / words *100;
	int index = round (0.0588 * l - 0.296 * m - 15.8);
	if(index < 1){
		printf ("Before Grade 1\n");
	}else if(index >= 16){
		printf ("Grade 16+\n");
	}else{
		printf("Grade %d\n", index);
	}
    return 0;
}
