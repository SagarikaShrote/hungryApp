rest* Name[100];
rest* Area[100];
rest* Cuisine[100];
rest* Type[100];
int main()
{
	int i;
	initiliase();
	printf("1.Search Restaurant\n");
	printf("2.Add Restaurant\n");
	printf("3.Order from Restaurant\n");
	printf("4.Details of order\n");
	while(true)
	{
		scanf("%d",&i);
		switch(i)
		{
			case 1: search();
			break;
			case 2: Add();
			break;
			case 3: order();
			break;
			case 4: details();
			break;
			default: break;
		}
	}
	return 0;
}
