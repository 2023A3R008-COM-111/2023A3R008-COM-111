#include<stdio.h>
int main ()

{
    int mrks ;
char grade;
    printf("Enter the student's marks: ");
    scanf("%d", &mrks);

    int index = mrks /10;
    switch(index)
    {
        case 10:
        case 9:
        case 8:
            grade = 'H';
            break ;
        case 7:
        case 6:
        grade = '1';
                break;
                case 5:
            grade = '2';
            break;
            default:
                case 4:
                    grade ='F';\
                    break;
    }
    printf("The grade obtained by the student is: %c\n",grade);
    return 0;
}
