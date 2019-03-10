int init(sequence_queue *sq){
	sq->front = 0;
	sq->rear = 0;
}

int empty(sequence_queue sq){
	return (sq.front == sq.rear ? 1 : 0);
}

void display(sequence_queue sq){
	int i;
	if(empty(sq)){
		printf("\n˳������ǿյ�!");
	}else{
		for( i = sq.front; i < sq.rear; i++){
			printf("%5d",sq.a[i]);
		}
	}
}

datatype get(sequence_queue sq){
	if(empty(sq)){
		printf("\n˳������ǿյ�!�޷���ö��׽ڵ�ֵ!");
		exit(1);
	}
	return sq.a[sq.front];
}

void insert(sequence_queue *sq,datatype x){
	int i;
	if(sq->rear === MAXSIZE){
		printf("\n˳�����������!�޷�����");
		exit(1); 
	}
	sq->a[sq->rear] = x;
	sq->rear = sq->rear + 1;
}

void delete(sequence_queue *sq){
	if(sq->front == sq->rear){
		printf("\n˳������ǿյ�!������ɾ������!");
		exit(1);
	}
	sq->front++;
}









