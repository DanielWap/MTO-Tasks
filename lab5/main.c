#include <stdio.h>
#include <string.h>
#include <ctype.h>

int my_printf(char *format_string, char *param){
	for(int i=0;i<strlen(format_string);i++){
		if((format_string[i] == '#') && (format_string[i+1] == 'X' && format_string[i+2] == 'g')){
			i++;
			printf("%Xd",param);
	}
		else{
			if(format_string[i] > '0' && format_string[i] <= '9' ){
				int x = format_string[i] - 1;
				putchar((char)(x));
			}
			else if(format_string[i] == '0'){
				int x = 9;
				putchar((char)(x));
			}
			else
				putchar((format_string[i]));
		}	
	}
		puts("");
		return 0;
}

int main(int argc, char *argv[]){
	char buf[1024],buf2[1024];
	while(gets(buf)){
		gets(buf2);
		my_printf(buf,buf2);
	}
	return 0;
}
