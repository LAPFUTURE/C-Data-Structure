#include "sequlist.h"

void append(sequence_list *slt,datatype x){
	if(slt->size == MAXSIZE){
		print("顺序表是满的！");exit(1);
	}
	slt->a[slt->size] = x;
	slt->size = slt->size + 1;
}

void merge(sequence_list *L1, sequence_list *L2, sequence_list *L3){
	int i,j;
	for(i = 0; i < L1->size; i++){
		append(L2,L1->a[i]);
	}
	L3->size = 0;
	for(j = 0; j < L2->size; j++){
		L3->a[j] = L2->a[j];
		L3->size++;
	}
	//选择排序 
	int k;
	for(k = 0; k < L3->size; k++){
		int minIndex = k;
		int m,temp;
		for(m = k; m < L3->size; m++ ){
			if(L3->a[m] < L3->a[minIndex]){
				minIndex = m;
			}
		}
		if(minIndex != k){
			temp = L3->a[k];
			L3->a[k] = L3->a[minIndex];
			L3->a[minIndex] = temp;
		}	
	}
}

int main(){
	sequence_list L1,L2,L3;
	input(&L1);
	input(&L2);
	merge(&L1,&L2,&L3);
	print(&L3);
}
