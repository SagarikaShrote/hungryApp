#include<stdio.h>
#include<stdlib.h>

typedef struct menu_type{
	char item[20];			//name of items
	int price;
	struct menu_type * next;
} menu;

typedef struct prevorder_type{
	menu * olist;
	char rname[20];				//name of restaurant from where the order was placed
	struct prevorder_type * next;
} prevorder;

typedef struct rest_type{
	char rname[20];
	char radd[20];
	char ctype[10];			//cuisine type
	char rtype[10];			//category of restaurant (pub, cafe etc)
	int seats;
	int pincode;
	struct rest_type* area;
	struct rest_type* cuisine;
	struct rest_type* type;
	struct rest_type* next;
					//special facilities
	menu * mptr;
} rest;

typedef struct agent_type{
	int id;
	int pno;
	char name[20];
	char aadd[20];			//area for agent
	int free;			//to check if he is free or not? 0 means free while 1 means he is already assigned to some order
	int comm;
	struct agent_type * next;			//current accumulated commision
} agent;

typedef struct user_type{
	int uid;		
	int pno;
	char name[20];
	char add[20];
	char favitem[20];
	prevorder * list;
	struct user_type * next;
} user;

typedef struct order_type{
	int oid;
	user * cust;
	char rname[20];
	menu * order;
	agent * dboy;
	int sum;		//total money to be paid  //this would be done by adding up money while ordering or selecting the menu
	struct order_type * next;
} orderlist;
