#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"arr_lib.c"



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
    // printf("%d,%d\n",left,right);
    // printf("Determinent=%d",left-right);
    return(left-right);
}

int threed_det(int mat[3][3])
{
    int mat4[3][3],mat3[3][3]={{0,0,0},{0,0,0},{0,0,0}},*ptr2,mat2[2][2]={0,0,0,0},index1,index2,index3,index4,count=0,det;
    int res=0,*ptr3,count3=0;
    ptr2=mat2;
    // ptr3=mat3;
    for(index1=0;index1<1;index1++)
    {
        for(index2=0;index2<3;index2++)
        {
            if(!((index1+index2)%2==0))
                mat[index1][index2]*=-1;
        }
    }
    for(index1=0;index1<1;index1++)
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
            // printf("%d\n",det);
            // mat4[index1][index2]=det;
            det*=mat[index1][index2];
            res+=det;
            // printf("%d\n",res);
            det=1;
            
            // *(ptr3+count3)=det;

            // count3++;
            count=0; 
        }
              
    }
    return(res);

}


int inverse()
{

    int mat[3][3]={{1,2,3},{4,5,6},{7,8,9}},mat4[3][3],mat3[3][3]={{0,0,0},{0,0,0},{0,0,0}},*ptr2,mat2[2][2]={0,0,0,0},index1,index2,index3,index4,count=0,det;
    int res=0,res1,*ptr3,count3=0;
    ptr2=mat2;
    ptr3=mat3;
    res1=threed_det(mat);
    for(index1=0;index1<3;index1++)
    {
        for(index2=0;index2<3;index2++)
        {
            if(!((index1+index2)%2==0))
                mat[index1][index2]*=-1;
        }
    }
    for(index1=0;index1<1;index1++)
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
                        // printf("%d\n",mat[index3][index4]);
                        
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
            // mat4[index1][index2]=det;
            // det*=mat[index1][index2];
            
            *(ptr3+count3)=det;
            // printf("%d\n",det);
            

            count3++;
            count=0; 
        }
        // printf("determinentof row%d=%d \n",index1+1,det);
        // det*=mat[index1][index2];
        // res+=det;
        // det=-1; 
        
        count=0;       
    }
    printf("cofactor matrix\n");
    for(index1=0;index1<3;index1++)
    {
        for(index2=0;index2<3;index2++)
        {
            printf("%d\t",mat3[index1][index2]);
        }
        printf("\n");
    }

    // for(index1=0;index1<3;index1++)
    // {
    //     for(index2=0;index2<3;index2++)
    //     {
    //         mat[index2][index1]=mat3[index1][index2];
    //     }
    // }
    printf("det=%d\n",res1);
    printf("Inverse matrix \n");

    if(res1==0)
    {
        printf("no valid matrix");
    }
    else{

    
        for(index1=0;index1<3;index1++)
        {
            for(index2=0;index2<3;index2++)
            {
                printf("%f\t",(float)mat3[index2][index1]/res1);
            }
            printf("\n");
        }
    }
    


}

int twod_with_ptr()
{
    int arr[3][3],largest=0;

    printf("Enter the elements:");
    for(int i=0;i<(3*3);i++)
    {
        scanf("%d",(*(arr)+i));
    }


    for(int i=0;i<(3*3);i++)
    {
        // printf("%d\n",*(*(arr)+i));
        if(*(*(arr)+i)>largest)
            largest=*(*(arr)+i);
    }

    printf("Largest=%d",largest);
}

int col_avg()
{
    int arr[3][3],largest=0,index1,index2,avg=0;

    printf("Enter the elements:\n");
    for(index1=0;index1<(3*3);index1++)
    {
        scanf("%d",*(arr)+index1);
    }

    for(index1=0;index1<3;index1++)
    {
        for(index2=0;index2<3;index2++)
        {
            avg+=*(*(arr+index2)+index1);
        }
        printf("Average of col %d=%f",index1,(float)avg/3);
        avg=0;
        printf("\n");
    }
        
}

int sq_cube_mat()
{
    int arr[3][3],index1,index2,mid,square,cube;

    printf("Enter the elements:\n");
    
    scanf("%d",&mid);

    if(mid==0 || mid<0)
    {
        printf("Invalid number");
        return(0);
    }
    square=mid*mid;
    cube=mid*mid*mid;

    for(index1=0;index1<3;index1++)
    {
        for(index2=0;index2<3;index2++)
        {
            if(index1==1&index2==1)
            {
                *(*(arr+index1)+index2)=mid;
            }
            else if((index1+index2)%2==0)
                *(*(arr+index1)+index2)=square;
            else
                *(*(arr+index1)+index2)=cube;

        }
        
    }

    for(index1=0;index1<3;index1++)
    {
        for(index2=0;index2<3;index2++)
        {
            printf("%d\t",*(*(arr+index1)+index2));
        }
        printf("\n");
    }

}

int number_freq()
{
    int arr[10],arr2[100]={0},largest=0,index1,index2,pos;

    printf("Enter the elements:\n");
    for(index1=0;index1<10;index1++)
    {
        scanf("%d",arr+index1);
        arr2[*(arr+index1)]+=1;
        // printf("%d",*(arr2+*(arr+index1)));
        if(largest<*(arr2+*(arr+index1)))
        {
            largest=*(arr2+*(arr+index1));
            pos=index1;
        }
    }

    printf("Largest number of occurance is %d:%d",*(arr+pos),*(arr2+*(arr+pos)));
    
}

int main()
{
    int signal1[4]={1,2,3,4},signal2[4]={1,2,2,1},product[4],sum[8]={0},index1,index2,index4,last=0;
    int index3,flag=0;

    // for(index1=0;index1<4;index1++)
    // {
    for(index2=0;index2<4;index2++)
    {
        printf("%d \n",index2);
        for(index3=0;index3<4;index3++)
        {
            if(flag==1)
                break;
            product[index3]=signal1[index3]*signal2[index2];
            printf("%d  ",product[index3]);
            
        }
        printf("\n");
        
        if(index2==0)
        {
            for(int i=0;i<4;i++)
            {                   
                sum[i]=product[i];
                // printf("%d  ",sum[i]);
                last+=6;
            }
            printf("\n");
        }
        else
        {
            for(int i=0,index4=index2;index4<last;i++,index4++)
            {
                sum[index4]+=product[i];
                printf("%d  ",sum[i]);
                
            }
            last++;
            printf("\n");
        }
        if(index2==3)
        {
            flag=1;
        }        
    }
    // }
    for(index1=0;index1<8;index1++)
    {
        printf("%d\t",sum[index1]);
    }
}
