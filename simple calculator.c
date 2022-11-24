#include<stdio.h>
int main()
{
    int a,b,d;
    char c;
    while (1)
    {
        printf("enter the oparator(+,-,*,/) to retminate enetr:@ \n");
        scanf(" %c", &c);
        if(c=='@')
        break;
        printf("%c",c);
        printf("enter the two numbers\n");
        scanf("%d %d",&a,&b);
        switch (c)
        {
        case '+':
            d=a+b;
            printf("a+b=%d \n",d);
            break;
        
        default:
            printf("enter the valid oparator\n");
        break;
        }

    }
    
    return 0;


}