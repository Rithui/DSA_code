#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

void getTime(struct Time *t) {
    printf("Enter hours, minutes, and seconds respectively: ");
    scanf("%d %d %d", &t->hours, &t->minutes, &t->seconds);
}

void printTime(struct Time t) {
    printf("%02d:%02d:%02d", t.hours, t.minutes, t.seconds);
}

int main() {
    struct Time startTime, stopTime, diffTime;

    printf("Enter start time:\n");
    getTime(&startTime);

    printf("Enter stop time:\n");
    getTime(&stopTime);

    // Calculate the difference
    if (stopTime.seconds < startTime.seconds) {
        stopTime.seconds += 60;
        stopTime.minutes--;
    }
    diffTime.seconds = stopTime.seconds - startTime.seconds;

    if (stopTime.minutes < startTime.minutes) {
        stopTime.minutes += 60;
        stopTime.hours--;
    }
    diffTime.minutes = stopTime.minutes - startTime.minutes;

    diffTime.hours = stopTime.hours - startTime.hours;

    printf("TIME DIFFERENCE: ");
    printTime(stopTime);
    printf(" - ");
    printTime(startTime);
    printf(" = ");
    printTime(diffTime);

    return 0;
}

