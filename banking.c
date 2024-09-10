# include<stdio.h>
typedef struct bankcustomer{
  int accnum;
char name[22];
int balance; 
}cus;
void display(cus data[]){
    printf("\na/c no\tname\tbalance\n");
    for(int i=0;i<5;i++){
 printf("%d\t%s\t%d\n",data[i].accnum,data[i].name,data[i].balance);
    }
}
int search(cus data[],int accno){
    for(int i=0;i<5;i++){
        if(data[i].accnum==accno){
 return i;
        }
        } return -1;
    }
    void deposit(cus data[],int accno,int amount){
        int i=search(data,accno);
        if(i==-1){
            printf("****account not found****\n");
        }
        else{
            data[i].balance+=amount;
        printf("****%d deposited in your account****\n",amount);
printf("****new balance is %d****\n",data[i].balance);
        }
    }
     void withdraw(cus data[],int accno,int amount){
        int i=search(data,accno);
        if(i==-1){
            printf("****account not found****\n");
        }
        else if(data[i].balance<amount){
            printf("****insufficient balance****\n");
        }
        else{
            data[i].balance-=amount;
        printf("****%d withdrawn from your account****\n",amount);
printf("****new balance is %d****\n",data[i].balance);
        }
    }
int main(){int n,accno,a,amount;
    cus data[5]={1,"rashi",0,
    2,"anil",100,
    3,"tisha",250,
    4,"tarun",105,
    5,"sheela",2500};
     printf("\nwelcome to xyz banking\n\n");
printf("press 1 to display all records\n");
printf("press 2 to search a record\n");
printf("press 3 to deposit amount\n");
printf("press 4 to withdraw amount\n");
printf("press 0 to exit\n\n");
    do{
printf("\nenter your number(0-4): \n");
scanf("%d",&n);
switch(n){
   case 1:
       display(data);
break;
case 2:
    printf("enter your account number:\n");
    scanf("%d",&accno);
   a=search(data,accno);
   if(a==-1){
       printf("****account not found****\n");
   }
   else{
        printf("\na/c no\tname\tbalance\n");
  printf("%d\t%s\t%d\n",data[a].accnum,data[a].name,data[a].balance);
}
     break;

case 3:
    printf("enter your account number:\n");
    scanf("%d",&accno);
    printf("enter amount to be deposited:\n");
    scanf("%d",&amount);
    deposit(data,accno,amount);
break;
 case 4:
     printf("enter your account number:\n");
    scanf("%d",&accno);
    printf("enter amount to be withdrawn:\n");
    scanf("%d",&amount);
    withdraw(data,accno,amount);
}
}
while (n!=0);

    return 0;
}