#include<stdio.h>
#include<string.h>


menu * MakeNode_Menu(char name[],int price,menu * temp){
        temp=(menu*)malloc(sizeof(menu));
            temp->next=NULL;
            temp->item=name;
            temp->price=price;
            return temp;
}
menu * addMenu(menu * ptr,int s){       //s is the no. of items to be added
    menu * temp;
        int i=0,price;
        char name[20];
        while(i<s){
                i++;
                printf("enter name of dish");
                scanf("%s",&name);
                printf("input price\n");
                scanf("%d",&price);
                temp=MakeNode_Menu(name,price,temp);
                if(ptr==NULL){
                        ptr=temp;
                }
                else{
                        temp->next=ptr;
                        ptr=temp;
                }
        }
        return ptr;
}
