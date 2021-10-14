#include <stdio.h>
int student_marks()
{
    int subject1 , subject2 , subject3 , subject4 , subject5 ;
    printf("\n enter subject 1 marks : ");
    scanf("%d",&subject1);
    printf("\n enter subject 2 marks : ");
    scanf("%d",&subject2);
    printf("\n enter subject 3 marks : ");
    scanf("%d",&subject3);
    printf("\n enter subject 4 marks : ");
    scanf("%d",&subject4);
    printf("\n enter subject 5 marks : ");
    scanf("%d",&subject5);
    return subject1+subject2+subject3+subject4+subject5;
}
int calculator()
{
    double percentage;
    percentage = student_marks()*100/500;
    return percentage;
}
int main()
{
    int ans;
    double percent;
    printf("enter '1' to calculate marks or '0' to exit");
    scanf("%d",&ans);
    if (ans)
    {
        printf("you have choosen to calculate :)");
        percent = calculator();
        if ( percent>33)
        {
            printf("\n student passed with : %lf percentage",percent);
        }
        else
            printf("\n student failed by : %lf percentage",percent);    
    }
    else
        printf("program terminated :)");
        return 0;
}