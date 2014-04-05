/*
 * Programming Project 2
 * Second programming challenge for CSCI 21. Implement the classes Prize & Box and
 * the associated functions, default constructors, the overlaoded constructors,
 * and the destructors as well as the driver. All sections labeled with "CODE HERE" need to be filled in.
 *
 * Kevan Johnson
 * Date created: 4/01/14
 * Last date modified: 4/04/14
 *
 */

#include "Box.h"
#include "Prize.h"
#include "CinReader.h"

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;
CinReader reader;

/*
 * This is function clearScreen. This function
 * clears the screen when called.
 */
void clearScreen();
/*
 * This is function pause.This function
 * "pauses" screen so player can read screen.
 */
void pause();
/*
 * This is function boxTest. This function
 * calls boxTest menu.
 */
void boxTest();
/*
 * This is function prizeTest. This function
 * calls prizeTest menu.
 */
void prizeTest();

/* for unit testing -- do not alter */
template <typename X, typename A>
void btassert(A assertion);
void unittest ();

int main ()
{
    // CODE HERE -- INTERACTIVE TEST
    //
    // add additional functions as needed to support interactive test
    bool quit = false;
    do
    {
        clearScreen();
        cout << "\n\n\t\t  MAIN MENU\n";
        cout << "\t---------------------------\n";
        cout << "\t[1] Run Box interactive test\n";
        cout << "\t[2] Run Prize interactive test\n";
        cout << "\t[3] Run offical unit test\n";
        cout << "\t[0] Quit\n\n";
        cout << "\n\tWhat would you like to do? ";

        switch(reader.readInt(0,3))
        {
        case 1:
            clearScreen();
            boxTest();
            break;
        case 2:
            clearScreen();
            prizeTest();
            break;
        case 3:
            clearScreen();
            unittest();
            break;
        case 0:
            quit = true;
            break;
        }
        pause();
    }
    while (quit == false);
    return 0;
}

/*
 * Unit testing functionb1. Do not alter.
 */

