#include <stdio.h>

int main(){
    do { 

    //welcome heading
    printf("\t\t\t\t\t\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\////////////////////\n");
    printf("\t\t\t\t\t    %c Welcome to Currency Converter %c\n",175,174);
    printf("\t\t\t\t\t////////////////////\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\n\n");
    printf(" %c All Available Currencys %c\n",254,254);
    printf("-----------------------------\n");

    //adding currency with number
    printf("  [1] Bangladeshi Taka (BDT) 	 [2] Indian Rupee (INR)		 [3] United States Dollar (USD)\n");
    printf("  [4] Euro (EUR)	         [5] Chinese Yuan (CNY)	         [6] Japanese Yen (JPY)\n");
    printf("  [7] Russian Ruble (RUB)        [8] Singapore Dollar (SGD)      [9] Canadian Dollar (CAD)\n");
    printf(" [10] Malaysian Ringgit (MYR)   [11] Mexican Peso (MXN)         [12] Kuwaiti Dinar (KWD)\n");
    
    //Conversion code
    int from,to;
    float amount;
    printf("\n\n %c Please Choose & Enter a Number %c\n",254,254); 
    printf("------------------------------------\n");
    printf("Currency to convert from -> ");
    scanf("%d",&from);
    if (from >=1 && from <=15){
    printf("Currency to convert to -> ");
    scanf("%d",&to);
    printf("Amount of money -> ");
    scanf("%f",&amount);
    }else{
        printf("You may type something wrong!\n\n");
    }
    

    switch (from)
    {
    case 1: //bdt
        if (to == 2) {
            printf("Converted value ==> %.2f Rupee\n",amount*0.75);
        }
        else if (to == 3) {
            printf("Converted value ==> %.2f USD\n",amount*0.0091);
        }
        else if (to == 4) {
            printf("Converted value ==> %.2f EUR\n",amount*0.0084);
        }
        else if (to == 5) {
            printf("Converted value ==> %.2f CNY\n",amount*0.066);
        }
        else if (to == 6) {
            printf("Converted value ==> %.2f JPY\n",amount*1.33);
        }
        else if (to == 7) {
            printf("Converted value ==> %.2f RUB\n",amount*0.86);
        }
        else if (to == 8) {
            printf("Converted value ==> %.2f SGD\n",amount*0.012);
        }
        else if (to == 9) {
            printf("Converted value ==> %.2f CAD\n",amount*0.012);
        }
        else if (to == 10) {
            printf("Converted value ==> %.2f MYR\n",amount*0.042);
        }
        else if (to == 11) {
            printf("Converted value ==> %.2f MXN\n",amount*0.15);
        }
        else if (to == 12) {
            printf("Converted value ==> %.2f KWD\n",amount*0.0028);
        }
        break;

    default:
        break;
    }

    //last code
    char close;
    printf("press x for close & y for main menu\n-> ");
    scanf(" %c",&close);
    if (close == 'x' || close =='X'){
        break;
    }
    
    } while(1);

    printf("Thank You <3\n");

return 0;
}
