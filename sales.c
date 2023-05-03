#include <stdio.h>
#define COUNTY_TAXRATE 0.04
#define STATE_TAXRATE 0.16

float getmonthlysales(void);
float calccountytax(float sales);
float calcStatetax(float sales);
void displaytaxes(float sales, float ctytax, float sttax);

int main(void)
{
    //float COUNTY_TAXRATE = 0.04;
    //float STATE_TAXRATE = 0.16;
    float monthlysales;
    float statetax;
    float countytax;
   
    
    //printf("%f", COUNTY_TAXRATE);


     monthlysales = getmonthlysales();
     statetax = calcStatetax(monthlysales);
     countytax = calccountytax(monthlysales);

    displaytaxes(monthlysales, countytax, statetax);
    return (0);
}

float getmonthlysales(void)
{
    //float COUNTY_TAXRATE = 0.04;
    //float STATE_TAXRATE = 0.16;
    
    float totalsales;

    printf("Please enter the totalsales for the month :\n");
    scanf("%f", &totalsales);
    printf("You entered %f for your total monthly sales.\n", totalsales);

    return (totalsales);
}


float calccountytax(float sales)
{
    
    //float COUNTY_TAXRATE = 0.04;
    //float STATE_TAXRATE = 0.16;
    float countytax;

    countytax = sales * COUNTY_TAXRATE;
    printf("Your county sales tax ix %f\n", countytax);
    return (countytax);
}

float calcStatetax(float sales)
{
    //float COUNTY_TAXRATE = 0.04;
    //float STATE_TAXRATE = 0.16;
    
    float statetax;

    statetax =  sales * STATE_TAXRATE;
    printf("Your state sales tax is %f\n", statetax);

    return (statetax);
}

void displaytaxes(float sales, float ctytax, float sttax)
{
    //float COUNTY_TAXRATE = 0.04;
    //float STATE_TAXRATE = 0.16;
    
    float totalTaxcollected;

    totalTaxcollected = ctytax + sttax;
    printf("Your total monthly sales for the month were : %f", sales);
    printf(" and the total taxes colected from this sales were %f" ,totalTaxcollected);

   
}