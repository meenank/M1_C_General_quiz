#include<bits/stdc++.h>
long int Binary_to_Decimal(long int bin)
{
    int remainder,summation=0,x=0;
    while(bin!=0)
    {
        remainder=bin%10;
        bin=bin/10;
        summation=summation+remainder*pow(2,x);
        x++;
    }

    printf("\nEquivalent Decimal Number : %d",summation);
}

long int Binary_to_Octal(long int bin)
{
    int x=0,remainder,sum=0,remaining[100],length=0;

    while(bin!=0)
    {
        remainder=bin%10;
        bin=bin/10;
        sum=sum+remainder*pow(2,x);
        x++;
    }
    x=0;
    while(sum!=0)
    {
        remaining[x]=sum%8;
        sum=sum/8;
        x++;
        length++;
    }
    printf("\nEquivalent Octal Number : ");
    for(x=length-1;x>=0;x--)
    {
        printf("%d",remaining[x]);
    }
}

long int Binary_to_Hexadecimal(long int bin)
{
    int remainder,x=0,summation=0,remaining[100],length=0;

    while(bin!=0)
    {
        remainder=bin%10;
        bin=bin/10;
        summation=summation+remainder*pow(2,x);
        x++;
    }
    x=0;
    while(summation!=0)
    {
        remaining[x]=summation%16;
        summation=summation/16;
        x++;
        length++;
    }
    printf("\nEquivalent Hexa-Decimal Number : ");
    for(x=length-1;x>=0;x--)
    {
        switch(remaining[x])
        {
            case 10:
                printf("A"); break;

            case 11:
                printf("B"); break;

            case 12:
                printf("C"); break;

            case 13:
                printf("D"); break;

            case 14:
                printf("E"); break;

            case 15:
                printf("F"); break;

            default:
                printf("%d",remaining[x]);
        }

    }
}

long int Decimal_to_Binary(long int dec)
{
    int remainder[50],x,length=0;
    do
    {
        remainder[x]=dec%2;
        dec=dec/2;
        x++;
        length++;
    }
    while(dec!=0);

    printf("\nEquivalent Binary Number : ");
    for(x=length-1;x>=0;x--)
    {
        printf("%d",remainder[x]);
    }
}

long int Decimal_to_Octal(long int dec)
{
    int remainder[50],x,length=0;
    do
    {
        remainder[x]=dec%8;
        dec=dec/8;
        x++;
        length++;
    }
    while(dec!=0);

    printf("\nEquivalent Octal Number : ");
    for(x=length-1;x>=0;x--)
    {
        printf("%d",remainder[x]);
    }
}

long int Decimal_to_Hexadecimal(long int dec)
{
    int remainder[50],x,length=0;
    do
    {
        remainder[x]=dec%16;
        dec=dec/16;
        x++;
        length++;
    }
    while(dec!=0);

    printf("\nEquivalent Hexa-Decimal Number : ");
    for(x=length-1;x>=0;x--)
    {
        switch(remainder[x])
        {
            case 10:
                printf("A"); break;

            case 11:
                printf("B"); break;

            case 12:
                printf("C"); break;

            case 13:
                printf("D"); break;

            case 14:
                printf("E"); break;

            case 15:
                printf("F"); break;

            default:
                printf("%d",remainder[x]);
        }

    }
}

long int Octal_to_Binary(long int oct)
{
    int remainder[50],length=0,decimals=0,x=0,numbers,answers;

    while(oct!=0)
    {
        answers=oct % 10;
        decimals = decimals + answers * pow(8,x);
        x++;
        oct = oct/10;
    }

    x=0;
    do
    {
        remainder[x]=decimals%2;
        decimals=decimals/2;
        x++;
        length++;
    }
    while(decimals!=0);

    printf("\nEquivalent Binary Number : ");
    for(x=length-1;x>=0;x--)
    {
        printf("%d",remainder[x]);
    }
}

long int Octal_to_Decimal(long int oct)
{
    int decimals=0,x=0,numbers,answers;

    while(oct!=0)
    {
        answers=oct % 10;
        decimals = decimals + answers * pow(8,x);
        x++;
        oct = oct/10;
    }
    printf("\nEquivalent Decimal Number : %d",decimals);
}

