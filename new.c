#include<stdio.h>
int sub(int a,int b)
{
int res;
res=a-b;
return res;
}
int main()
{
    int a,b;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    
    printf("the value:%d",sub(a,b));
    return(0);

}