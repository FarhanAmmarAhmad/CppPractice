// You have the radius of a circle with the center in point (0,0).

// Write a function that calculates the number of points in the circle where (x,y) - the cartesian coordinates of the points - are integers.

// Example: for radius = 2 the result should be 13.

// 0 <= radius <= 1000

#include <iostream>

static int pointsNumber(int radius)
{
    int points = 0;
    for (int x = -radius; x <= radius; x++)
    {
        for (int y = -radius; y <= radius; y++)
        {
            if (x * x + y * y <= radius * radius)
            {
                points++;
            }
        }
    }
    return points;
}

int main()
{
    int radius = 0;
    printf("Enter the radius: ");
    scanf("%d", &radius);
    printf("%d\n", pointsNumber(radius));
    return 0;
}