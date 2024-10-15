#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
// #include"arr_lib.c"

int fact(int n); 
//program 1 
//to find factorial of a givern number using recursive function
int factorial_main()
{

    int num,factorial;

    printf("Enter the number: ");
    scanf("%d",&num);

    factorial=fact(num);

    if(!factorial)
        printf("factorial undefined");
    else
        printf("factorial of %d is: %d",num,factorial);

}

int fact(int n)
{
    if(n==1 || n==0)
        return(1);
    else if(n<0)
    {
        return(0);
    }
    else{
        return(n*fact(n-1));
    }
}

// program 2
//to find the length of a given string using strlen()

int str_len()
{

    char str[]="abin";
    int length;

    length=strlen(str);

    printf("The length of %s is = %d",str,length);
    // return(length);

}

//program 3
//to find the length of a given string without using strlen()

int str_len2()
{
    char str[]="abin anto";
    int count=0;

    for(;*(str+count)!='\0';)
    {
        count++;
    }

    printf("The length of %s is = %d",str,count);
}

//program 4
//to compare two strings using strcmp()

int str_cmp()
{
    char str[]="dbf",str2[]="aeb";
    int diff;

    diff=strcmp(str,str2);

    printf("The difference is = %d",diff);
}


//program 5
// to compare two strings without using library function

int str_cmp2()
{
    char str[20],str2[20];
    int diff=0,index,count=0,count2=0;

    printf("Enter the two strings: ");
    scanf("%s",str);
    scanf("%s",str2);

    count=strlen(str);
    count2=strlen(str2);

    if(count!=count2)
    {
        printf("Invalid size");
        return(0);
    }

    for(index=0;index<count;index++)
    {
        if(str[index]<str2[index])
            diff--;
        else if(str[index]>str2[index])
            diff++;
    }

    if(diff>0)
        diff=1;
    else if(diff<0)
        diff=-1;
    
    printf("The difference is = %d",diff);
}

//program 6
//to print the difference in ascii values of each char 

int ascii_diff()
{
    char str[20],str2[20];
    int index,count=0,count2=0;

    printf("Enter the two strings: ");
    scanf("%s",str);
    scanf("%s",str2);

    count=strlen(str);
    count2=strlen(str2);

    if(count!=count2)
    {
        printf("Invalid size");
        return(0);
    }

    for(index=0;index<count;index++)
    {
        if(str[index]<str2[index])
        {
            printf("difference b/w ASCII of %c and %c is: %d\n",str[index],str2[index],(int)str[index]-(int)str2[index]);
            
        }
        else if(str[index]>str2[index])
        {
            printf("difference b/w ASCII %c and %c is: %d\n",str[index],str2[index],(int)str[index]-(int)str2[index]);
            
        }
    }

}

//program 7
//implement str_cat

int str_cat()
{
    char str[20],str2[20],*ptr,*ptr2;
    int index,count=0,count2=0,index2;

    printf("Enter the two strings:");
    scanf("%s",str);
    scanf(" %s",str2);

    ptr=str;
    ptr2=str2;

    count=strlen(str);
    count2=strlen(str2);
    

    for(index=count,index2=0;index<=count+count2,index2<count2+1;index++,index2++)
    {
        *(ptr+index)=*(ptr2+index2);
    }
    printf("the concatinated string is = %s",str);
}


//program 8
//implement strncat()

int str_ncat()
{
    char str[20],str2[20],*ptr,*ptr2;
    int index,count=0,count2=0,index2,n;

    printf("Enter the two strings:");
    scanf("%s",str);
    scanf(" %s",str2);

    printf("Enter the size to concat:");
    scanf("%d",&n);

    ptr=str;
    ptr2=str2;
    

    count=strlen(str);
    count2=strlen(str2);
    

    for(index=count,index2=0;index2<n;index++,index2++)
    {
        *(ptr+index)=*(ptr2+index2);
    }
    printf("the concatinated string is = %s",str);
}

//program 9
//program to concatinate source_string to des_string upto specified number in reverse order

int str_cat_upto_n()
{
    char str[20],str2[20],*ptr,*ptr2;
    int index,count=0,count2=0,index2,n;

    printf("Enter the two strings:");
    scanf("%s",str);
    scanf(" %s",str2);

    printf("Enter the size to concat:");
    scanf("%d",&n);

    count=strlen(str);
    count2=strlen(str2);

    ptr=&str[count];
    ptr2=&str2[count2-1];

    while(*ptr2!=str2[count2-n-1])
    {
        *ptr=*(ptr2+index2);
        ptr++;
        ptr2--;
    }
    printf("the concatinated string is = %s",str);
}

//program 10
// program to find name in a list of names 

int find_name()
{
    char list[5][5]={{"raju"},{"ben"},{"abin"},{"alex"},{"don"}},*ptr;
    int index,x,count=0;
    
    ptr=list[0];
    x=strcmp("abin",ptr);
    while(x!=0 && count!=5)
    {
        count++;
        ptr=list[count];
        x=strcmp("abin",ptr);
    }
    if(count==5)
        printf("Not found");
    else
        printf("Abin is found at index %d",count+1);

}

//program 11
//to copy string array without using strcpy() 
void str_cpy(char str2[],char str[]);

int Str_cpy_main()
{
    char str[20],str2[20]="anto";
    

    printf("Enter the string:");
    scanf("%s",str);
    printf("string 1= %s\n",str);
    printf("string 2= %s\n",str2);

    str_cpy(str2,str);
    printf("string 2 after copy= %s",str2);
    
}

void str_cpy(char str2[],char str[])
{
    int count=0;
    // count=strlen(str);

    while(*(str+count)!='\0')
    {
        *(str2+count)=*(str+count);
        count++;
    }

}

//program 12
// to copy n char in reverse order

void str_cpy_n(char str2[],char str[],int n);

int str_cpy_n_main()
{
    char str[20],str2[20]="anto";
    int n;

    printf("Enter the string:");
    scanf("%s",str);
    printf("enter the number of char to copy");
    scanf("%d",&n);
    printf("string 1= %s\n",str);
    printf("string 2= %s\n",str2);

    str_cpy_n(str2,str,n);
    printf("string 2 after copy= %s",str2);
    
}

void str_cpy_n(char str2[],char str[],int n)
{
    int count=0,count2;
    count=strlen(str);
    
    count--;
    count2=count;
    while(*(str+(count2-count))!='\0' && n>0)
    {
        *(str2+(count2-count))=*(str+count);
        n--;
        count--;
    }

}

//program 13
// to valide password having #,_,& and a number

int validate(char pass[]);

int main()
{
    char pass[10]="#222ew";
    int val;
    val=validate(pass);
    if(val)
        printf("Valid password");
    else
        printf("Invalid password");
}

int validate(char pass[])
{
    int num=0,sp=0,count=0,ch=0;
    int length=strlen(pass);
    if(length<6)
    {
        printf("atleast 6 char required\n");
        return(0);
    }
    if(length>8)
    {
        printf("max 8 char\n");
        return(0);
    }
    
    for(;count<length;count++)
    {
        if(*(pass+count)=='#' || *(pass+count)<='&' || *(pass+count)<='_' )
            sp=1;
        if((int) *(pass+count)>=48 && (int) *(pass+count)<=57 )
            num=1;
        if((*(pass+count)>='a' && *(pass+count)<='z' ) || (*(pass+count)>='A' && *(pass+count)<='Z' ))
            ch=1;
    }
    
    if(num==0 || ch==0 || sp==0)
        return(0);
    else    
        return(1);

}