#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void selection()
{
    int intex1,intex2,largest=0,size,arr[20],temp,pos;

    printf("enter the size of the array");
    scanf("%d",&size);

    printf("Enter the elements:");

    for(intex1=0;intex1<size;intex1++)
    {
        scanf("%d",&arr[intex1]);
    }

    for(intex1=0;intex1<size-1;intex1++)
    {
        for(intex2=intex1;intex2<size;intex2++)
        {
            if(arr[intex2]>largest)
            {
                largest=arr[intex2];
                pos=intex2;
            }
        }
        temp=arr[pos];
        arr[pos]=arr[intex1];
        arr[intex1]=temp;
        largest=0;

        printf("array after every pass:");

        for(int i=0;i<size;i++)
        {
        printf("%d \t",arr[i]);
        }
        printf("\n");


    }

    printf("\nresult: ");

    for(intex1=0;intex1<size;intex1++)
    {
        printf("%d \t",arr[intex1]);
    }

}

void insertion()
{
    int intex1,intex2,largest=0,size,arr[20],temp,flag=0,intex3;

    printf("enter the size of the array");
    scanf("%d",&size);

    printf("Enter the elements:");

    for(intex1=0;intex1<size;intex1++)
    {
        scanf("%d",&arr[intex1]);
        for(intex2=0;intex2<intex1;intex2++)
        {
            if(arr[intex1]<arr[intex2])
            {
                temp=arr[intex1];
                for(intex3=intex1;intex3>intex2;intex3--)
                {
                    arr[intex3]=arr[intex3-1];

                }
                flag=1;

            }
            if(flag==1)
            {
                arr[intex2]=temp;
                flag=0;
                break;
            }
        }
        printf("array after every pass:");

        for(int i=0;i<=intex1;i++)
        {
        printf("%d \t",arr[i]);
        }
        printf("\n");
        


    }

    printf("\nresult: ");

    for(intex1=0;intex1<size;intex1++)
    {
        printf("%d \t",arr[intex1]);
    }
}

void nthpow()
{
    int arr[6]={10,5,4,6,2,3},sum=0,n,num,result;

    printf("Enter the power");
    scanf("%d",&n);

    printf("Enter the index of array element");
    scanf("%d",&num);

    printf("address= %x \n",(arr+num));

    num=*(arr+num);  

    result=pow(num,n);

    printf("result: %d",result);
    
    
}

void primeratio()
{
    int arr[10]={1},count=1,x=2,intex,flag=0;

    while(count!=10)
    {
        
        for(intex=2;intex<=x/2;intex++)
        {
            if(x%intex==0)
            {
                flag=1;
            }

        }
        if(flag==0)
        {
            *(arr+count)=x;
            count++;
            flag=0;
        }
        flag=0;
        x++;
    }
    printf("Result\n");

    for(intex=0;intex<9;intex++)
    {
        printf("Ratio:%d/%d= %.2f \n",*(arr+intex),*(arr+intex+1),(float)*(arr+intex)/ *(arr+intex+1));
    }

}

int main()
{
    int a=1,d,count=3;
    float num,arr[10]={1,2};

    while(count!=10)
    {
        d=arr[count-1]-arr[count-2];
        num=(float)1/(a+(count-1)*d);
        arr[count-1]=num;
        count++;
    }

    printf("Result:\n");

    for(count=0;count<10;count++)
    {
        printf("1 %f \n",(float)arr[count]);
    }
}