/*
   File: prog1_n_m139.cpp

   Author: Nick Montana
   C.S.1428.002
   Lab Section: L02
   Program: #1
   Due Date: 09/21/16

   Prix fixe (pronounced "prefix") menus are common in Europe. A prix fixe
   menu typically includes a number of pre-determined items presented as a
   multi-course meal at a set price. For example, one evening, a restaurant
   may offer a four course prix fixe menu of escargot for the first course,
   beef bourguignon (boor-geen-yuhn) for the second, a cheese platter for
   the third, and creme brulee for dessert. The prix fixe menu for the
   evening, along with its cost, is typically posted on a message board
   outside the restaurant.

   =======================================================================

   This program prompts the user for the number of prix fixe meals ordered
   by the customer(s). The program calculates the total cost of the meal(s),
   the sales tax, the tip, and the total amount due. The program then prints
   in receipt form the individual price of a prix fixe meal, the number of
   prix fixe meals ordered, the total for all prix fixe meals ordered, the
   sales tax, the tip and the total amount due. Sample layout of a receipt
   is shown below.

   Input (keyboard): meals_ordered      (integer)
   Constants:
          Sample Values:
              PRIX_FIXE = 50.00         (double)
              SALES_TAX_RATE = .0825    (double)
              TIP_PERCENTAGE = .15      (double)
   Output (console):
          Sample Layout:

              Author's Name
              C.S.1428.?         // '?' represents author's lecture section #
              Lab Section: L?    // '?' represents student's lab section #
              --/--/--           // dashes represent due date, month/day/year
                   <blank line>
              Prix Fixe Price:    $   50.00
                                    x     8
              Total for 8 meals:     400.00
              Sales Tax @8.25%        33.00
              15% Tip                 64.95
              Total Due:          $  497.95

   =======================================================================

   <Output will vary based on actual input and values used for constants.>
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main()
{

    int meals;
    const double PRIXE_FIXE_PRICE = 50,
                 TAX_PERCENTAGE = .0825,
                 TIP_PERCENTAGE = .15;


    cout << "Enter the number of prix fixe meals ordered: ";
    cin >> meals;

    const double total_notax = PRIXE_FIXE_PRICE*meals,
                 tax = TAX_PERCENTAGE*total_notax,
                 tip = (total_notax+tax)*TIP_PERCENTAGE,
                 total = tip + tax + total_notax;

    cout << endl << endl
         << "Nick Montana" << endl
         << "C.S.1428.2" << endl
         << "Lab Section: L02" << endl
         << "09/21/16" << endl << endl

         << fixed << setprecision(2)

         << "Prix Fixe Price:     $  " << setw(6) << PRIXE_FIXE_PRICE << endl
         << "                       x" << setw(6) << meals << endl
         << "Total for " << meals << " meals:      " << setw(6)
         << total_notax << endl
         << "Sales Tax @" << TAX_PERCENTAGE*100
         << "%        " << setw (6) << tax << endl
         << setprecision(0)
         << TIP_PERCENTAGE*100 << "% Tip                 "
         << setprecision(2) << setw(6)
         << tip << endl
         << "Total Due:           $  " << total << endl;

    system("PAUSE > NUL");
    return 0;

}

