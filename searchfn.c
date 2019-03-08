rest* search_category()
{
	int i=0,j=0,x;
	rest* B[100],*lptr;
	char s[10];
	printf("Enter Category");
	scanf("%s",s);
	int count = 0;
	while(count!=5 && i<100)
	{
		lptr = A[i];
		if(lptr!=NULL)
		{
			while(lptr!=NULL)
			{
				if(strcmp(lptr->rtype,s))
				{
					printf("%d\t",j);
					printf("%s\n",lptr->rname);
					B[j] = lptr;
					j++;
				}

				lptr = lptr->next;
			}
			count = 0;
		}
		else
		{
			count++;
		}
		i++;
	}
	lptr = NULL;
	printf("Enter no. of restaurnat");
	scanf("%d",&x);
	if(x >= 0 && x <= j)
	{
		lptr = B[i];
	}
	return lptr;
}

rest* search_cuisine()
{
	int i=0,j=0,x;
	rest* B[100],*lptr;
	char s[10];
	printf("Enter cuisine");
	scanf("%s",s);
	int count = 0;
	while(count!=5 && i<100)
	{
		lptr = A[i];
		if(lptr!=NULL)
		{
			while(lptr!=NULL)
			{
				if(strcmp(lptr->ctype,s))
				{
					printf("%d\t",j);
					printf("%s\n",lptr->rname);
					B[j] = lptr;
					j++;
				}

				lptr = lptr->next;
			}
			count = 0;
		}
		else
		{
			count++;
		}
		i++;
	}
	lptr = NULL;
	printf("Enter no. of restaurnat");
	scanf("%d",&x);
	if(x >= 0 && x <= j)
	{
		lptr = B[i];
	}
	return lptr;
}


































