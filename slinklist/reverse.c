#include "slinklist.h"

int main(){
	link_node* reverse(link_node *head){
		if(!head){
			return head;
		}
		link_node *oldHead = head;
		link_node *newHead;
		while(oldHead->next){
			newHead = oldHead->next;
			oldHead->next = newHead->next;
			newHead->next = head;
			head = newHead;
		}
		return head;
	}
}
