void init(sequence_list *slt){
	slt->size = 0;
}

void append(sequence_list *slt,datatype x){
	if(slt->size == MAXSIZE){
		print("˳��������ģ�");exit(1);
	}
	slt->a[slt->size] = x;
	slt->size = slt->size + 1;
}

void display(sequence_list slt){
	int i;
	if(!slt.size){
		printf("\n˳����ǿյģ�")
	}else{
		for(i = 0; i < slt.size; i++){
			printf("%5d",slt.a[i]);
		}
	}
}

int empty(sequence_list alt){
	return(alt.size = 0 ? 1 :0);
}

int find(sequence_list slt,datatype x){
	int i = 0;
	while(i < slt.size && slt.a[i] != x){
		i++;
	}
	return(i < slt.size ? i : -1);
}

datatype get(sequence_list slt,int i){
	if(i < 0 || i >= slt.zise){
		printf("\nָ��λ�õĽڵ㲻���ڣ�");
		exit(1); 
	}else{
		return slt.a[i];
	}
}

void insert(sequence_list *slt,datatype x,int position){
	int i;
	if(slt->size == MAXSIZE){
		printf("\n˳����������޷����룡");
		exit(1);
	}
	if(position < 0 || position > slt->size){
		printf("ָ����λ�ò����ڣ�");
		exit(1); 
	}
	for(i = slt->size; i > position; i--){
		slt->a[i] = slt->a[i-1];
	}
	slt->a[position] = x;
	slt->size++;
}

void dele(sequence_list *slt,int position){
	int i;
	if(slt->size == 0){
		printf("\n˳���Ϊ�գ�");
		exit(1); 
	}
	if(position < 0 || position >= slt->size){
		printf("\nָ����ɾ��λ�ò����ڣ�");
		exit(1);
	}
	for(int i = position; i < slt->size-1; i++){
		slt->a[i] = slt->a[i+1];
	}
	slt->size--;
}
















