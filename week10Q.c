#include <stdio.h>


/* Q1

int main(){

    float dizi[8];
    float sum = 0;
    float average;
    int i;
    for (i = 0; i < 8; i++)
    {
        printf("enter a value for average of the numbers\n");
        scanf("%f", &dizi[i]);
        sum=dizi[i]+sum;
    }
    average = (float)sum / (float)i;
    printf("average: %.2f", average);
    return 0;
}*/


/* Q2

int main() 
{
    
    int sayi_dizisi[10];
    int sayi, i = 0;

    while (1) 
    {
        printf("Bir sayi girin (-1 toplamayi bitirir): ");
        scanf("%d", &sayi);

        if (sayi == -1) 
        {
            break;
        }

        sayi_dizisi[i] = sayi;
        i++;

        if (i == 10) 
        {
            printf("Diziye maksimum eleman sayisina ulasildi.\n");
            break;
        }
    }

    for (int j = 0; j < i; j++) {
        printf("%d\n", sayi_dizisi[j] * sayi_dizisi[j]);
    }

    return 0;
}*/


/* Q3

int main(){

    int dizi[5];
    int number, number1;
    int digit=0;
    printf("enter a number\n");
    scanf("%d", &number);

    while(1)   
    {
        number=number/10;
        digit=digit+1;
        if (number==0)
        {
            break;
        }
        
    }
    
    printf("enter same number again\n");
    scanf("%d", &number1);

    for (int i = 0; i < digit; i++)
    {  
        dizi[i]=number1%10;
        number1=number1/10;
        printf("%d ",dizi[i]);
    }
    
    return 0;
}*/


/* Q4

int main(){
    
    int dizi[10];
    int number, j=9;
    for (int i = 0; i < 10; i++)
    {
        printf("enter a number\n");
        scanf("%d", &number);
        dizi[j]=number;
        j=j-1;
    }
    for ( j = 0; j < 10 ; j++)
    {
        printf("%d ", dizi[j]);
    }
    
    
    return 0;
}*/