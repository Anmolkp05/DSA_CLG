/* Consider an array MARKS[20][5] which stores the 
marks obtained by 20 students in 5 subjects. Now 
write a program to
 (a) find the average marks obtained in each
 subject.
 (b) find the average marks obtained by every 
student.
 (c) find the number of students who have scored 
below 50 in their average.
 (d) display the scores obtained by every student
 */


 #include <stdio.h>

int main() {
    int MARKS[20][5];
    int num_students;
    float sub_average, stud_average, sub_total, stud_total;
    int below_50_count = 0;

    printf("Enter the number of students (max 20): ");
    scanf("%d", &num_students);

    // Reading marks for each student
    for (int i = 0; i < num_students; i++) {
        printf("Enter marks for student %d (in 5 subjects): ", i + 1);
        for (int j = 0; j < 5; j++) {
            scanf("%d", &MARKS[i][j]);
        }
    }

    printf("\n--- Student Scores ---\n");
    for (int i = 0; i < num_students; i++) {
        printf("Student %d: ", i + 1);
        for (int j = 0; j < 5; j++) {
            printf("%d ", MARKS[i][j]);
        }
        printf("\n");
    }

    printf("\n--- Analysis ---\n");
    // (a) Find the average marks obtained in each subject.
    for (int j = 0; j < 5; j++) {
        sub_total = 0;
        for (int i = 0; i < num_students; i++) {
            sub_total += MARKS[i][j];
        }
        sub_average = sub_total / num_students;
        printf("Average marks in Subject %d: %.2f\n", j + 1, sub_average);
    }

    // (b) and (c) Find average per student and count students with avg < 50
    for (int i = 0; i < num_students; i++) {
        stud_total = 0;
        for (int j = 0; j < 5; j++) {
            stud_total += MARKS[i][j];
        }
        stud_average = stud_total / 5.0;
        printf("Average marks for Student %d: %.2f\n", i + 1, stud_average);
        if (stud_average < 50) {
            below_50_count++;
        }
    }

    printf("Number of students with average marks below 50: %d\n", below_50_count);

    return 0;
}