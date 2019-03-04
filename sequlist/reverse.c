#include "sequlist.h"

void reverse(sequence_list *L){
	datatype temp;
	int i;
	int length = (int)((L->size)/2);
	for(i = 0; i < length; i++){
		temp = L->a[i];
		L->a[i] = L->a[L->size-i-1];
		L->a[L->size-i-1] = temp;	
	}
}

int main(){
	sequence_list L;
	input(&L);
	print(&L);
	reverse(&L);
	print(&L);
}
