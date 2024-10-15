#include <stdio.h>

void range()
{
    
  int a;
  printf("Enter a number between 1 and 10:");
  scanf("%d",&a);
  if(a>1&&a<10)
  {
    printf("the number is valid");
  }
  else
    printf("the number is not valid");
}

void vowel()
{
        char a;

    printf("Enter a vowel:");

    scanf("%c",&a);

    if(!(a>='a' && a<='z') || (a>='A' && a<='Z'))
    {
        printf("invaid input");
       
    }
    if(a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
    {
        int b;
        b=a;
        int c;
        c=b%10;
        b=b/10;
        c=c+(b%10);
        printf("%d",c);
    
    }
    else if (a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
    {
         int b;
        b=a;
        int c;
        c=b%10;
        b=b/10;
        c=c+(b%10);
        
        b=b/10;
        if(b==0)
        {
            printf("%d",c);
            // return(0);
        }

        c=c+(b%10);
        printf("%d",c);
    
    }
    
    else
    {
        printf(" not Valid");

    }
}



void vowelcheck()
{
        char c1,c2;

    printf("Enter two different vowel:");

    scanf(" %c",&c1);
    scanf(" %c",&c2);

    if((c1=='A' ^ c2=='a') ^(c1=='a' ^ c2=='A')||(c1=='E' ^ c2=='e')^(c1=='e' ^ c2=='E')||(c1=='I' ^ c2=='i')^(c1=='i' ^ c2=='I')||(c1=='O' ^ c2=='o')^(c1=='o' ^ c2=='O')||(c1=='U' ^ c2=='u')^(c1=='u' ^ c2=='U'))
    {
        
        printf("vaid input");
        
    }
    else
        printf("invalid input");
}

void tt()
{
    char a,b;
    a='T';
    b='F';

    printf("\n--------------------LOGICAL AND---------------------\n");
    // printf("--------------------------------------------------- \n");
    printf("|\t I1\t|\t I2\t|\tO\t| \n");
    printf("--------------------------------------------------- \n");
    printf("|\t %c\t|\t %c\t|\tF\t| \n",b,b);
    printf("--------------------------------------------------- \n");
    printf("|\t %c\t|\t %c\t|\tF\t| \n",b,a);
    printf("--------------------------------------------------- \n");
    printf("|\t %c\t|\t %c\t|\tF\t| \n",a,b);
    printf("--------------------------------------------------- \n");
    printf("|\t %c\t|\t %c\t|\tT\t| \n\n",a,a);


}

void reset()
{
     int v1=0,v2=0x1234;//0001 0010 0011 0100

    v2 &= ~(1<<10);

    printf("v2= %x",v2);
    
}
void unpack()
{
    int v1=0,v2=0x0A;
    int b0,b1,b2,b3;

    b0= (v2 >>0) & 1;
    b1= (v2 >>1) & 1;
    b2= (v2 >>2) & 1;
    b3= (v2 >>3) & 1;

    printf("%d\n%d\n%d\n%d",b3,b2,b1,b0);
}

void bit_and()
{
    int v1=0x5, v2=0xA ;
    int res;
    res= v1 & v2;
    printf("res = %x\n",res);

    res= v1 | v2;
    printf("res = %x\n",res);

    res= v1 ^ v2;
    res=~res;
    printf("res = %x\n",res);

}

void andwithnand()
{
    int v1=0x5, v2=0xA ;
    int res,res1,res2;
    res1=v1 & v1;
    res1=~res1;
    res2=v2&v2;
    res2=~res2;
    res=res1&res2;
    res=~res;
    printf("res=%x",res);
}
void xorwithnand()
{
    int v1=11, v2=11;
    int res,res1,res2;
    res=v1&v2;
    res=~res;
    res1=v1 & res;
    res1=~res1;
    res2=v2&res;
    res2=~res2;
    res=res1&res2;
    res=~res;
    printf("res=%x",res);
}
int main() {
    
    char a;

    printf("Enter the input:");
    scanf(" %c",&a);
    

    if(a=='g')
    {
       printf("GO");
       return(0);

    }
    else if(a=='y')
    {
        printf("look and go");
        return(0);
    }
    else if(a=='r')
    {
        printf("STOP!!!!");
        return(0);

    }
    else
    {
        printf("Invalid input");
    }
}