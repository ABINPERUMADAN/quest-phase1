#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"arr_lib.c"

void matadd(int mat1[3][3],int mat2[3][3],int size)
{
    // int mat1[10][10],mat2[10][10],mat3[10][10],intex1,intex2,row1,col1,row2,col2;
    int intex1,intex2;
    // printf("Enter the row and col for mat1:");
    // scanf("%d",&row1);
    // scanf("%d",&col1);

    // printf("Enter the row and col for mat2:");
    // scanf("%d",&row2);
    // scanf("%d",&col2);

    // if(!(row1==row2 & col1==col2))
    // {
    //     printf("Enter same number of rows and cols:");
    //     return(0);
    // }

    // printf("Enter the elements of mat1:");

    // for(intex1=0;intex1<row1;intex1++)
    // {
    //     for(intex2=0;intex2<col1;intex2++)
    //     {
    //         scanf("%d",&mat1[intex1][intex2]);
    //     }
    // }

    // printf("Enter the elements of mat2:");

    // for(intex1=0;intex1<row1;intex1++)
    // {
    //     for(intex2=0;intex2<col1;intex2++)
    //     {
    //         scanf("%d",&mat2[intex1][intex2]);
    //     }
    // }

    for(intex1=0;intex1<size;intex1++)
    {
        for(intex2=0;intex2<size;intex2++)
        {
            mat2[intex1][intex2]=mat1[intex1][intex2]+mat2[intex1][intex2];
        }
    }

    printf("3x3 matrix\n");

    for(intex1=0;intex1<size;intex1++)
    {
        for(intex2=0;intex2<size;intex2++)
        {
            printf("%d\t",mat2[intex1][intex2]);
        }
        printf("\n");
    }

}


int matmul()
{
    int mat1[10][10],mat2[10][10],mat3[10][10],intex1,intex2,intex3,row1,col1,row2,col2,sum=0;

    printf("Enter the row and col for mat1:");
    scanf("%d",&row1);
    scanf("%d",&col1);

    printf("Enter the row and col for mat2:");
    scanf("%d",&row2);
    scanf("%d",&col2);

    if(!(col1==row2))
    {
        printf("Enter same number of rows and cols:");
        return(0);
    }

    printf("Enter the elements of mat1:");

    for(intex1=0;intex1<row1;intex1++)
    {
        for(intex2=0;intex2<col1;intex2++)
        {
            scanf("%d",&mat1[intex1][intex2]);
        }
    }

    printf("Enter the elements of mat2:");

    for(intex1=0;intex1<row2;intex1++)
    {
        for(intex2=0;intex2<col2;intex2++)
        {
            scanf("%d",&mat2[intex1][intex2]);
        }
    }

    for(intex1=0;intex1<row1;intex1++)
    {
        for(intex2=0;intex2<col1;intex2++)
        {
            for(intex3=0;intex3<row2;intex3++)
            {
                sum+=mat1[intex1][intex3]*mat2[intex3][intex2];
            }
            mat3[intex1][intex2]=sum;
            sum=0;
        }
    }

    printf("resultant matrix\n");

    for(intex1=0;intex1<row1;intex1++)
    {
        for(intex2=0;intex2<col2;intex2++)
        {
            printf("%d\t",mat3[intex1][intex2]);
        }
        printf("\n");
    }
}

int twod_deter(int mat[2][2])
{
    int deter,index=0,index2=0,left=1,right=1;

    for(;index<2;index++)
    {
        for(index2=0;index2<2;index2++)
        {
            if(index==index2)
            {
                left*=mat[index][index2];
                // printf("left %d",mat[index][index2]);
            }
            else{
                right*=mat[index][index2];
                // printf("left %d",mat[index][index2]);
            }
        }
    }
    // printf("Determinent=%d",left-right);
    return(left-right);
}


int main()
{

    int mat[3][3]={{1,2,3},{4,5,6},{7,8,9}},mat3[3][3]={{0,0,0},{0,0,0},{0,0,0}},*ptr2,mat2[2][2]={0,0,0,0},index1,index2,index3,index4,count=0,det;
    int res=0,*ptr3,count3=0;
    ptr2=mat2;
    ptr3=mat3;
    for(index1=0;index1<3;index1++)
    {
        for(index2=0;index2<3;index2++)
        {
            if(!((index1+index2)%2==0))
                mat[index1][index2]*=-1;
        }
    }
    for(index1=0;index1<3;index1++)
    {
        for(index2=0;index2<3;index2++)
        {
            for(index3=0;index3<3;index3++)
            {
                for(index4=0;index4<3;index4++)
                {
                    if(!(index3==index1 || index4==index2))
                    {
                        *(ptr2+count)=mat[index3][index4];
                        // printf("%d",count);
                        
                        count++;
                    }
                }
            } 
            // for(int i=0;i<2;i++)
            // {
            //     for(int j=0;j<2;j++)
            //     {
            //         printf("%d\t",mat2[i][j]);
            //     }
            //     printf("\n");
            // }

             
            det= twod_deter(mat2);
            det*=mat[index1][index2];
            *(ptr3+count3)=det;

            count3++;
            count=0; 
        }
        // printf("determinentof row%d=%d \n",index1+1,det);
        // det*=mat[index1][index2];
        // res+=det;
        // det=-1; 
        
        // count=0;       
    }
    // printf("determinent=%d",res);
    for(index1=0;index1<3;index1++)
    {
        for(index2=0;index2<3;index2++)
        {
            printf("%d\t",mat3[index1][index2]);
        }
        printf("\n");
    }

    for(index1=0;index1<3;index1++)
    {
        for(index2=0;index2<3;index2++)
        {
            mat[index2][index1]=mat3[index1][index2];
        }
    }

    printf("transpose matrix \n");
    for(index1=0;index1<3;index1++)
    {
        for(index2=0;index2<3;index2++)
        {
            printf("%d\t",mat[index1][index2]);
        }
        printf("\n");
    }
    


}