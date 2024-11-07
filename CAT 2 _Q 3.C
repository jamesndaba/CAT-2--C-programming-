# include<stdio.h>
int main (){

float hours_worked,hourly_wage,gross_pay,overtime_earn,regular_earn,taxes,net_pay;

printf("enter hours worked in week");
scanf("%f\n",&hours_worked);

printf("enter hourly_wage");
scanf("%f\n",&hourly_wage);


if(hours_worked>40){
regular_earn=40*hourly_wage;
overtime_earn=(hours_worked-40)*1.5;
gross_pay=overtime_earn*regular_earn;

}
else{
regular_earn=hours_worked*hourly_wage;
overtime_earn=0;
gross_pay=regular_earn;
}
if(gross_pay<600){taxes=gross_pay*0.15;
}else{(taxes=(600*0.15)+(gross_pay-600)*0.2);
}
net_pay=gross_pay-taxes;

printf("gross_pay:%2f",gross_pay);

printf("taxes:%2f",taxes);

printf("net_pay:%2f",net_pay);


return 0;


}
