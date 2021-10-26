#include<stdio.h>
int main()
{
    int m1,n1,m2,n2,i,j,k;
    printf("Enter no of rows for first matrix:\n");
    scanf("%d",&m1);    
    printf("Enter no of columns for first matrix:\n");
    scanf("%d",&n1); 
    int a[m1][n1];
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter no of rows for second matrix:\n");
    scanf("%d",&m2);    
    printf("Enter no of columns for second matrix:\n");
    scanf("%d",&n2);
    int b[m2][n2];
    for(i=0;i<m2;i++)
    {
        for(j=0;j<n2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    if(n1==m2)
    {
    int c[m1][n2];
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n2;j++)
        {
            c[i][j]=0;
            for(k=0;k<n1;k++)
            {
                c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
            }
        }
    }
    printf("multiplied matrix: \n");
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n2;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    }
    else
    {
        printf("matrix cannot be multiplied");
    }
    
}