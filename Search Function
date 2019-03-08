void search_name()
{
	rest* lptr;
	char s[10];
	int f=0;
	printf("Enter the name of Restaurant");
	scanf("%s",s);
	int index = Hash_name(s);
	lptr = Name[index];
	while(lptr!=NULL && f==0)
	{
		if(strcmp(s,lptr->rname)==0)
		{
			printf("Restaurant found\n");
			printf("MENU:\n");
			printMenu(lptr);
			f = 1;
		}
		else
		{
			lptr = lptr->next;
		}
	}
	if(f==0)
	{
		printf("Restaurant is not present in our list sorry\n");
	}
}
void search_address()
{
	rest* lptr;
	int pincode,index;
	printf("Enter the pincode of area");
	scanf("%d",&pincode);
	index = Hash_area(pincode);
	lptr = Area[index];
	if(lptr!=NULL)
	{
		while(lptr!=NULL)
		{
			if(lptr->pincode==pincode)
			{
				printf("Restaurant found\n");
				printf("MENU:\n");
				printMenu(lptr);
			}
			else
			{
				lptr = lptr->next;
			}
		}
	}
	else
	{
		printf("Restaurant is not present in our list sorry\n");
	}
}
void search_cuisine()
{
	rest* lptr;
	int f=0,index;
	char s[10];
	printf("Enter the cuisine of Restaurant");
	scanf("%s",s);
	index = Hash_cuisine(s);
	lptr = Cuisine[index];
	while(lptr!=NULL && f==0)
	{
		if(strcmp(lptr->cuisine,s)==0)
		{
			printf("Restaurant found\n");
			printf("MENU:\n");
			printMenu(lptr);
			f = 1;
		}
		else
		{
			lptr = lptr->next;
		}
	}
	if(f==0)
	{
		printf("Restaurant is not present in our list sorry\n");
	}
}void search_type()
{
	rest* lptr;
	int f=0,index;
	char s[10];
	printf("Enter the type of Restaurant");
	scanf("%s",s);
	index = Hash_type(s);
	lptr = Type[index];
	while(lptr!=NULL && f==0)
	{
		if(strcmp(lptr->rtype,s)==0)
		{
			printf("Restaurant found\n");
			printf("MENU:\n");
			printMenu(lptr);
			f = 1;
		}
		else
		{
			lptr = lptr->next;
		}
	}
	if(f==0)
	{
		printf("Restaurant is not present in our list sorry\n");
	}
}
void search()
{
	int i;
	printf("Enter your choice of search\n");
	printf("1. Search By Name");
	printf("2. Search By Address");
	printf("3. Search By Cuisine");
	printf("4. Search By Type");
	scanf("%d",&i);
	switch(i)
	{
		case 1: search_name();
		break;
		case 2: search_address();
		break;
		case 3: search_cuisine();
		break;
		case 4: search_type();
		break;
		default: break;
	}
}
