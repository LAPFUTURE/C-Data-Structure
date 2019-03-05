#include <stdio.h>
#define MAXSIZE 100
typedef int datatype;
typedef struct{
	datatype a[MAXSIZE];
	int size;
}sequence_list;

void initseqlist(sequence_list *L){
	L->size = 0;
}

void input(sequence_list *L){
	datatype x;
	initseqlist(L);
	printf("请输入一组数据，以0为结束符：\n");
	scanf("%d",&x);
	while(x){
		L->a[L->size++] = x;
		scanf("%d",&x);
	}
}

void inputfromfile(sequence_list *L,char *f){
	int i,x;
	FILE *fp = fopen(f,"r");
	L->size = 0;
	if(fp){
		while(!feof(fp)){
			fscanf(fp,"%d",&L->a[L->size]);
			L->size++;
		}
		fclose(fp);
	}
} 

void print(sequence_list *L){
	int i;
	for(i = 0; i < L->size; i++){
		printf("%5d %5d",L->a[i],i);
		if((i+1)%10 == 0){
			printf("\n");
		}
	}
	printf("\n");
}











 
