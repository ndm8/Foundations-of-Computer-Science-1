/*
   File: prog4_n_m139_drs177.cpp

   Author: Nick Montana, Dillon Shotwell
   C.S.1428.002
   Lab Section: L02, L07
   Program: #4
   Due Date: 11/09/16

   This program prompts the user for the number of items purchased. If no
   items were purchased, the program terminates after printing an appropriate
   message to the screen; otherwise, the program repeatedly prompts the
   user for the price of the specified number of items and calculates the
   total of all purchased items. It then calculates the shipping charge,
   discounted total, tax on the discounted total, and the total amount due.

   After all calculations are performed, the program prints the author's
   identifying information followed by the total of all purchased items,
   the discounted total, the tax rate, the tax on the discounted total,
   shipping charges and the total amount due as shown below. Output is
   written in receipt form to both the console and to an output file.

   With the exception of the tax rate, the numeric data is formatted to
   two decimal places. The tax rate is formatted to four decimal places.

   Input (keyboard): number of items purchased, integer
                     item price, double

   Constants:        discount amount, double
                     cut off amount for free shipping, double
                     shipping charge, double
                     tax rate, double

   Output (console):
          Sample Console Output
          (This sample does not reflect prompts.)

          Author's Name
          C.S.1428.?         // '?' represents author's lecture section #
          Lab Section: L?    // '?' represents student's lab section #
          --/--/--           // dashes represent due date, month/day/year
               <blank line>
          Total Purchases:    $ ??.??
          Discounted Total:     ??.??
          Tax Rate:              ?.????
          Tax:                   ?.??
          Shipping:              ?.??
               <blank line>
          Total Amount Due:   $ ??.??
               <blank line>
               <blank line>
          A copy for your records can be found in prog4_00?out.txt.

   Output (file - prog4_00?out.txt):

          Author's Name
          C.S.1428.?         // '?' represents author's lecture section #
          Lab Section: L?    // '?' represents student's lab section #
          --/--/--           // dashes represent due date, month/day/year
               <blank line>
          Total Purchases:    $ ??.??
          Discounted Total:     ??.??
          Tax Rate:              ?.????
          Tax:                   ?.??
          Shipping:              ?.??
               <blank line>
          Total Amount Due:   $ ??.??

          ================================================

          <Output will vary based on actual input values.>
*/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>

using namespace std;

int main ()
{
    int items_purchased;

    double item_price,
           total = 0,
           discounted_total,
           shipping,
           tax,
           amount_owed;

    const double discount = .20,
                 free_ship = 150,
                 tax_rate = .0825;

    ofstream fout;
    fout.open ("prog4_002out.txt");

    if (!fout)
    {
        cout << endl << endl
             << "***Program Terminated.***" << endl << endl
             << "Output file failed to open." << endl;

        return 1;
    }

    cout << "Enter the number of items purchased: ";
    cin >> items_purchased;
    cout << endl;

    if (items_purchased == 0)
    {
        cout << "Come back again soon!" << endl;
    }
    else
    {
        for (int i = 0; i < items_purchased; i++)
        {
            cout << "Enter the item price: ";
            cin >> item_price;
            total += item_price;
        }

        discounted_total = total - (total * discount);

        if (discounted_total >= free_ship)
            shipping = 0;
        else
            shipping = 8.50;

        tax = discounted_total*tax_rate;

        amount_owed = discounted_total + shipping + tax;

        cout << endl << endl
             << "Nick Montana, Dillon Shotwell" << endl
             << "C.S.1428.002" << endl
             << "Lab Section: L02, L07" << endl
             << "11/09/16" << endl;

        cout << endl << fixed << setprecision (2)
             << "Total Purchases:      $ "
             << setw (6) << total << endl
             << "Discounted Total:       "
             << setw (6) << discounted_total << endl
             << "Tax Rate:               " << fixed << setprecision (4)
             << setw (8) << tax_rate << endl << fixed << setprecision (2)
             << "Tax:                    " << setw (6) << tax << endl
             << "Shipping:               "
             << setw (6) << shipping << endl << endl
             << "Total Amount Due:     $ "
             << setw (6) << amount_owed << endl << endl
             << "A copy for your records can be found in prog4_002out.txt.";

        fout << "Nick Montana, Dillon Shotwell" << endl
             << "C.S.1428.002" << endl
             << "Lab Section: L02, L07" << endl
             << "11/09/16" << endl;

        fout << endl << fixed << setprecision (2)
             << "Total Purchases:      $ "
             << setw (6) << total << endl
             << "Discounted Total:       "
             << setw (6) << discounted_total << endl
             << "Tax Rate:               " << fixed << setprecision (4)
             << setw (8) << tax_rate << endl << fixed << setprecision (2)
             << "Tax:                    " << setw (6) << tax << endl
             << "Shipping:               "
             << setw (6) << shipping << endl << endl
             << "Total Amount Due:     $ "
             << setw (6) << amount_owed << endl << endl;
    }

    system ("PAUSE > NULL");

    fout.close ();

    return 0;

}

