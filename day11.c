#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>


//program 1
//to implement strchr()

int str_chr(char *ptr,char ch);

int str_chr_main()
{
    char str[20]={"abcad12134@#@$"},*ptr,ch;
    int pos;

    printf("Enter the char to find: ");
    scanf(" %c",&ch);

    ptr=str;
    pos= str_chr(ptr,ch);

    if(pos==15)
        printf("char not found");
    else
    {
        printf("char found at %d\n",pos+1);
        printf("address %x\n",&str[pos]);
        printf("char is = %c",str[pos]);
    }


}

int str_chr(char *ptr,char ch)
{
    int index=0;
    
    while(*ptr!='\0')
    {
        if(*ptr==ch)
            break;
        
        ptr++;
        index++;
    }
    
    return(index);
}

//program 2
//replace first and last occurace of char with '*' and rest of that char with '$'

int encode()
{
    char str[20]={"bcdabadeba"},*ptr,ch,*first,*last;
    int flag=0;

    printf("Enter the char to replace: ");
    scanf(" %c",&ch);

    ptr=str;
    first=strchr(str,ch);
    last=strrchr(str,ch);

    if(first!=NULL || last!=NULL )
    {
        *first='*';
        *last='*';

        ptr=first+1;
        while(ptr!=last)
        {
            if(*ptr==ch)
            {
                flag=1;
                *ptr='$';
            }
            ptr++;
            
        }
    }
    if(flag==0 && (first==NULL || last==NULL))
        printf("char not found");
    else    
        printf(" %s",str);


}

//program 3
//to find vowels
int find_vowels()
{
    char str[20]={"abecdabdba"},vowel[5]={"aeiou"},*ptr,*first;
    ptr=vowel;
    int a;

    while(*ptr!='\0')
    {
        first=strchr(str,*ptr);
        if(first!=NULL)
            break;
        
        ptr++;
    }
    

    if(*ptr=='\0')
        printf("vowel not found");
    else
    {
        a=first-str;
        printf("vowel found at %d and address=%x",a+1,first);
    }
}

//program 4
//to print the number of occurance of char of input string in given string 

int freq_char()
{
    char str[20]={"abecdabdba"},str2[20],*ptr,*first;
    int freq[120]={0};
    
    int a;

    printf("Enter a string:");
    scanf(" %s",str2);

    ptr=str2;

    while(*ptr!='\0')
    {
        first=strchr(str,*ptr);
        
        while(first!=NULL)
        {
            freq[*ptr]++;
            *first='*';
            first=strchr(str,*ptr);
        }

        ptr++;
    }

    ptr=str2;
    // printf(" %s",str);

    while(*ptr!='\0')
    {
        printf("occurace of %c is= %d\n",*ptr,freq[*ptr]);
        ptr++;
    }
    

}

//program 5
//practice with strstr() to find the location of a substring

int str_str()
{
    char str[]={"trivendram is now thiruvananthapuram"};
    char sub_str[10];
    char *ptr;

    gets(sub_str);

    ptr=strstr(str,sub_str);

    if(ptr!=NULL)
    {
        puts(ptr);
    }
    else
        printf("sub string not found");
}

//program 6
//count number of words in string using strtok
int number_of_words()
{
    char str[]="trivendram is thiruvananthapuram",*token,delimeter[]= " ";
    int count=0;
    token=strtok(str,delimeter);

    while(token != NULL)
    {
        count++;
        token=strtok(NULL,delimeter);
    }
    printf("The number of words is the string is %d",count);

}

// program 7
// seperate words with ','
int string_to_csv()
{
    char str[]="trivendram is now thiruvananthapuram",*token,delimeter[]= " ",buffer[30];
    int count=0;

    token=strtok(str,delimeter);
    sprintf(buffer,"%s",token);
    
    token=strtok(NULL,delimeter);
    while(token != NULL)
    {
        sprintf(buffer,"%s,%s",buffer,token);
        token=strtok(NULL,delimeter);
    }

    puts(buffer);

}

//program 8
//assignment
int main()
{
    char str[]="trivendram is now thiruvananthapuram",*token,delimeter[]= " ",buffer[30];
    char *temp,str2[4][30];
    int count=0;

    token=strtok(str,delimeter);
    while(token != NULL)
    {
        str2[count]=token;
        token=strtok(NULL,delimeter);  
        count++; 
    }
    
}