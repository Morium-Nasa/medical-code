#include <stdio.h>
int main()
{
    int avg = 0;
    int sum =0;
    int x=0;

    /* Array- declaration – length 4*/
    int num[4];

    /* We are using a for loop to traverse through the array
     * while storing the entered values in the array
     */
    for (x=0; x<4;x++)
    {
        printf("Enter the patient structure number %d \n", (x+1));
        scanf("%d", &num[x]);
    }
    for (x=0; x<4;x++)
    {
        sum = sum+num[x];
    }

    avg = sum/4;
    printf("Average of entered patient number is: %d", avg);
    return 0;
}
