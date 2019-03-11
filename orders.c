#include<stdio.h>
#include<string.h>

void delivered(){
	printf("input order id\n");
	int id,flag=0;
	scanf("%d",&id);
	orderlist * ptr=olist,*prev=NULL;				//olist is the assumed starting pointer of the universal order list
	while(ptr!=NULL && flag==0){
		
		if(ptr->oid==id ){
			flag=1;
			ptr->dboy->comm+=(ptr->sum/10);		//for 10% commision being added to the agent
			if(prev==NULL){
				olist=ptr->next;
				
				
			}
			else{
				prev->next=ptr->next;
				
			}
			ptr->order->next=ptr->cust->prevorder->olist->next;		//adding order in users preordered list
			ptr->cust->prevorder->olist=ptr->order;
			ptr->cust->prevorder->rname=ptr->rname;
			favitem(ptr->cust);
			free(ptr);
		}
		else
			prev=ptr;
			ptr=ptr->next;
	}
	printf("done\n");
}

void cancel(){
	printf("input order id\n");
	int id,flag=0;
	scanf("%d",&id);
	orderlist * ptr=olist,*prev=NULL;				//olist is the assumed starting pointer of the universal order list
	while(ptr!=NULL && flag==0){
		if(ptr->oid==id ){
			flag=1;
			if(prev==NULL){
				olist=ptr->next;
			}
			else{
				prev->next=ptr->next;
				
			}
			free(ptr);							//only successfully served orders are added to the previous order list of the user
		}
		else
			prev=ptr;
			ptr=ptr->next;
	}
	printf("cancelled\n");
}

int order(){

}

/*	void favitem(user * ptr){
		prevorder * pptr;
		menu * mptr,*tmptr;
		char i[20];
		int freq=0,nfreq=0;
			while(pptr!=NULL){
				mptr=pptr->olist;
				while(mptr!=NULL){
					tmptr=mptr->next;
					while(tmptr!=NULL){
						if(strcmp(mptr->item,tmptr->item)==0){
							nfreq+=1;
						}
						else{
							tmptr=tmptr->next;
						}
					}
					if(nfreq>freq){
						freq=nfreq;
						i=mptr->item;
					}
					mptr=mptr->next;
				}
				pptr=pptr->next
			}
}*/
