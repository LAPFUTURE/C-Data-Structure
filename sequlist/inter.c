#include "sequlist.h"

void prints(sequence_list *L){
	int i;
	for(i = 0; i < L->size; i++){
		printf("%5d",L->a[i]);
		if((i+1)%10 == 0){
			printf("\n");
		}
	}
	printf("\n");
}

void append(sequence_list *slt,datatype x){
	if(slt->size == MAXSIZE){
		print("Ë³Ðò±íÊÇÂúµÄ£¡");exit(1);
	}
	slt->a[slt->size] = x;
	slt->size = slt->size + 1;
}

void inter(sequence_list *la,sequence_list *lb,sequence_list *lc){
	int i,j;
	int laLength = la->size;
	int lbLength = lb->size;
	for(i = 0; i < laLength; i++){
		for(j = 0; j < lbLength; j++){
			if(la->a[i] == lb->a[j]){
				append(lc,la->a[i]);
				break;
			}
		}
	}
}



int main(){
	sequence_list la,lb,lc;
	la.size = 0;
	lb.size = 0;
	lc.size = 0;
	inputfromfile(&la,"1.txt");
	inputfromfile(&lb,"2.txt");
	prints(&la);
	prints(&lb);
	inter(&la,&lb,&lc);
	prints(&lc);
	return 0; 
}
