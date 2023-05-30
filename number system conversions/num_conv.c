#include <stdio.h>
#include <math.h>
#include<string.h>
#include <conio.h>
#include<stdlib.h> 
#include"num_conv.h"
 
int main()
{
    int op,num=1,check;
    long int bin,oct,dec;
    char hex[100];
    int i=0,j,m=2; 
    char pass[100]="hello",user[100],epass[100]; 
    printf("\t\t===============================\n");
    printf("\t\t=== NUMBER SYSTEM CONVERTER ===\n");
    printf("\t\t===============================\n\n");

    printf("\t\t====>ENTER THE USERNAME: <====\n");
	scanf("\t\t\t\t%s",user);  
    printf("\t\t====>ENTER PASSWORD: <====\n");
    welcome:
	scanf("\t\t\t\t%s",epass);
    if(strcmp(epass,pass)==0){
	system("cls"); 
	printf("\t\t=======>LOGIN SUCCESSFUL<========\n\n");
    printf("\t\tWELCOME TO NUMBER SYSTEM CONVERSION\n\n");
    
    while(num!=0)
    {
        printf("\t\t>>>>>> CHOOSE THE CONVERSION <<<<<<\n\n");
     
        printf("=> BINARY <=\n");
        printf("1: Binary to Decimal.\n2: Binary to Octal.\n3: Binary to Hexa-Decimal.\n");
 
        printf("\n=> DECIMAL <=\n");
        printf("4: Decimal to Binary.\n5: Decimal to Octal.\n6: Decimal to Hexa-Decimal.\n");
 
        printf("\n=> OCTAL <=\n");
        printf("7: Octal to Binary.\n8: Octal to Decimal.\n9: Octal to Hexa-Decimal.\n");
 
        printf("\n=> HEXA-DECIMAL <=\n");
        printf("10: Hexa-Decimal to Binary.\n11: Hexa-Decimal to Decimal.\n12: Hexa-Decimal to Octal.\n");
         
        printf("\nENTER YOUR CHOICE: ");
        scanf("%d",&op);
         
        switch(op)
        {
            case 1:
                printf("\n***BINARY TO DECIMAL***\n");
                D:
                printf("\nEnter the Number in Binary form (0s & 1s): ");
                scanf("%ld",&bin);
                // CHECKING INPUT IS IN BINARY FORM
                check=bin;
                 
                while(check!=0)
                {
                    num=check%10;
                    if(num>1)
                    {
                        printf("\n%d IS NOT BINARY NUMBER.\n",bin);
                        printf("***TRY AGAIN****\n");
                        goto D;
                    }
                    else
                     Bin_to_Dec(bin); 
					 break;
                }
                 break;
            case 2:
                printf("\n***BINARY TO OCTAL***\n");
                E:
                printf("\nEnter the Number in Binary form (0s & 1s): ");
                scanf("%ld",&bin);
                // CHECKING INPUT IS IN BINARY FORM
                check=bin;
                 
                while(check!=0)
                {
                    num=check%10;
                    if(num>1)
                    {
                        printf("\n%d IS NOT BINARY NUMBER.\n",bin);
                        printf("***TRY AGAIN****\n");
                        goto E;
                    }
                    else
                    Bin_to_Oct(bin);
                    break;
                }
                 
               break;
             
            case 3:
                printf("\n***BINARY TO HEXA-DECIMAL***\n");
                F:
                printf("\nEnter the Number in Binary form (0s & 1s): ");
                scanf("%ld",&bin);
                // CHECKING INPUT IS IN BINARY FORM
                check=bin;
                 
                while(check!=0)
                {
                    num=check%10;
                    if(num>1)
                    {
                        printf("\n%d IS NOT BINARY NUMBER.\n",bin);
                        printf("***TRY AGAIN****\n");
                        goto F;
                    }
                    else
                     Bin_to_Hex(bin); 
                     break;
                }
                 
               break;
             
            case 4:
                printf("\n***DECIMAL TO BINARY***\n");
                printf("\nEnter the Number in Decimal form (0 to 9): ");
                scanf("%ld",&dec);
                Dec_to_Bin(dec);
				 break;
             
            case 5:
                printf("\n***DECIMAL TO OCTAL***\n");
                printf("\nEnter the Number in Decimal form (0 to 9): ");
                scanf("%ld",&dec);
                Dec_to_Oct(dec);
				 break;
             
            case 6:
                printf("\n***DECIMAL TO HEXA-DECIMAL***\n");
                printf("\nEnter the Number in Decimal form (0 to 9): ");
                scanf("%ld",&dec);
                Dec_to_Hex(dec); 
				break;
             
            case 7:
                printf("\n***OCTAL TO BINARY***\n");
                A:
                printf("\nEnter the Number in Octal form (0 to 7): ");
                scanf("%ld",&oct);
                // CHECKING INPUT IS IN OCTAL FORM
                check=oct;
                 
                while(check!=0)
                {
                    num=check%10;
                    if(num>7)
                    {
                        printf("\n%d IS NOT OCTAL NUMBER.\n",num);
                        goto A;
                    }
                    else
                    Oct_to_Bin(oct); 
                    break;
                }
                break;
             
            case 8:
                printf("\n***OCTAL TO DECIMAL***\n");
                B:
                printf("\nEnter the Number in Octal form (0 to 7): ");
                scanf("%ld",&oct);
                // CHECKING INPUT IS IN OCTAL FORM
                check=oct;
                 
                while(check!=0)
                {
                    num=check%10;
                    if(num>7)
                    {
                        printf("\n%d IS NOT OCTAL NUMBER.\n",num);
                        goto B;
                    }
                    else
                    Oct_to_Dec(oct);
                    break;
                }
                 break;
             
            case 9:
                printf("\n***OCTAL TO HEXA-DECIMAL***\n");
                C:
                printf("\nEnter the Number in Octal form (0 to 7): ");
                scanf("%ld",&oct);
                // CHECKING INPUT IS IN OCTAL FORM
                check=oct;
                 
                while(check!=0)
                {
                    num=check%10;
                    if(num>7)
                    {
                        printf("\n%d IS NOT OCTAL NUMBER.\n",num);
                        goto C;
                    }
                    else
                      Oct_to_Hex(oct); 
                      break;
                }
              break;
             
            case 10:
                printf("\n***HEXA-DECIMAL TO BINARY***\n");
                X:
                printf("\nEnter the Number in Hexa-Decimal form: ");
                scanf("%s",&hex);
                //check
                for(i=strlen(hex)-1;i>=0;i--)
                {
                    if(hex[i]>'f' && hex[i]<='z' || hex[i]>'F'&& hex[i]<='Z')
                    {
                        printf("\nYou have to Enter Hexa-Decimal Number.\n");
                        printf("'%c' IS NOT Hexa-Decimal Number.\n",hex[i]);
                        goto X;
                    }
                }
                Hex_to_Bin(hex); 
				break;
             
            case 11:
                printf("\n***HEXA-DECIMAL TO DECIMAL***\n");
                Y:
                printf("\nEnter the Number in Hexa-Decimal form: ");
                scanf("%s",&hex);
                //check
                for(i=strlen(hex)-1;i>=0;i--)
                {
                    if(hex[i]>'f' && hex[i]<='z' || hex[i]>'F'&& hex[i]<='Z')
                    {
                        printf("\nYou have to Enter Hexa-Decimal Number.\n");
                        printf("'%c' IS NOT Hexa-Decimal Number.\n",hex[i]);
                        goto Y;
                    }
                }
                Hex_to_Dec(hex);
				break;
             
            case 12:
                printf("\n***HEXA-DECIMAL TO OCTAL***\n");
                Z:
                printf("\nEnter the Number in Hexa-Decimal form: ");
                scanf("%s",&hex);
                //check
                for(i=strlen(hex)-1;i>=0;i--)
                {
                    if(hex[i]>'f' && hex[i]<='z' || hex[i]>'F'&& hex[i]<='Z')
                    {
                        printf("\nYou have to Enter Hexa-Decimal Number.\n");
                        printf("'%c' IS NOT Hexa-Decimal Number.\n",hex[i]);
                        goto Z;
                    }
                }
                Hex_to_Oct(hex);
				break;
             
            default:
                printf("\n***INVALID NUMBER***\n");
                break;                                          
        }
        printf("\n\nDO YOU WANT TO CONTINUE = (if yes press 1/ if no press 0) :\n");
        scanf("%d",&num);
        system("cls");
 
    }
     
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t THANKYOU!<3\t\t\t\t\n\n\n\n\n\n\n\n\n\n"); 
}
else
{
	
	if(i>1)
	{
		printf("\t\tYOU HAVE ENTERED THE WRONG PASSWORD FOR 3 TIMES PLEASE CLOSE THE TERMINAL AND OPEN AGAIN!!\n\n");
		printf("\n=====>THANKYOU<=====\n\n");
	exit(0);
	}
	else
	{
	i++;
	system("cls");
	printf("\t\t\n\n====>THE PASSWORD YOU ENTERED IS WRONG RE-ENTER YOUR PASSWORD<====\n");
	printf("\t\t\n=======>%d ATTEMPT(S) LEFT\n",m--);
	goto welcome;
	}
}
}
