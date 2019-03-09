int Hash_name(char s[])
{
	int index=0,i=0;
	while(s[i]!='\0')
	{
		index = index + (s[i]-'a');
		index = index%10;
		i++;
	}
	return index;
}
int Hash_area(int pincode)
{
	int index;
	index = (pincode)%100;
	index = index/10;
	return (index-1);
}
int Hash_cuisine(char s[])
{
	int index;
	if(strcmp(s,"south indian")==0)
	{
		index = 0;
	}
	else if(strcmp(s,"north indian")==0)
	{
		index = 1;
	}
	else if(strcmp(s,"chinese")==0)
	{
		index = 2;
	}
	else
	{
		index = -1;
	}
	return index;
}
int Hash_type(char s[])
{
	int index;
	if(strcmp(s,"pub")==0)
	{
		index = 0;
	}
	else if(strcmp(s,"cafe")==0)
	{
		index = 1;
	}
	else if(strcmp(s,"restaurant")==0)
	{
		index = 2;
	}
	else
	{
		index = -1;
	}
	return index;
}
void Add_name(rest*lptr)
{
	int i;
	if(lptr!=NULL)
	{
		i = Hash_name(lptr->rname);
		rest*nptr = Name[i];
		lptr->next = nptr;
		Name[i] = lptr;
	}
}
void Add_area(rest* lptr)
{
	int i;
	if(lptr!=NULL)
	{
		i = Hash_area(lptr->pincode);
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
		i = Hash_cuisine(lptr->ctype);
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
		i = Hash_type(lptr->rtype);
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
	Add_name(lptr);
	Add_area(lptr);
	Add_cuisine(lptr);
	Add_type(lptr);
}
