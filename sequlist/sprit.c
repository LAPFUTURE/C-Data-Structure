#include "sequlist.h"
void sprit(sequence_list *L1,sequence_list *L2,sequence_list *L3){
	int i;
	int j = 0, k = 0;
	L2->size = 0;
	L3->size = 0;
	for(i = 0; i < L1->size; i++){
		if(L1->a[i]%2 == 1){//ÆæÊý 
			L2->a[j] = L1->a[i];
			j++;
			L2->size++;
		}else{//Å¼Êý 
			L3->a[k] = L1->a[i];
			k++;
			L3->size++;
		}
	}
	
}

int main(){
	sequence_list L1,L2,L3;
	input(&L1);	
	sprit(&L1,&L2,&L3);
	print(&L1);
	print(&L2);
	print(&L3);
}
