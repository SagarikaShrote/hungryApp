agent * alloc[2]={NULL,NULL};

//hashing of agents done on basis of they are free or not, as logically there is no area restriction generally in normal such food delivery kind of systems.

int hashAge(agent * a){
    int ret_val;
    if(a==NULL){
            ret_val=-1;
    }
    else if(a->free==0){
        ret_val=0;
    }
    else if(a->free==1){
        ret_val=1;
    }
    else {
        ret_val=-1;
    }
    return ret_val;
}

agent * MakeNode_Agent(agent * temp){
    temp=(agent *)malloc(sizeof(agent));
    temp->next=NULL;
    printf("give id\n");
    scanf("%d",&temp->id);
    printf("give name\n");
    scanf("%s",temp->name);
    printf("give phone no.\n");
    scanf("%d",&temp->pno);
    printf("give address\n");
    scanf("%s",temp->add);
    temp->free=0;
    temp->comm=0;
    return temp; 
}

void addAgent(){
    agent* temp=MakeNode_Agent(temp);
    int i=hashAge(temp);
    if(i!=-1){
        temp->next=alloc[i];            //alloc is the array(hash array) for agents which contains two indexes 0,1
        alloc[i]=temp;
    }
}
