#include "table.h"
void insertsort(table *tab){
	int i,j;
	for(i = 2; i <= tab->length; i++){
		j = i - 1;
		tab->r[0] = tab->r[i];
		while(tab->r[0].key < tab->r[j].key){
			tab->r[j+1] = tab->r[j];
			j = j - 1;
		}
		tab->r[j+1] = tab->r[0];
	}
}

int main(){
	int i;
	table *test;
	test->length = 10;
	for(i = 0; i < test->length; i++){
		test->r[i].key = i;
	}
	
	insertsort(test);
	for(i = 0; i < test->length; i++){
		printf("%5d",test->r[i]);
	}
}
