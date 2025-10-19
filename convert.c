#include <stdio.h>
#define MAXNUM 5

void mile2km(float local_array[]);

int main(void)
{
    float miles[MAXNUM];
    int i;
    printf("Enter %d distance values in miles:\n", MAXNUM);
    for (i = 0; i < MAXNUM; i++) {
        printf("mile[%d] = ", i);
        scanf("%f", &miles[i]);
    }
    mile2km(miles);
    return 0;
}

void mile2km(float local_array[])
{
    int i;
    printf("\nConverted distances (in kilometers):\n");
    for (i = 0; i < MAXNUM; i++)
        printf("%.2f miles = %.2f km\n", local_array[i], local_array[i] * 1.6093);
}
