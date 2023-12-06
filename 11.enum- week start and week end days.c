#include<stdio.h>
enum day{monday, tuesday, wednesday, thursday, friday, saturday};
int main()
{
    enum day week_st, week_ed;

    printf("enter the start of the week (0=monday,1=tuesday,2=wednesday,3=thursday,4=friday,5=saturday,6=sunaday): ");
    scanf("%d", &week_st);

    printf("enter the end of the week (0=monday,1=tuesday,2=wednesday,3=thursday,4=friday,5=saturday,6=sunaday): ");
    scanf("%d", &week_ed);

    if(week_st == tuesday)
    {
        week_ed = saturday;
    }
    else if(week_st == monday)
    {
        week_ed = friday;
    }
    else
    printf("enter valid week start day\n");

    printf("user has entered following choices: \n");

    printf("start of the week: %d\n",week_st);
    printf("end of the week: %d\n", week_ed);

    return 0;
}