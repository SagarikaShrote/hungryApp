#include<stdio.h>
#include<string.h>

void delivered{
	printf("input order id\n");
	int id,flag=0;
	scanf("%d",&id);
	orderlist * ptr=olist,*prev=NULL;				//olist is the assumed starting pointer of the universal order list
	while(ptr!=NULL && flag==0){
		
		if(ptr->oid==id ){
			flag=1;
			ptr->dboy->comm+=(ptr->sum/10);		//for 10% commision being added to the agent
			ptr->order->next=ptr->cust->prevorder->olist->next;		//adding order in users preordered list
			ptr->cust->prevorder->olist=ptr->order;
			ptr->cust->prevorder->rname=ptr->rname;
			if(prev==NULL){
				prev=ptr;
				ptr=ptr->next;
				free(prev);
			}
			else{
				prev->next=ptr->next;
				free(ptr);
			}
		}
		else
			prev=ptr;
			ptr=ptr->next;
	}
	printf("done\n");
}