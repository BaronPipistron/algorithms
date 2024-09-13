#include <iostream>

int main() {
    int firstLessonStartHour, firstLessonStartMin;
    int lessonDurationHours, lessonDurationMins;
    int breakDurationHours, breakDurationMins;
    int amountOfLessons;

    std::cin >> firstLessonStartHour >> firstLessonStartMin;
    std::cin >> lessonDurationHours >> lessonDurationMins;
    std::cin >> breakDurationHours >> breakDurationMins;
    std::cin >> amountOfLessons;

    int endMins = firstLessonStartMin + lessonDurationMins * amountOfLessons + breakDurationMins * (amountOfLessons - 1);
    int endHours = firstLessonStartHour + lessonDurationHours * amountOfLessons + breakDurationHours * (amountOfLessons - 1) + \
                   endMins / 60;

    endMins %= 60;
    endHours %= 24;

    std::cout << endHours << ' ' << endMins << std::endl;

    return 0;
}