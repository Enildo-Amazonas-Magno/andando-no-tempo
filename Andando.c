#include <stdio.h>
int main()
{
    int credit1, credit2, credit3;
    scanf("%d\n%d\n%d", &credit1, &credit2, &credit3);
    if(credit1+credit2==credit3||credit1+credit3==credit2||credit2+credit3==credit1||credit1==credit2||credit3==credit2||credit3==credit1)printf("S");
    else printf("N");
    return 0;
}