/** ***************************************************************************
 * @file
 *
 * @mainpage 
 *
 * @section CSC_150 - MO1
 *
 * @author Kaeli Clark 
 *
 * @date 9/20/2019
 *
 * @par Professor:
 *         Daniel M. de Castro 
 *
 * @par Course:
 *         CSC 150
 *
 * @par Location:
 *         McLaury - Room 306
 *
 * @section program_section Program Information
 *
 * @details This program will give you and estimate of what your next water
 * bill will be based on what your previous bill was. It will ask you what your
 * previous water bill was, days late on payment, your previous meter reading,
 * and your current meter reading. Then based on the information put in it will
 * calculate what your water consumption will be, your water total bill, your
 * sewer consumption, your sewer total bill, and your late fee charge.
 * Then the program will give you your estimated sum total of your next
 * bill.
 *
 * @section compile_section Compiling and Usage
 *
 * @par Compiling Instructions:
 *      Not a real program
 *
 * @par Usage:
   @verbatim
   c:\> d.exe
   d:\> c:\bin\d.exe
   @endverbatim
 *
 * @section todo_bugs_modification_section Todo, Bugs, and Modifications
 *
 * @bug none
 *
 * @todo none
 *
 * @par Modifications and Development Timeline:
   @verbatim
   Date           Modification
   -------------  -------------------------------------------------------------
   Sep  14, 2019  Added program documentation for the Doxygen writeups
   Sep  15, 2019  Added the include statements and the int variables
   Sep  15, 2019  Started writing code
   Sep  18, 2019  Started revising and fixing errors 
 

   @endverbatim
 *
 *****************************************************************************/
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;

// const variables
/*!
 * @brief the value of water rate 
 */
const double WATER_RATE = 5.0;

/*!
 * @brief the value of sewer rate
 */
const double SEWER_RATE = 3.0;

/** ***************************************************************************
 * @author Kaeli Clark
 *
 * @par Description:
 * This program will give give you and estimate of what your next water bill 
 * will be based on what your previous bill was. It will ask you what your 
 * previous water bill was, days late on payment, your previous meter reading,
 * and your current meter reading. Then based on the information put in it will
 * calculate what your water consumption will be, your water total bill, your
 * sewer consumption, your sewer total bill, and your late fee charge.
 * Then the program will give you your estimated sum total of your next
 * bill.
 *
 *
 * @returns 0 program ran successful.
 *
 *****************************************************************************/

int main()
{

    // put in int variables
    string user_name;
    double prev_water_bill;
    int days_late;
    int prev_meter_read;
    int current_meter_read;
    int water_consumption;
    double water_subtotal;
    int sewer_consumption;
    double sewer_subtotal;
    double late_fee;
    double total;


    //welcome to the estimation tool
    cout << "Welcome to Water Bill Estimation Tool!" << endl;
    cout << "" << endl;


    // ask for the users name
    cout << "Please enter your name: ";
    cin >> user_name;


    //put in divider
    cout << setfill('-') << setw(50) << "" << endl;


    // Ask user for previous water bill
    cout << "Please enter value of previous water bill: ";
    cin >> prev_water_bill;


    // Ask user for how many days late
    cout << "Please enter number of days on late payment " <<
        "(0 for paid by due date): "; 
    cin >> days_late;
    

   // Ask user for previous meter reading  
    cout << "Please enter previous meter reading (see past bill): ";
    cin >> prev_meter_read;

    
    // Ask user for current meter read
    cout << "Please enter current meter reading: ";
    cin >> current_meter_read;

       
    // put in divider
    cout << setfill('-') << setw(50) << "" << endl;


    //your next water bill was estimated as statement 
    cout << "Your next water bill was estimated as follows: ";
    cout << endl;


    //find the water consumption and then the water subtotal
    water_consumption = current_meter_read - prev_meter_read;
    cout << "Water consumption: " << water_consumption << endl;

    water_subtotal = water_consumption * WATER_RATE;
    cout << fixed << setprecision(2) << "Water subtotal" << setfill(' ')
        << setw(6) << ": $" << water_subtotal << endl;


    //find sewer consumption and then sewer rate
    sewer_consumption = (int) (water_consumption * 1.20);
    cout << "Sewer consumption: " << sewer_consumption << endl;
    
    sewer_subtotal = sewer_consumption * SEWER_RATE; 
    cout << fixed << setprecision(2) << "Sewer subtotal" << setfill(' ')
        << setw(6) << ": $" << sewer_subtotal << endl;


    // find late fee and then tell the user
    late_fee = (prev_water_bill * pow(1.01, days_late)) - prev_water_bill;
    cout << fixed << setprecision(2) << "Late fee" << setfill(' ')
        << setw(12) << ": $" << late_fee << endl;


    //put in divider
    cout << setfill('-') << setw(50) << "" << endl;


    // Output the total utilities bill (by adding up water and sewer price,
    // and the late fee).
    total = water_subtotal + sewer_subtotal + late_fee;
    cout << "TOTAL" << setfill(' ') << setw(15) << ": $" << total << endl;


    // Finish program 
    cout << "Good bye, " << user_name << "!";
    cout << setfill(' ') << setw(50) << endl;


    return 0;
}

