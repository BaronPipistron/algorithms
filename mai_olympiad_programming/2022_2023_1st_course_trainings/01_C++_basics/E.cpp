#include <iostream>

int main()
{
    int fst_lesson_hours, fst_lesson_mins;
    int lesson_duration_hours, lesson_duration_mins;
    int break_duration_hours, break_duration_mins;
    int amount_of_lessons;

    std::cin >> fst_lesson_hours >> fst_lesson_mins;
    std::cin >> lesson_duration_hours >> lesson_duration_mins;
    std::cin >> break_duration_hours >> break_duration_mins;
    std::cin >> amount_of_lessons;

    int amount_of_breaks = amount_of_lessons - 1;

    int end_of_lessons_hours = fst_lesson_hours + lesson_duration_hours * amount_of_lessons + break_duration_hours * amount_of_breaks;
    int end_of_lessons_mins = fst_lesson_mins + lesson_duration_mins * amount_of_lessons + break_duration_mins * amount_of_breaks;

    end_of_lessons_hours = (end_of_lessons_hours + end_of_lessons_mins / 60) % 24;
    end_of_lessons_mins %= 60;

    std::cout << end_of_lessons_hours << ' ' << end_of_lessons_mins << std::endl;

    return 0;
}