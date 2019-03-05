#include "sequlist.h"

void partion(sequence_list *L){
	int i;
	int j;
	int temp;
	int temp1 = L->size-1;
	for(i = 0; i < L->size; i++){
		if(i > temp1 || i >= (int)(L->size)/2)break;
		if(L->a[i] %2 == 0){//Å¼Êýµ÷µ½ÓÒ±ß 
		printf("%5d \n",L->a[i]);
			for(j = temp1; j >= 0; j--){
				if(L->a[j] %2 == 1){
					temp1 = j-1;
					temp = L->a[i];
					L->a[i] = L->a[j];
					L->a[j] = temp;
					break;		
				}
			}
		}
		
	}
}

int main(){
	sequence_list L;
	initseqlist(&L);
	inputfromfile(&L,"3.txt");
	print(&L);
	partion(&L);
	print(&L);
	return 0;
}
