#include<stdio.h>
int main()
{
    int i,j,sum=0,a[2][3];
    printf("Enter elements of matrics");
    for(i=0;i<2;i++) 
    {
        for(j=0;j<3;j++)
        {
        scanf("%d",&a[i][j]);
        }
    }
    printf("Matrics is:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
            sum+=a[i][j];
        }
        printf("\n");
    }
    printf("\nsum=%d",sum);
}