void unittest ()
{
    cout << "\nSTARTING UNIT TEST\n\n";

    Box b1;
    Box b2(42, "blue", 3);

    cout << "** TESTING DEFAULT BOX **\n\n";

    try
    {
        btassert<bool>(b1.getBoxNumber() == 0);
        cout << "Passed TEST 1: Box getBoxNumber()\n";
    }
    catch (bool b)
    {
        cout << "# FAILED TEST 1 Box getBoxNumber() #\n";
    }

    try
    {
        btassert<bool>(b1.getBoxColor() == "NO COLOR");
        cout << "Passed TEST 2: Box getBoxColor()\n";
    }
    catch (bool b)
    {
        cout << "# FAILED TEST 2 Box getBoxColor() #\n";
    }

    try
    {
        btassert<bool>(b1.getPrizeCapacity() == 5);
        cout << "Passed TEST 3: Box getPrizeCapacity()\n";
    }
    catch (bool b)
    {
        cout << "# FAILED TEST 3 Box getPrizeCapacity() #\n";
    }

    try
    {
        btassert<bool>(b1.getPrizeCount() == 0);
        cout << "Passed TEST 4: Box getPrizeCount()\n";
    }
    catch (bool b)
    {
        cout << "# FAILED TEST 4 Box getPrizeCount() #\n";
    }

    b1.setBoxNumber(99);
    try
    {
        btassert<bool>(b1.getBoxNumber() == 99);
        cout << "Passed TEST 5: Box setBoxNumber()/getBoxNumber()\n";
    }
    catch (bool b)
    {
        cout << "# FAILED TEST 5 Box setBoxNumber()/getBoxNumber() #\n";
    }

    b1.setBoxColor("red");
    try
    {
        btassert<bool>(b1.getBoxColor() == "red");
        cout << "Passed TEST 6: Box setBoxColor()/getBoxColor()\n";
    }
    catch (bool b)
    {
        cout << "# FAILED TEST 6 Box setBoxColor()/getBoxColor() #\n";
    }

    cout << "\n** TESTING CUSTOM BOX **\n\n";

    try
    {
        btassert<bool>(b2.getBoxNumber() == 42);
        cout << "Passed TEST 7: Box getBoxNumber()\n";
    }
    catch (bool b)
    {
        cout << "# FAILED TEST 7 Box getBoxNumber() #\n";
    }

    try
    {
        btassert<bool>(b2.getBoxColor() == "blue");
        cout << "Passed TEST 8: Box getBoxColor()\n";
    }
    catch (bool b)
    {
        cout << "# FAILED TEST 8 Box getBoxColor() #\n";
    }

    try
    {
        btassert<bool>(b2.getPrizeCapacity() == 3);
        cout << "Passed TEST 9: Box getPrizeCapacity()\n";
    }
    catch (bool b)
    {
        cout << "# FAILED TEST 9 Box getPrizeCapacity() #\n";
    }

    try
    {
        btassert<bool>(b2.getPrizeCount() == 0);
        cout << "Passed TEST 10: Box getPrizeCount()\n";
    }
    catch (bool b)
    {
        cout << "# FAILED TEST 10 Box getPrizeCount() #\n";
    }

    try
    {
        btassert<bool>(b2.getPrize(0) == Prize());
        cout << "Passed TEST 11: Box getPrize(0)\n";
    }
    catch (bool b)
    {
        cout << "# FAILED TEST 11 Box getPrize(0) #\n";
    }

    try
    {
        btassert<bool>(b2.removePrize(0) == Prize());
        cout << "Passed TEST 12: Box removePrize(0)\n";
    }
    catch (bool b)
    {
        cout << "# FAILED TEST 12 Box removePrize(0) #\n";
    }

    b2.addPrize(Prize("BRONZE PRIZE", 1));
    try
    {
        btassert<bool>(b2.getPrizeCount() == 1);
        cout << "Passed TEST 13: Box addPrize()/getPrizeCount()\n";
    }
    catch (bool b)
    {
        cout << "# FAILED TEST 13 Box addPrize()/getPrizeCount() #\n";
    }

    b2.addPrize(Prize("SILVER PRIZE", 100));
    try
    {
        btassert<bool>(b2.getPrizeCount() == 2);
        cout << "Passed TEST 14: Box addPrize()/getPrizeCount()\n";
    }
    catch (bool b)
    {
        cout << "# FAILED TEST 14 Box addPrize()/getPrizeCount() #\n";
    }

    b2.addPrize(Prize("GOLD PRIZE", 1000));
    try
    {
        btassert<bool>(b2.getPrizeCount() == 3);
        cout << "Passed TEST 15: Box addPrize()/getPrizeCount()\n";
    }
    catch (bool b)
    {
        cout << "# FAILED TEST 15 Box addPrize()/getPrizeCount() #\n";
    }

    try
    {
        btassert<bool>(b2.addPrize(Prize("DIAMOND PRIZE", 999)) == false);
        cout << "Passed TEST 16: Box addPrize(ARRAY FULL)\n";
    }
    catch (bool b)
    {
        cout << "# FAILED TEST 16 Box addPrize(ARRAY FULL) #\n";
    }

    try
    {
        btassert<bool>(b2.getPrize(1) == Prize("SILVER PRIZE", 100));
        cout << "Passed TEST 17: Box getPrize(1)\n";
    }
    catch (bool b)
    {
        cout << "# FAILED TEST 17 Box getPrize(1) #\n";
    }

    try
    {
        btassert<bool>(b2.removePrize(2) == Prize("GOLD PRIZE", 1000));
        cout << "Passed TEST 18: Box removePrize(2)\n";
    }
    catch (bool b)
    {
        cout << "# FAILED TEST 18 Box removePrize(2) #\n";
    }

    try
    {
        btassert<bool>(b2.getPrizeCount() == 2);
        cout << "Passed TEST 19: Box getPrizeCount()\n";
    }
    catch (bool b)
    {
        cout << "# FAILED TEST 19 Box getPrizeCount() #\n";
    }

    try
    {
        btassert<bool>(b2.removePrize(2) == Prize());
        cout << "Passed TEST 20: Box removeCargo(2)\n";
    }
    catch (bool b)
    {
        cout << "# FAILED TEST 20 Box removeCargo(2) #\n";
    }

    try
    {
        btassert<bool>(b2.getPrize(2) == Prize());
        cout << "Passed TEST 21: Box getPrize(2)\n";
    }
    catch (bool b)
    {
        cout << "# FAILED TEST 21 Box getPrize(2) #\n";
    }

    try
    {
        btassert<bool>(b2.addPrize(Prize("RUBY PRIZE", 9999)) == true);
        cout << "Passed TEST 22: Box addPrize(\"RUBY PRIZE\", 9999)\n";
    }
    catch (bool b)
    {
        cout << "# FAILED TEST 22 Box addPrize(\"RUBY PRIZE\", 9999) #\n";
    }

    try
    {
        btassert<bool>(b2.getPrizeCount() == 3);
        cout << "Passed TEST 23: Box getPrizeCount()\n";
    }
    catch (bool b)
    {
        cout << "# FAILED TEST 23 Box getPrizeCount() #\n";
    }

    try
    {
        btassert<bool>(b2.getPrizeCapacity() == 3);
        cout << "Passed TEST 24: Box getPrizeCapacity()\n";
    }
    catch (bool b)
    {
        cout << "# FAILED TEST 24 Box getPrizeCapacity() #\n";
    }

    cout << "\n** TESTING PRIZE **\n\n";

    Prize p1;

    try
    {
        btassert<bool>(p1.getPrizeName() == "NO NAME");
        cout << "Passed TEST 25: Prize getPrizeName()\n";
    }
    catch (bool b)
    {
        cout << "# FAILED TEST 25 Prize getPrizeName() #\n";
    }

    try
    {
        btassert<bool>(p1.getPrizeValue() == 0);
        cout << "Passed TEST 26: Prize getPrizeValue()\n";
    }
    catch (bool b)
    {
        cout << "# FAILED TEST 26 Prize getPrizeValue() #\n";
    }

    p1.setPrizeName("FOOD PRIZE");
    try
    {
        btassert<bool>(p1.getPrizeName() == "FOOD PRIZE");
        cout << "Passed TEST 27: Prize setPrizeName(\"FOOD PRIZE\")/getPrizeName()\n";
    }
    catch (bool b)
    {
        cout << "# FAILED TEST 27 Prize setPrizeName(\"FOOD PRIZE\")/getPrizeName() #\n";
    }

    p1.setPrizeValue(17);
    try
    {
        btassert<bool>(p1.getPrizeValue() == 17);
        cout << "Passed TEST 28: Prize setPrizeValue(17)/getPrizeValue()\n";
    }
    catch (bool b)
    {
        cout << "# FAILED TEST 28 Prize setPrizeValue(17)/getPrizeValue() #\n";
    }

    Prize p2("HAT PRIZE", 50);

    try
    {
        btassert<bool>(p2.getPrizeName() == "HAT PRIZE");
        cout << "Passed TEST 29: Prize getPrizeName()\n";
    }
    catch (bool b)
    {
        cout << "# FAILED TEST 29 Prize getPrizeName() #\n";
    }

    try
    {
        btassert<bool>(p2.getPrizeValue() == 50);
        cout << "Passed TEST 30: Prize getPrizeValue()\n";
    }
    catch (bool b)
    {
        cout << "# FAILED TEST 30 Prize getPrizeValue() #\n";
    }

    try
    {
        btassert<bool>(!(p1 == p2));
        cout << "Passed TEST 31: !(Prize == Prize)\n";
    }
    catch (bool b)
    {
        cout << "# FAILED TEST 31 !(Prize == Prize) #\n";
    }

    p2.setPrizeName("FOOD PRIZE");
    try
    {
        btassert<bool>(p2.getPrizeName() == "FOOD PRIZE");
        cout << "Passed TEST 32: Prize setPrizeName(\"FOOD PRIZE\")/getPrizeName()\n";
    }
    catch (bool b)
    {
        cout << "# FAILED TEST 32 Prize setPrizeName(\"FOOD PRIZE\")/getPrizeName() #\n";
    }

    p2.setPrizeValue(17);
    try
    {
        btassert<bool>(p2.getPrizeValue() == 17);
        cout << "Passed TEST 33: Prize setPrizeValue(17)/getPrizeValue()\n";
    }
    catch (bool b)
    {
        cout << "# FAILED TEST 33 Prize setPrizeValue(17)/getPrizeValue() #\n";
    }

    try
    {
        btassert<bool>(p1 == p2);
        cout << "Passed TEST 34: (Prize == Prize)\n";
    }
    catch (bool b)
    {
        cout << "# FAILED TEST 34 (Prize == Prize) #\n";
    }

    p2.setPrizeValue(1);
    try
    {
        btassert<bool>(!(p1 == p2));
        cout << "Passed TEST 35: !(Prize == Prize)\n";
    }
    catch (bool b)
    {
        cout << "# FAILED TEST 35 !(Prize == Prize) #\n";
    }

    cout << "\nUNIT TEST COMPLETE\n\n";
}

