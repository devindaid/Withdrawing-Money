// Question c)

#include <iostream>
#include <string>
#include <climits>
#include <iomanip>
using namespace std;

int main() {
    double hundred = 0.0, fifty = 0.0, twenty = 0.0, ten = 0.0, five = 0.0, toonie = 0.0, loonie = 0.0, quarter = 0.0, dime = 0.0, nickel = 0.0, penny = 0.0, currency = 0.0;
    int yesNo(0);

    do {

        do {
            cout << "Enter any currency." << endl;
            cin >> currency;

            if (currency <= 0) {
                cout << "Invalid value. Please try again." << endl;
            }
        } while (currency <= 0);

        while (currency >= 100) {
            currency -= 100;
            hundred += 1;
        }

        while (currency >= 50) {
            currency -= 50;
            fifty += 1;
        }

        while (currency >= 20) {
            currency -= 20;
            twenty += 1;
        }

        while (currency >= 10) {
            currency -= 10;
            ten += 1;
        }

        while (currency >= 5) {
            currency -= 5;
            five += 1;
        }

        while (currency >= 2) {
            currency -= 2;
            toonie += 1;
        }

        while (currency >= 1) {
            currency -= 1;
            loonie += 1;
        }

        while (currency >= .25) {
            currency -= .25;
            quarter += 1;
        }

        while (currency >= .10) {
            currency -= .10;
            dime += 1;
        }

        while (currency >= .05) {
            currency -= .05;
            nickel += 1;
        }

        while (currency >= .01) {
            currency -= .01;
            penny += 1;
        }

        if (hundred > 0) {
            cout << hundred << " Hundred dollar bills." << endl;
        }
        if (fifty > 0) {
            cout << fifty << " Fifty dollar bills." << endl;
        }
        if (twenty > 0) {
            cout << twenty << " Twenty dollar bills." << endl;
        }
        if (ten > 0) {
            cout << ten << " Ten dollar bills." << endl;
        }
        if (five > 0) {
            cout << five << " Five dollar bills." << endl;
        }
        if (toonie > 0) {
            cout << toonie << " Toonies." << endl;
        }
        if (loonie > 0) {
            cout << loonie << " Loonies." << endl;
        }
        if (quarter > 0) {
            cout << quarter << " Quarters." << endl;
        }
        if (dime > 0) {
            cout << dime << " Dimes." << endl;
        }
        if (nickel > 0) {
            cout << nickel << " Nickels." << endl;
        }
        if (penny > 0) {
            cout << penny << " Pennies." << endl;
        }
        do {
            cout << "Would you like to input a different currency? Type 1 for yes or 2 for no." << endl;
            cin >> yesNo;

            if (yesNo != 1 && yesNo != 2) {
                cout << "Invalid value." << endl;
            }
        } while (yesNo != 1 && yesNo != 2);
            hundred = 0;
            fifty = 0;
            twenty = 0;
            ten = 0;
            five = 0;
            toonie = 0;
            loonie = 0;
            quarter = 0;
            dime = 0;
            nickel = 0;
            penny = 0;
            
    } while (yesNo != 2);


	system("pause");

	return 0;
}

