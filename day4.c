#include <stdio.h>
#include <math.h>

void switchcase()
{
    
    // int a,b;

    // printf("Enter two numbers:");
    // scanf("%d",&a);
    // scanf("%d",&b);

    printf("Select the option\nG\nY\nR\n");
    char c;
    scanf(" %c",&c);

switch(c)
{
    case 'G':
        printf("Go");
        break;
    case 'Y':
        printf("Watch and go");;
        break;
    default:
        // return(0);
    case 'R':
        printf("Stop");;
        break;
    // case '/':
    //     a=a/b;
    //     break;


}
// printf("Answer=%d",a);
}
void pyramid(
)
{
    for (int i = 0; i <10; i++)
    {
        for (int j = 10; j >=i ; j--)
        {
            printf(" ");
        }
        for(int k=0;k<i+i;k++)
        {
            printf("%d",i);
        }
        printf("\n");
        printf("%d",i);
        
    }
}

void tri()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%4d",j);
        }
        printf("\n");
    }
    
    for(int i=n-1;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%4d",j);
        }
        printf("\n");
    }    
  
}

void switchinfor()
{
    char c;

    for(int i=0;i<5;i++)
    {

        printf("--------Menu--------\n");
        printf("\n 1.Arith (A)");
        printf("\n 2.Logi (L)");
        printf("\n 3.Bit (B)\n");

        scanf(" %c",&c);

        switch (c)
        {
        case 'A':
            printf("Enter two numbers:");
            int a,b;
            scanf("%d",&a);
            scanf("%d",&b);
            printf("--------Menu2--------\n");
            printf("\n 1.Add (A)");
            printf("\n 2.Sub (S)");
            printf("\n 3.Mul (M)");
            printf("\n 4.Div (D)\n");

            scanf(" %c",&c);
            switch (c)
            {
            case 'A':
                a=a+b;
                break;
            case 'S':
                a=a-b;
                break;
            case 'M':
                a=a*b;
                break;
            case 'D':
                a=a/b;
                break;
            default:
                break;
            }
            printf("Answer=%d\n",a);
            break;
        
        case 'L':
            printf("Enter two numbers:");
            int e,f;
            scanf("%d",&e);
            scanf("%d",&f);
            printf("--------Menu2--------\n");
            printf("\n 1.AND (A)");
            printf("\n 2.OR (O)");
            

            scanf(" %c",&c);

            switch (c)
            {
            case 'A':
                e=e&&f;
                break;
            case 'O':
                e=e||f;
                break;
            
            default:
                break;
            }
            printf("Answer=%d\n",e);
            break;
        case 'B':
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
            break;
        
        default:
            printf("Invalid input\n");
            break;
        }

    }
}

void shift()
{
    
    printf("Enter a number in HEX:");
     int g;
     char c;
     scanf("%d",&g);
     
     printf("--------Menu2--------\n");
     printf("\n 1.Left shift (L)");
     printf("\n 2.Right shift (R)\n");
     scanf(" %c",&c);

     printf("How many shifts:");
     int b;
     scanf("%d",&b);

     

     switch (c)
     {
     case 'L':
         for(int i=1;i<=b;i++)
         {
            
            g=g<<1;
            printf("Left shift %d=%d\n",i,g);

         }
         break;
     case 'R':
        for(int i=1;i<=b;i++)
         {
            g=g>>1;
            printf("Right shift %d=%d\n",i,g);

         }
         
         break;
     
     default:
         break;
     }
}

void ratio()
{
    int a=1,b=2,c;
    float d;

    printf("1");
     for(int i=2;i<10;i++)
     {
        
        c=a+b;
        
        d=(float)b/a;
        
        
        printf("n2/n1=%f \n",d);
        
        // printf("%3d",b);
        a=b;
        b=c;
     }

}
void gseries()
{
        int a=1,r=3,n,b,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for (int i = 0; i < n; i++) {
        b = a * pow(r, i);
        sum=sum+b;
        printf("%d ",b);

    }
    printf("\n sum=%d",sum);
}

void sine(){
    
    float pi=3.14;
    float r,s;

    for(int i=15;i<360;i=i+90)
    {
        r=pi/2;
        r=r*i;
        s=sin(r);
        printf("sine of %2f=%2f \n",s);
    }

}

void x()
{
        int count=4;

    for(int i=0;i<5;i++)
    {
        for(int j=4;j>=0;j--)
        {
            if(i==j)
                printf("*");
            else
                printf(" ");
            if(j==count)
                printf("*");
            else
                printf(" ");    
        }
        printf("\n");
        count--;

    }
 
    // return 0;
}

void abcd()
{
        int a=0xA;

    for(int i=0;i<5;i++)
    {
        for(int j=1;j<i;j++)
        {
            printf("%X",a);
            a=a+1;
        }
        printf("\n");
    }
}

void a()
{
        for(int i=0;i<7;i++)
    {
        for(int j=0;j<7;j++)
        {
            if(i==0 || j==0 || j==6 || i==7/2)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

int main() {



}