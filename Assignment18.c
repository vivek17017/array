#include<stdio.h>
int main1()
{
    int arr[10],i,sum=0;
    printf("Enter 10 numbers\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++)
        sum=sum+arr[i];
    printf("Sum of given 10 numbers is %d",sum);
    return 0;
}

int main2()
{
    int arr[10],i,sum=0;
    printf("Enter 10 numbers\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++)
        sum=sum+arr[i];
    float avg=sum/10.0;
    printf("avg is is %f",avg);
    printf("\n");
    return 0;
}
int main3()
{
    int arr[10],i,sum_even=0,sum_odd=0;
    printf("Enter 10 numbers\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++)
    {
        if(arr[i]%2==0)
            sum_even=sum_even+arr[i];
        else
            sum_odd=sum_odd+arr[i];
    }
    printf("sum of all even numbers is %d\n",sum_even);
    printf("sum of all odd numbers is %d\n",sum_odd);
    return 0;   
}

int main4()
{
    int arr[10],i,sum;
    printf("Enter 10 numbers\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    sum=arr[0];
    for(i=1;i<10;i++)
    {
        if(arr[i]>sum)
            sum=arr[i];
    }
    printf("greatest number is %d",sum);
}
int main5()
{
    int arr[10],i,sum;
    printf("Enter 10 numbers\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    sum=arr[0];
    for(i=0;i<10;i++)
    {
        if(arr[i]<sum)
            sum=arr[i];
    }
    printf("smallest number is %d",sum);
}

int main6()
{
    int arr[10],i=0,sum=0;
    printf("Enter 10 numbers\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int r=1;r<10;r++)
    {
        for(i=0;i<10-r;i++)
        {
            int swap;
            if(arr[i]>arr[i+1])
                {
                    swap=arr[i];
                    arr[i]=arr[i+1];
                    arr[i+1]=swap;
                }

        }
    }
    for(i=0;i<10;i++)
        printf("%d ",arr[i]);
}





int main9()
{
    int arr[10],i=0,sum=0;
    printf("Enter 10 numbers\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int r=1;r<10;r++)
    {
        for(i=0;i<9-r;i++)
        {
            int swap;
            if(arr[i]<arr[i+1])
                {
                    swap=arr[i];
                    arr[i]=arr[i+1];
                    arr[i+1]=swap;
                }

        }
    }
    for(i=0;i<10;i++)
        printf("%d ",arr[i]);
}


int main10()
{
    int arr[5],b[5],i,sum=0;
    printf("Enter 10 numbers\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter 10 numbers\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<5;i++)
    {
        int swap;
        swap=arr[i];
        arr[i]=b[i];
        b[i]=swap;

    }
    for(i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n\n");
    for(i=0;i<5;i++)
    {
        printf("%d ",b[i]);
    }
}

int main7()
{
    int arr[10],i,sum,second_max,index;
    printf("Enter 10 numbers\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    if(arr[0]>arr[1])
        {
            sum=arr[0];
            second_max=arr[1];
        }
    else
        {
            sum=arr[1];
            second_max=arr[0];
        }   
    for(i=2;i<5;i++)
    {
        if(arr[i]>sum)
            {
                
                second_max=sum;
                sum=arr[i];
                
            }
        else
        {
            if(second_max<arr[i])
            second_max=arr[i];
        }
        
    }
    printf("Second max is %d",second_max);
}


int main8()
{
    int arr[10],i,small,second_small;
    printf("Enter 10 numbers\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    if(arr[0]<arr[1])
        {
            small=arr[0];
            second_small=arr[1];
        }
    else
        {
            small=arr[1];
            second_small=arr[0];
        }   
    for(i=2;i<5;i++)
    {
        if(arr[i]<small)
            {
                
                second_small=small;
                small=arr[i];
                
            }
        else
        {
            if(second_small>arr[i])
            second_small=arr[i];
        }
        
    }
    printf("Second small is %d",second_small);
}