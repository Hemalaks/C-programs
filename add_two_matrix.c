#include<stdio.h>
#include<conio.h>
int main()
{
    int a[5][5],b[5][5],c[5][5],i,j,m,n;
    printf("how many rows and columns =");
    scanf("%d%d",&m,&n);
    printf("\n enter first matrix =\n");
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    printf("enter second matrix =\n");
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        scanf("%d",&b[i][j]);
    printf("matrix after the addition =\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%d",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
