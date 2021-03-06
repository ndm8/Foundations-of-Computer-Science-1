
/*
   File: prog0_n_m139.cpp

   Author: Nick Montana
   C.S.1428.002
   Lab Section: L02
   Program: #0
   Due Date: 09/07/16

   This program
       - prints the student's first and last names on the 1st line of output
         e.g. John Smith
       - prints 'C.S.1428.#' (without quotation marks) on the 2nd line of
         output with the student's lecture section number in place of the
         # sign
       - prints 'Lab Section: L?' (without quotation marks) on the 3rd line of
         output with the student's lab section number in place of the question
         mark
       - prints this program's due date on the fourth line of output
       - leaves line five blank
       - prints 'Major: <student's major>'(without quotation marks)
         on the 6th line of output with the student's major in place of
         <student's major>
       - prints 'Minor: <student's minor or specialization>' (without quotation
         marks)on the 7th line of output with the student's minor or
         specialization in place of <student's minor or specialization>
         Note: the keyword 'Minor:' might be replaced with the keyword
         'Specialization:' or 'Concentration:' depending on the student
       - prints 'Favorite Food: <student's favorite food>'
         (without quotation marks) on the 8th line of output with the student's
         favorite food in place of <student's favorite food>

   Input: none
   Constants: none
   Output (screen): Sample Output:

                 Betty Boop
                 C.S.1428.?        // '?' represents student's lecture section #
                 Lab Section: L?   // '?' represents student's lab section #
                 --/--/--          // dashes represent due date, month/day/year
                 Major: ?
                 Minor: ?
                 Favorite Food: ?
*/

#include <iostream>

using namespace std;

int main ()
{
   cout << "Nick Montana" << endl
        << "C.S.1428.002" << endl
        << "Lab Section: L02" << endl
        << "09/07/16" << endl << endl;

   cout << "Major: Mathematics" << endl
        << "Minor: Philosophy and Physics" << endl
        << "Favorite Food: Cajun" << endl;
 return 0;
}
