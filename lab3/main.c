#include <stdio.h>
#include <string.h>
#include <ctype.h>

int my_printf(char *format_string, char *param){
	for(int i=0;i<strlen(format_string);i++){
		if((format_string[i] >= 'A') && (format_string[i] <= 'Z')){
			putchar((char) tolower(format_string[i]));
		}
		else if((format_string[i] >= 'a') && (format_string[i] <= 'z')){
			putchar((char) toupper(format_string[i]));
		}
		else
			putchar((format_string[i]));

	}
}

int main(int argc, char *argv[]){
	char buf[1024],buf2[1024];
	while(fgets(buf, sizeof buf, stdin)){
		fgets(buf2, sizeof buf2, stdin);
		my_printf(buf,buf2);
	}
	return 0;
}
