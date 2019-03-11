user * user_search(){
	int flag=0,p;
	printf("give user phone no.\n");
	scanf("%d",&p);
	user * ptr=ulist;							//ulist is the assumed global user list
	while(ptr!=NULL && flag==0){
		if(ptr->pno==p){
			flag=1;
		}
		else
			ptr=ptr->next;
	}
	return ptr;
}

user * user_MakeNode(user * temp);
{
	temp=(user *)malloc(sizeof(user));
	temp->next=NULL;
	printf("give user id\n");
	scanf("%d",temp->uid);
	printf("give user name\n");
	scanf("%s",temp->name);
	printf("give user phone no\n");
	scanf("%d",temp->pno);
	printf("give user address\n");
	scanf("%s",temp->add);
	return temp;
}

