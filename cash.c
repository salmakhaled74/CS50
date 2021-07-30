#include <stdio.h>
#include <math.h>
#include <cs50.h>

int quarters = 25, dimes = 10, nickels = 5, pennies = 1;
// function to calculate the largest coin for the change
int largest(int *m)
{
    int x = 0;
    if (*m >= quarters)
    {
        x = quarters;
    }
    else if (*m >= dimes && *m < quarters)
    {
        x = dimes;
    }
    else if (*m >= nickels && *m < quarters && *m < dimes)
    {
        x = nickels;
    }
    else if (*m >= pennies && *m < quarters && *m < dimes && *m < dimes)
    {
        x = pennies;
    }
    // return the largest coin
    return x;
}
int main()
{
    float n;
    int cnt = 0;
    // accept positive numbers
    do
    {
        n = get_float("Change owed: ");
    }
    while (&n < 0);
    int m = round(n * 100);
    // decrease the change till it reach zero
    while (m != 0)
    {
        largest(&m);
        m = m - largest(&m);
        cnt++;
    }
    //print the change 
    printf("%d", cnt);
}
