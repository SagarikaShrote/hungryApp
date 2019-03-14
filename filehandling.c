#include<stdio.h>
#include<string.h>
void data_rest(){
	FILE * f=fopen("data.txt","r");
	rest * rr=NULL,*r;
	menu*m=NULL,*t;
	char name[20],add[20],ctype[10],rtype[10],in[20];
	int seat,pin,price;
	while(!feof(f)){
		fscanf(f,"%s %s %s %s %d %d %s %d ",name,add,ctype,rtype,&seat,&pin,in,&price);		//in order name address ctype rtype seat pincode itemname price itemname price
		r=(rest *) malloc (sizeof(rest));
		r->next=rr;
		rr=r;
		strcpy(r->rname,name);
		strcpy(r->radd,add);
		strcpy(r->ctype,ctype);
		strcpy(r->rtype,rtype);
		r->seats=seat;
		r->pincode=pin;
		r->area=NULL;
		r->cuisine=NULL;
		r->type=NULL;
		r->mptr=(menu*)malloc(sizeof(menu));
		r->mptr->next=NULL;
		strcpy(r->mptr->item,in);
		r->mptr->price=price;
		Add_name(r);
		Add_area(r);
		Add_cuisine(r);
		Add_type(r);
	}
	fclose(f);
}
void data_agent(){
	FILE * f=fopen("dataA.txt","r");
	agent *a=NULL,*t;
	int f=0,c=0;
	int p,i;
	char name[20],add[20];
	while(!feof(f)){
		fscanf(f,"%d %s %s %d",&i,name,add,&p);		// taking only id,name,address and phone no. as at the start of day commision is zero and so is the work, all are free
		t=(agent*)malloc(sizeof(agent));
		t->next=a;
		a=t;
		t->id=i;
		t->pno=p;
		strcpy(t->name,name);
		strcpy(t->aadd,add);
		t->free=f;
		t->comm=c;
	}
	fclose(f);
}