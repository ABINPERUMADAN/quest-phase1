#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void arr()
{
        int arr[5];

    printf("Enter the elements in the array:");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Elements are\n");
        for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
        printf("address :%x \n",&arr[i]);
    }
    printf("Size of array:%d",sizeof(arr));
    printf("\narray:%x",&arr);
}

void asciisum()
{
    char carr[5];
    int traverse,sum;

    printf("Enter the elements in the array:");
    for(traverse=0;traverse<5;traverse++)
    {
        scanf(" %c",&carr[traverse]);
    }



    for(traverse=0;traverse<5;traverse++)
    {
        sum+=(int)carr[traverse];
    }
    printf("Sum of the ascii values of 5 elements is:%d",sum);

}

void search()
{
    int arr[5],intex,selement=0;

    printf("Enter the elements in the array:");
    for(intex=0;intex<5;intex++)
    {
        scanf("%d",&arr[intex]);
    }

    printf("Enter an element to search:");
    scanf("%d",&selement);
    intex=0;
    while(selement!=arr[intex])
    {
        
        intex++;
    }
    if(intex<=5)
    {
        printf("Element found at %d and address is %x",intex+1,&arr[intex]);
    }
    else{
        printf("Element not found!!!");
    }
}

void dtoh(){
        int decval,flag,j,i;
    char arr[5];
    int intex=0;

    printf("Enter the dec value:");
    scanf("%d",&decval);
    int a=decval;
    while(decval>=16)
    {

        arr[intex]=decval%16;
        // printf("%d",arr[intex]);
        decval/=16;
        intex++; 
        flag=0;  
    }
    if (flag==0)
    {
        arr[0]=decval;
        j=0;
    }
    else{
        intex--;
        j=intex;
    }
    printf("Hex of %d is:",a);
    
    // printf("%d",flag);
    for(;intex>=0;intex--)
    {
        // printf("in for");
        if(decval>9 || decval<=16)
        {
            arr[intex]=(char)decval+55;
        }
        // if(!(decval>9 || decval<=16))
        // {
        //     arr[intex]=(char)decval+48;

        // }
    }
    for(i=0;i==j;i++)
    {
        printf("hi");
        printf(" %c",arr[i]);
        // printf(" %d",arr[intex]);
    }
}

void rotate()
{
    int rotation,temp,arr[20],intex1,intex2,size;
    char choice='y';

    printf("enter the size of the array");
    scanf("%d",&size);

    for(intex1=0;intex1<size;intex1++)
    {
        scanf("%d",&arr[intex1]);
    }

    while(choice=='y')
    {

        printf("Enter the number of rotations:");
        scanf("%d",&rotation);

        for ( intex1 = 0; intex1< rotation; intex1++) 
        {  
            temp = arr[0];  
            for (intex2 = 0; intex2 < size-1; intex2++) 
            {  
            arr[intex2] = arr[intex2 + 1];  
            }  
            arr[size-1] = temp;  
        }

        printf("array after rotation:");

        for(intex1=0;intex1<size;intex1++)
        {
            printf("%d ",arr[intex1]);
        }

        printf("\ndo you want to continue:");
        scanf(" %c",&choice);
    }

}
 
void find()
{
    char carr[20],element;
    int intex1,size,count=0;

    printf("Enter the size of the array:");
    scanf("%d",&size);

    for(intex1=0;intex1<size;intex1++)
    {
        scanf(" %c",&carr[intex1]);
    }

    printf("Enter the element to be found:");
    scanf(" %c",&element);

    for(intex1=0;intex1<size;intex1++)
    {
        if(element==carr[intex1])
        {
            count++;
        }
    }
    printf("count:%d",count);

}

void addinarray()
{
    int arr[50];  
    int pos, intex, size,num;

    printf ("Enter the size of the array:");  
    scanf (" %d", &size);

    printf ("Enter %d elements in array:\n ", size);  
        
    for (intex = 0; intex < size; intex++ )  
    {     
        scanf (" %d", &arr[intex]);  
    }  

    printf("Enter the position to insert:");  
    scanf ("%d", &pos);

    printf("Enter the number to insert:");
    scanf("%d",&num);

    for (intex = size; intex > pos; intex--)  
        {  
            arr[intex] = arr[intex-1];
        }  
        arr[intex]=num;
          
        printf ("result:");  
            
        for (intex = 0; intex< size+1; intex++)  
        {    
            printf (" %d \n", arr[intex]);  
        }  
}

void largest()
{
    int arr[50];  
    int pos, intex, size,largest=0;

    printf ("Enter the size of the array:");  
    scanf (" %d",&size);

    printf ("Enter %d elements in array:\n",size);  
        
    for (intex = 0; intex < size; intex++ )  
    {     
        scanf (" %d", &arr[intex]); 
        if(arr[intex]>largest)
        {
            largest=arr[intex];
            pos=intex;
        } 
    }  

    printf("Largest element is:%d \n",largest);
    printf("Index is:%d \n",pos);
    printf("Address is:%x \n",&arr[pos]);
    
}

void appentarray()
{
    int arr1[50],arr2[50],sum=0;  
    int pos, intex1,intex2, size,size2,largest=0;

    printf ("Enter the size of the array1:");  
    scanf (" %d",&size);
    printf ("Enter the size of the array2:");  
    scanf (" %d",&size2);

    printf ("Enter %d elements in array1:\n",size);  
        
    for (intex1 = 0; intex1 < size; intex1++ )  
    {     
        scanf (" %d", &arr1[intex1]); 
    }  
    printf ("Enter %d elements in array2:\n",size2);  
        
    for (intex1 = 0; intex1 < size2; intex1++ )  
    {     
        scanf (" %d", &arr2[intex1]); 
    }  

    for(intex1=size,intex2=0;intex1<size+size2,intex2<size2;intex1++,intex2++)
    {
        arr1[intex1]=arr2[intex2];
    }

    printf("result:");
    for(intex1=0;intex1<size+size2;intex1++)
    {
        printf("%d  ",arr1[intex1]);
        sum+=sizeof(arr1[intex1]);

    }
    
    // printf("\n size of array:%d",sum);
    // printf("\n size of array:%d",sizeof(arr1));
    
}

int main()
{
    char carr[30];
    carr[0]=0x30;
    int b=0x41;
    for(int i=1;i<9;i++)
    {
        carr[i]=(int)carr[i-1]+1;
    }
    for(int i=0;i<9;i++)
    {
        printf(" %c\t",carr[i]);
    }
}