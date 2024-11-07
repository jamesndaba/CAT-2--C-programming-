/* name: james Mwatha Ndaba 
date:7/11/24
reg no:ct101/G/22994/24
cat 2 question 1 structure */
#include<stdio.h>
#include<string.h>
struct employee {
char name[25];
int id;
char department[20];
float salary;
char email[50];
}employee1;
int main(){
strcpy(employee1.name,"John doe");
employee1.id=12345;
strcpy(employee1.department,"human resources");
employee1.salary=55000.50;
strcpy(employee1.email,"Johndoe@company.com");

printf("name:%s\n",employee1.name);

printf("id:%d\n",employee1.id);
printf("department:%s\n",employee1.department);
printf("salary:%f\n",employee1.salary);
printf("email:%s\n",employee1.email);

return 0;
}
