link_node *init(){
	return NULL;
}
void display(link_node *head){
	node *p;
	p = head;
	if(!p){
		printf("\n�������ǿյ�");
	}else{
		printf("\n�������ֵΪ��:");
		while(p){
			printf("%5d",p->info);
			p = p->next;	
		}
	}
}

link_node *find(link_node *head,int i){
	int j = i;
	link_node *p = head;
	if(i < 1){
		return NULL;
	}
	while(p && i != j){
		p = p->next;
		j++;
	}
	return p;
}











