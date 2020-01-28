/*
   File: prog2_n_m139.cpp

   Author: Nick Montana
   C.S.1428.002
   Lab Section: L02
   Program: #2
   Due Date: 10/05/16

   This program prompts the user to enter the amount of a purchase (in cents).
   It then prompts the user to enter the amount received in payment (in cents).
   It calculates the amount of change due, printing the results to an output
   file. The author's identifying information is provided followed by the
   number of each coin to be given in change: the number of dollars, half
   dollars, quarters, dimes, nickels and pennies are listed in tabular form.
   Monetary amounts are displayed to two decimal places.

   An appropriate message is displayed to the console screen if the output
   file fails to open.

   An appropriate message is written to the console screen informing the
   user of the output file name to which the results have been written.
   The layout and content of the file output are shown in the sample below.

   Input (keyboard):
          purchase amount, integer (in cents)
          payment amount, integer (in cents)

   Constants: none

   Output (screen):

           Author's Name
           C.S.1428.?         // '?' represents author's lecture section #
           Lab Section: L?    // '?' represents student's lab section #
           --/--/--           // dashes represent due date, month/day/year
                <blank line>
           <Appropriate message indicating the name of the output file.>

   Output (file - prog2_00?out.txt): // '?' represents author's lect sec #

           Author's Name
           C.S.1428.?         // '?' represents author's lecture section #
           Lab Section: L?    // '?' represents student's lab section #
           --/--/--           // dashes represent due date, month/day/year
                <blank line>
           Received ? for a purchase of ?
                <blank line>
              Change in coins:
           Coin           Number
           ---------------------
           Dollars          ?
           Half Dollars     ?
           Quarters         ?
           Dimes            ?
           Nickels          ?
           Pennies          ?

   ================================================

   <Output will vary based on actual input values.>
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <fstream>

using namespace std;

int main()
{
   int purchase,
       payment,
       change,
       dollars,
       half_dollars,
       quarters,
       dimes,
       nickels;

    ofstream fout;
    fout.open ("prog2_002out.txt");

    if (!fout)
    {
        cout << endl << endl
             << "***Program Terminated.***" << endl << endl
             << "Output file failed to open." << endl;

        return 1;
    }

    cout << "Enter the amount of the purchase (in cents): ";
    cin  >> purchase;

    cout << "Enter the amount recieved in payment (in cents): ";
    cin  >> payment;

    change = payment-purchase;

    dollars = change/100;
    change = change%100;

    half_dollars = change/50;
    change = change%50;

    quarters = change/25;
    change = change%25;

    dimes = change/10;
    change = change%10;

    nickels = change/5;
    change = change%5;

    fout << "Nick Montana" << endl
         << "C.S.1428.002" << endl
         << "Lab Section: L02" << endl
         << "10/05/16" << endl << endl;

    fout << fixed << setprecision (2)
         << "Received " << payment/100.0 << " for a purchase of "
         << purchase/100.0 << "." << endl << endl
         << "  Change in coins:" << endl
         << "Coin          Number" << endl
         << "____________________" << endl
         << "Dollars       " << setw(4) << dollars << endl
         << "Half_Dollars  " << setw(4) << half_dollars << endl
         << "Quarters      " << setw(4) << quarters << endl
         << "Dimes         " << setw(4) << dimes << endl
         << "Nickels       " << setw(4) << nickels << endl
         << "Pennies       " << setw(4) << change << endl;

    cout << endl << endl
         << "Nick Montana" << endl
         << "C.S.1428.002" << endl
         << "Lab Section: L02" << endl
         << "10/05/16" << endl << endl;

    cout << "Program results have been written to prog2_002.txt." << endl;

    fout.close();

    system ("PAUSE > NUL");

    return 0;
}
