#include <stdio.h>
int main()
{
    float eng;
    float sci;
    float maths;
    float sst;
    float hindi;
    char name;
    float total;
    float avg;
    int roll_no;
    printf("enter your roll no: ");
    scanf("%f", &roll_no);
    printf("enter marks in eng :");
    scanf("%f", &eng);
    printf("enter marks in sci :");
    scanf("%f", &sci);
    printf("enter marks in maths :");
    scanf("%f", &maths);
    printf("enter marks in eng :");
    scanf("%f", &sst);
    printf("enter marks in hindi :");
    scanf("%f", &hindi);

    printf("marks in \n English: %.2f \n Science: %.2f \n Maths: %.2f \n SST: %.2f \n Hindi: %.2f", eng, sci, maths, sst, hindi);
    total = eng + sci + maths + sst + hindi;
    printf("\nTotal marks is: %.2f", total);
    avg = total / 5.0;
    printf("\nAverage is: %.2f ", avg);
    if (avg >= 90)
    {
        printf("\nA GRADE");
    }

    if (avg >= 80)
    {
        printf("\nB GRADE");
    }
    if (avg >= 70)
    {
        printf("\nC GRADE");
    }
    if (avg >= 60)
    {
        printf("\nD GRADE");
    }
    if (avg >= 50)
    {
        printf("\nE GRADE");
    }
    else
    {
        printf("\nFAIL");
    }
}