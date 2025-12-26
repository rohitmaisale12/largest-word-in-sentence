//find largest word in a sentence//
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	int currentlen = 0;
	int maxlen = 0;
	int i = 0;
	int endindex = i - 1;
	printf("enter the string:");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';
	while (str[i] != '\0') {
		if (str[i] != ' ') {
			currentlen++;
		}
		else {
			if (currentlen > maxlen) {
				maxlen = currentlen;
				endindex = i - 1;
			}
			currentlen = 0;
		}
		i++;
	}
	if (currentlen > maxlen) {
		maxlen = currentlen;
		endindex = i - 1;
	}
	printf("largest word is:");
	for (int j = endindex - maxlen + 1;j <= endindex;j++) {
		printf("%c", str[j]);
	}
	return 0;
}
