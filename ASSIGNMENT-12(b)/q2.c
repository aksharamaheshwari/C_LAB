#include <stdio.h>
enum Result
{
    PASS,
    FAIL,
    DISTINCTION
};
enum Result getResult(float avg)
{
    if (avg >= 75)
        return DISTINCTION;
    else if (avg >= 40)
        return PASS;
    else
        return FAIL;
}
int main()
{
    float m1,m2,m3;
    float avg;
    enum Result r;
    printf("Enter marks in three subjects");
    scanff("%f%f%f",&m1,&m2,&m3);
    avg=m1+m2+m3/3.0;
    r= getResult(avg);
    printf("Average=%f\n",avg);
    result(r);
    return 0;
}
