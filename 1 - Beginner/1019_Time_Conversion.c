/*Read an integer value, which is the duration in seconds of a certain event in a factory, and inform it expressed in hours:minutes:seconds.

Input
The input file contains an integer N.

Output
Print the read time in the input file (seconds) converted in hours:minutes:seconds like the following example.
*/

#include <stdio.h>

int main(void)
{
    int seconds, minutes, hours;

    scanf("%d", &seconds);
    minutes = seconds/60;
    hours = minutes/60;
    seconds = seconds % 60;
    minutes = minutes % 60;

    printf("%d:%d:%d", hours, minutes, seconds);

    return (0);
}