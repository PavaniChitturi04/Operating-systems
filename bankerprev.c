#include<stdio.h>
void main()
{
int max[10][10],a1[10][10],av[10],i,j,k,m,n,ne[10][10],flag=0;
printf("\nEnter the matrix dimensions:");
scanf("%d%d",&m,&n);
printf("\n Enter max need:\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&max[i][j]);
}
}
printf("\n Enter allocated matrix:\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a1[i][j]);
}
}
printf("\n The remaining need:\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
ne[i][j]=max[i][j]-a1[i][j];
printf("\t%d",ne[i][j]);
}
printf("\n");
}
printf("\n Enter available matrix:\n");
for(i=0;i<n;i++)
scanf("%d",&av[i]);
printf("\n Maximum matrix\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("\t%d",max[i][j]);
}
printf("\n");
}  
printf("\n Allocated matrix:\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("\t%d",a1[i][j]);
}
printf("\n");
}
printf("\n Available matrix:\n");
for(i=0;i<n;i++)
{
printf("%d\t",av[i]);
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
if(av[i]>=ne[i][j])
flag=1;
else
flag=0;
}
}
if(flag==0)
printf("\n Unsafe state");
else
printf("\n safe state");
}
