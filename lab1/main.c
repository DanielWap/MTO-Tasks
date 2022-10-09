#include <stdio.h>
#include <string.h>

int my_printf(char *format_string, char *param){
	for(int i=0;i<=strlen(format_string);i++){
		int ascii;
		if((format_string[i] >= 'A') && (format_string[i+1] <= 'Z')){
			ascii = format_string[i]+32;
			format_string[i]=(char)ascii;
			putchar(format_string[i]);
		}
		else if((format_string[i] >= 'a') && (format_string[i+1] <= 'z')){
			ascii = format_string[i]-32;
			format_string[i]=(char)ascii;
			putchar(format_string[i]);
		}
		else
			putchar((format_string[i]);

	}
	puts("");
}

int main(int argc, char *argv[]){
	char buf[1024],buf2[1024];
	while(fgets(buf, sizeof buf, stdin)){
		fgets(buf2, sizeof buf2, stdin);
		my_printf(buf,buf2);
	}
	return 0;
}
