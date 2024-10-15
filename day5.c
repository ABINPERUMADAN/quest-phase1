#include<stdio.h>
#include<stdlib.h>
#include<math.h>

// void even()
// {
//         int a=20;
//     int b=0;

//     while(b<10){
//         while(a<=50)
//         {
//             printf("%d \t",a);
//             a=a+2;

//         }
//         printf("\n");
//         a=20;
//         b++;

//     }
// }

// void zero(){

//     int input=1;

//     while(input)
//     {
//         printf("Enter zero:");
//         scanf("%d",&input);
//     }
//     printf("Success");
// }

// void guess(){
//      int rand_value=rand();
//     int u_input=0;
//     char choice='y';
//     int attempt=1,i=1;

//     printf("guess the random value:");
//     scanf("%d",&u_input);

//     while(choice=='y')
//     {
        
        
//             while(u_input!=rand_value)
//             {
            
//                     if (i==5)
//                     {
//                         break;
//                     }
//                     printf("attempt %d is failed\n",attempt);
//                     while(!(rand_value>=0 && rand_value<=20))
//                     {
//                         rand_value=rand();
//                     }
//                     // printf("%d \n",rand_value);
//                     printf("guess the random value:");
//                     scanf("%d",&u_input);
//                     i=i+1;
                    
                
//             }
//             printf("success");
        
//         printf("do you like to retry \n y for yes and n for no : ");
//         scanf(" %c",&choice);
        
//     }
// }

// void multable(){
//     int n,itteration;

//    printf("Enter the number and the itterations :");
//    scanf("%d",&n);
//    scanf("%d",&itteration);

//    while(itteration!=0){
//     printf("%d * %d = %d \n",n,itteration,n*itteration);
//     itteration--;
//    }
// }
// void cube(){
//         int u_input1=-1,u_input2=1,cube=0,f=0;

//     // printf("Enter a positive number:");
//     // scanf("%d",&u_input1);

//     while (u_input1<0)
//     {
//         printf("Enter a positive number:");
//         scanf("%d",&u_input1);
//         while(u_input1>=0)
//         {
            
//             if(u_input1==u_input2)
//             {
//                 f=1;
//                 break;
//             }
            
//             cube=u_input1*u_input1*u_input1;
//             printf("cube of %d is %d \n",u_input1,cube);
//             u_input2=u_input1;
//             printf("Enter a positive number:");
//             scanf("%d",&u_input1);

//         }
//         if(f==1){
//             printf("You have entered same numbers");
//             break;
//         }
        
//     }
    
    
// }

// void tenthpow()
// {
//         int n,p;
//     char choice='y';

    

//     while(choice=='y'||choice=='Y')
//     {
//         printf("Enter a number:");
//         scanf("%d",&n);
//         p=pow(n,10);
//         printf("10th power of %d is=%d\n",n,p);
//         printf("Do you want to continue:");
//         scanf(" %c",&choice);
//     }
// }

// void calc(){
//         char choice='y';

//     while(choice=='y'||choice=='Y')
//     {
//          printf("Enter two numbers:");
//             int a,b;
//             char c;
//             scanf("%d",&a);
//             scanf("%d",&b);
//             printf("--------Menu2--------\n");
//             printf("\n 1.Add (A)");
//             printf("\n 2.Sub (S)");
//             printf("\n 3.Mul (M)");
//             printf("\n 4.Div (D)\n");

//             scanf(" %c",&c);
//             switch (c)
//             {
//             case 'A':
//                 a=a+b;
//                 break;
//             case 'S':
//                 a=a-b;
//                 break;
//             case 'M':
//                 a=a*b;
//                 break;
//             case 'D':
//                 a=a/b;
//                 break;
//             default:
//                 break;
//             }
//             printf("Answer=%d\n",a);
//             printf("Do you want to continue:");
//             scanf(" %c",&choice);
//     }
// }

void bitcalc()
{
        char choice='y';
    char c;

    while(choice=='y'||choice=='Y')
    {
         printf("Enter two numbers in HEX:");
         int g,h;
         scanf("%x",&g);
         scanf("%x",&h);
         printf("--------Menu2--------\n");
         printf("\n 1.AND (A)");
        printf("\n 2.OR (O)");
         printf("\n 3.XOR (X)");
            

         scanf(" %c",&c);
         switch (c)
         {
            case 'A':
                g=g&h;
                break;
            case 'O':
                g=g|h;
                break;
            case 'X':
                g=g^h;
                break;
            default:
                break;
         }
         printf("Answer=%X\n",g);
         g=0x0000ffff&g;
         printf("decimal equalent after masking=%d\n",g);
         printf("hex equalent after masking=%x\n",g);
         printf("oct equalent after masking=%o\n",g);

         printf("Do you want to continue:");
         scanf(" %c",&choice);
            
    }
}

/**
 * C program to print hollow pyramid triangle star pattern
 */

void hollowtriangle()
{
    int i=1, j=1, rows;

    printf("Enter number of rows : ");
    scanf("%d", &rows);

    while(i<=rows)
    {
        j=i;
        while(j<rows)
        {
            printf(" ");
            j++;
        }

        j=1;
        while(j<=(2*i-1))
        {
    
            if(i==rows || j==1 || j==(2*i-1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            j++;
        }

        
        printf("\n");
        i++;
    }

    // return 0;
}

int main()
{
    int n,i,fact=1,sum=0;

    printf("Enter the number:");
    scanf("%d",&n);

    for(i=1;i<=n;i++){    
      fact=fact*i;    
    }    
    // printf("%d",fact);
    while(fact!=0)
    {
        sum=sum+(fact%10);
        fact=fact/10;
    }
    printf("sum is :%d",sum);

    
}