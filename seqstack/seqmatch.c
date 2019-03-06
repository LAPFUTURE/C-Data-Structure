#include "seqstack.h";
int match(char c[]){
	int i = 0;
	sequence_stack s;
	init(&s);
	while(c[i] != '#'){
		
		switch(c[i]){
			case '{':push(&s,c[i]);break;
			case '[':push(&s,c[i]);break;
			case '(':push(&s,c[i]);break;
			case '}':
				if(!empty(s) && read(s) == '{'){
//					printf("}");
					pop(&s);
					break;
				}else{
					return 0;
				}
			case ']':
				if(!empty(s) && read(s) == '['){
//					printf("]");
					pop(&s);
					break;
				}else{
					return 0;
				}
			case ')':
				if(!empty(s) && read(s) == '('){
//					printf(")");
					pop(&s);
					break;
				}else{
					return 0;
				}
		}
		i++;
	}
	return (empty(s));
}

int main(){
//	char test[7] = {'{','(','[',']',')','}','#'};
	char test[10] = "{([])}#";//ASCÂë£¬Êý×Ö×ª×Ö·û 
	int result = match(test);
	printf("%5d",result);
}

