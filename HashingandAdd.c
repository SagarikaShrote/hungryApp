rest* MakeNode_rest()
{
	rest* lptr = (rest*) malloc (sizeof(rest));
	printf("Enter Name of restaurant ");
	scanf("%s",lptr->rname);
	printf("Enter Address of restaurant ");
	scanf("%s",lptr->radd);
	printf("Enter Cuisine of restaurant ");
	scanf("%s",lptr->ctype);
	printf("Enter type of restaurant ");
	scanf("%s",lptr->rtype);
	printf("Enter Number of seats of restaurant ");
	scanf("%d",&lptr->seats);
	printf("Enter pincode of restaurant ");
	scanf("%d",&lptr->pincode);
	lptr->area = NULL;
	lptr->cuisine = NULL;
	lptr->type = NULL;
	lptr->mptr = Add_menu();
	return lptr;
}
int Hash_area(rest* lptr)
{
	int index;
	index = (lptr->pincode)%100;
	index = index/10;
	return (index-1);
}
int Hash_cuisine(rest* lptr)
{
	int index;
	if(strcmp(lptr->ctype,"south indian")==0)
	{
		index = 0;
	}
	else if(strcmp(lptr->ctype,"north indian")==0)
	{
		index = 1;
	}
	else if(strcmp(lptr->ctype,"chinese")==0)
	{
		index = 2;
	}
	else
	{
		index = -1;
	}
	return index;
}
int Hash_type(rest* lptr)
{
	int index;
	if(strcmp(lptr->rtype,"pub")==0)
	{
		index = 0;
	}
	else if(strcmp(lptr->ctype,"cafe")==0)
	{
		index = 1;
	}
	else if(strcmp(lptr->ctype,"restaurant")==0)
	{
		index = 2;
	}
	else
	{
		index = -1;
	}
	return index;
}
void Add_area(rest* lptr)
{
	int i;
	if(lptr!=NULL)
	{
		i = Hash_area(lptr);
		rest*nptr = Area[i];
		lptr->area = nptr;
		Area[i] = lptr;
	}
}
void Add_cuisine(rest* lptr)
{
	int i;
	if(lptr!=NULL)
	{
		i = Hash_cuisine(lptr);
		rest*nptr = Cuisine[i];
		lptr->cuisine = nptr;
		Cuisine[i] = lptr;
	}
}
void Add_type(rest* lptr)
{
	int i;
	if(lptr!=NULL)
	{
		i = Hash_type(lptr);
		rest*nptr = Type[i];
		lptr->type = nptr;
		Type[i] = lptr;
	}
}
void Add()
{
	rest* lptr,*nptr;
	int i;
	lptr = (rest*) malloc (sizeof(rest));
	lptr = MakeNode_rest();
	Add_area(lptr);
	Add_cuisine(lptr);
	Add_type(lptr);
}
