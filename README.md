# Student Grade Management System

A beginner-friendly C mini project that stores student names and marks using **structures and arrays**, calculates each student's average, and assigns a grade.

## Features
- Stores up to 100 students.
- Stores each student's name and marks in 5 subjects.
- Uses a `struct Student` to keep related student data together.
- Uses arrays to store students and subject marks.
- Checks that marks are between 0 and 100.
- Calculates the average and displays a grade.

## Grade scale
| Average | Grade |
|---:|:---|
| 90–100 | A+ |
| 80–89.99 | A |
| 70–79.99 | B |
| 60–69.99 | C |
| 50–59.99 | D |
| Below 50 | F |

## Requirements
- GCC or another C compiler
- Windows, Linux, or macOS

## Compile and run
```bash
gcc student_grade_management.c -o student_grade_management
./student_grade_management
```
On Windows:
```bash
gcc student_grade_management.c -o student_grade_management.exe
student_grade_management.exe
```

## Example
Input:
- Number of students: `2`
- Ahmed: `90, 85, 80, 95, 90`
- Sara: `70, 75, 68, 72, 65`

Expected result summary:
```text
STUDENT RESULT SUMMARY
-----------------------------------------------------------------------
Student Name            Average        Grade
-----------------------------------------------------------------------
Ahmed                     88.00            A
Sara                      70.00            B
-----------------------------------------------------------------------
```

## Project details
- Student: Ahmed Abdelmoneim
- UID: 26BCD10245
- Program: BCA
- Subject: Data Structures (23CAT-201)

## Notes
This is a console-based mini project. The records are stored in memory while the program is running; they are not saved permanently to a file. The maximum number of students and subjects can be changed using the constants at the top of the C source file.