long int Octal_to_Hexadecimal(long int oct)
{
    int remainder[50],length=0,decimal=0,x=0,numbers,answers=0;
    while(oct!=0)
    {
        answers=oct % 10;
        decimal = decimal + answers * pow(8,x);
        x++;
        oct = oct/10;
    }
    x=0;
    while(decimal!=0)
    {
        remainder[x]=decimal%16;
        decimal=decimal/16;
        x++;
        length++;
    }
    printf("\nEquivalent Hexa-Decimal Number : ");
    for(x=length-1;x>=0;x--)
    {
        switch(remainder[x])
        {
            case 10:
                printf("A"); break;

            case 11:
                printf("B"); break;

            case 12:
                printf("C"); break;

            case 13:
                printf("D"); break;

            case 14:
                printf("E"); break;

            case 15:
                printf("F"); break;

            default:
                printf("%d",remainder[x]);
        }

    }
}

void Hexadecimal_to_Binary(char hex[])
{
    int x=0;
    printf("\nEquivalent Binary Number : ");
    for(x=0;x<strlen(hex);x++)
    {
        switch (hex[x])
        {
        case '0':
            printf("0000"); break;
        case '1':
            printf("0001"); break;
        case '2':
            printf("0010"); break;
        case '3':
            printf("0011"); break;
        case '4':
            printf("0100"); break;
        case '5':
            printf("0101"); break;
        case '6':
            printf("0110"); break;
        case '7':
            printf("0111"); break;
        case '8':
            printf("1000"); break;
        case '9':
            printf("1001"); break;
        case 'A':
        case 'a':
            printf("1010"); break;
        case 'B':
        case 'b':
            printf("1011"); break;
        case 'C':
        case 'c':
            printf("1100"); break;
        case 'D':
        case 'd':
            printf("1101"); break;
        case 'E':
        case 'e':
            printf("1110"); break;
        case 'F':
        case 'f':
            printf("1111"); break;

        default:
            printf("\n Invalid hexa digit %c ", hex[x]);
        }
    }

}

void Hexadecimal_to_Decimal(char hex[])
{
    int x,numbers=0,powered=0,decimal=0;

    for(x=strlen(hex)-1;x>=0;x--)
    {
        if(hex[x]=='A'||hex[x]=='a')
        {
            numbers=10;
        }
        else if(hex[x]=='B'||hex[x]=='b')
        {
            numbers=11;
        }
        else if(hex[x]=='C'||hex[x]=='c')
        {
            numbers=12;
        }
        else if(hex[x]=='D'||hex[x]=='d')
        {
            numbers=13;
        }
        else if(hex[x]=='E'||hex[x]=='e')
        {
            numbers=14;
        }
        else if(hex[x]=='F'||hex[x]=='f')
        {
            numbers=15;
        }
        else
        //(a[i]>=0 || a[i]<=9)
        {
            numbers=hex[x]-48;
        }

        decimal=decimal+numbers*pow(16,powered);
        powered++;
    }
    printf("\nEquivalent Decimal Number : %d",decimal);

}

void Hexadecimal_to_Octal(char hex[])
{
    int x,length,numbers=0,powered=0,decimal=0,remainder[100];

    for(x=strlen(hex)-1;x>=0;x--)
    {
        if(hex[x]=='A'||hex[x]=='a')
        {
            numbers=10;
        }
        else if(hex[x]=='B'||hex[x]=='b')
        {
            numbers=11;
        }
        else if(hex[x]=='C'||hex[x]=='c')
        {
            numbers=12;
        }
        else if(hex[x]=='D'||hex[x]=='d')
        {
            numbers=13;
        }
        else if(hex[x]=='E'||hex[x]=='e')
        {
            numbers=14;
        }
        else if(hex[x]=='F'||hex[x]=='f')
        {
            numbers=15;
        }
        else
        //(a[i]>=0 || a[i]<=9)
        {
            numbers=hex[x]-48;
        }

        decimal=decimal+numbers*pow(16,powered);
        powered++;
    }

    x=0,length=0;
    while(decimal!=0)
    {
        remainder[x]=decimal%8;
        decimal=decimal/8;
        x++;
        length++;
    }
    printf("\nEquivalent Octal Number : ");
    for(x=length-1;x>=0;x--)
    {
        printf("%d",remainder[x]);
    }

}