template <typename X, typename A>
void btassert (A assertion)
{
    if (!assertion)
        throw X();
}


void clearScreen()
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}


void pause()
{
    cout << "Press ENTER to Continue";
    reader.readString();
}


void boxTest()
{
    Box tester;
    bool quitBox = false;
    do
    {
        clearScreen();
        cout << "\n\n\tBox Testing Menu\n";
        cout << "\t----------------\n\n";
        cout << "\tBOX INFO:\n";
        cout << "\tBox Number: " << tester.getBoxNumber() << endl;
        cout << "\tBox Color: " << tester.getBoxColor() << endl;
        cout << "\tPrize Capacity: " << tester.getPrizeCapacity() << endl;
        cout << "\tPrize Count: " << tester.getPrizeCount() << endl << endl << endl;

        cout <<"\t[1] Add new prize\n";
        cout <<"\t[2] View prizes\n";
        cout <<"\t[3] Remove a prize\n";
        cout <<"\t[4] Change box number\n";
        cout <<"\t[5] Change box color\n";
        cout <<"\t[0] Return to Main Menu\n\n";
        cout <<"\tWhat would you like to do? ";

        switch(reader.readInt(0,5))
        {
        case 1:
            clearScreen();
            if (tester.getPrizeCount() < tester.getPrizeCapacity())
            {
                cout << "Enter the name of new prize: ";
                string prizeName = reader.readString();
                cout << "Enter the value of the new prize: ";
                unsigned int prizeValue = reader.readInt();
                tester.addPrize(Prize(prizeName,prizeValue));
                cout << "Prize added.\n\n";
            }
            else
            {
                cout << "Prize box is full!\n";
            }
            break;
        case 2:
            clearScreen();
            cout << "Prize List\n";
            for (unsigned int i = 0; i < tester.getPrizeCount(); i++)
            {
                cout << i+1 << ". " << tester.getPrize(i).getPrizeName() << endl;
            }
            cout << endl << endl;
            break;
        case 3:
            clearScreen();
            cout << "Prize List\n";
            for (unsigned int i = 0; i < tester.getPrizeCount(); i++)
            {
                cout << i+1 << ". " << tester.getPrize(i).getPrizeName() << endl;
            }
            cout << endl << endl;
            if (tester.getPrizeCount() > 0)
            {
                cout << "Please enter the number of the prize to remove: ";
                tester.removePrize(reader.readInt() - 1);
                cout << "Prize removed.\n\n";
            }
            else
            {
                cout << "There are no prizes to remove.\n\n";
            }
            break;
        case 4:
            clearScreen();
            cout << "Enter the new number for this box: ";
            tester.setBoxNumber(reader.readInt());
            cout << "Box number changed.\n\n";
            break;
        case 5:
            clearScreen();
            cout << "Enter the new color for this box: ";
            tester.setBoxColor(reader.readString());
            cout << "Box color changed.\n\n";
            break;
        case 0:
            quitBox = true;
            break;
        }
        pause();
    }
    while (quitBox == false);
}

void prizeTest()
{
    Prize tester;
    bool quitPrize = false;
    do
    {
        clearScreen();
        cout << "\n\n\tBox Testing Menu\n";
        cout << "\t----------------\n\n";
        cout << "\tPrize INFO:\n";
        cout << "\tPrize Name: " << tester.getPrizeName() << endl;
        cout << "\tPrize Value: " << tester.getPrizeValue() << endl << endl << endl;

        cout <<"\t[1] Change prize name\n";
        cout <<"\t[2] Change prize value\n";
        cout <<"\t[0] Return to Main Menu\n\n";
        cout <<"\tWhat would you like to do? ";

        switch(reader.readInt(0,2))
        {
        case 1:
            clearScreen();
            cout << "Enter the new name for prize: ";
            tester.setPrizeName(reader.readString());
            cout << "Prize name changed.\n\n";
            break;
        case 2:
            clearScreen();
            cout << "Enter the new value for prize: ";
            tester.setPrizeValue(reader.readInt());

            cout << "Prize value changed.\n\n";
            break;
        case 0:
            quitPrize = true;
            break;
        }
        pause();
    }
    while (quitPrize == false);
}

