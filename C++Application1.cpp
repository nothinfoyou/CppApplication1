#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	int num1;
	cout << "Enter the number of the question you would like to see (4 or 5): ";
	cin >> num1;
    //Use switch statement to handle question
	switch (num1) {
	default:
        cout << "Invalid";
		break;
	case 4:
        // Variables to store values and results
        double a, b, c;
        double x, y, z, avg, max_val, min_val;
        // Prompt user to enter values for a, b, and c
        cout << "Enter the values for a, b, and c: " << endl;
        cin >> a >> b >> c;
        // Calculate x using the quadratic formula (Note: Formula is incorrect)
        // Correct formula should be (-b ± sqrt(b^2 - 4ac)) / (2a)
        x = (-b + sqrt((b * b) + (4 * a))) / (2 * c);
        // Calculate y as a polynomial expression
        y = (pow(a, 4) - (b * pow(c, 2)));
        // Calculate z based on powers of a and b, divided by c
        z = ((pow(a, 2)) * (pow(b, 3))) / c;
        // Calculate the average of x, y, and z
        avg = (x + y + z) / 3;
        // Find the maximum and minimum values among x, y, and z
        max_val = max({ x, y, z });
        min_val = min({ x, y, z });
        // Output the calculated values
        cout << "X: " << x << endl;
        cout << "Y: " << y << endl;
        cout << "Z: " << z << endl;
        cout << "Average: " << avg << endl;
        cout << "Max: " << max_val << endl;
        cout << "Min: " << min_val << endl;
        break;
	case 5:
        string customerID, name;
        int nights;
        double roomRate;
        char customerType; // 'G' for Golden, 'R' for Regular
        double totalCharge, discount;
        // Set precision for currency output
        cout << fixed << setprecision(2);
        // Input customer details
        cout << "Enter customer ID: ";
        cin >> customerID;
        cout << "Enter customer name: ";
        cin.ignore(); // To clear newline character from the buffer
        getline(cin, name);
        cout << "Enter number of nights: ";
        cin >> nights;
        cout << "Enter room rate: ";
        cin >> roomRate;
        cout << "Enter customer type (G for Golden, R for Regular): ";
        cin >> customerType;
        // Calculate total charge based on customer type and nights stayed
        if (customerType == 'G') {
            if (nights <= 2) {
                discount = 0.30; // 30% discount for golden customers staying 2 nights or less
            }
            else {
                discount = 0.50; // 50% discount for golden customers staying more than 2 nights
            }
        }
        else if (customerType == 'R') {
            if (nights <= 2) {
                discount = 0.10; // 10% discount for regular customers staying 2 nights or less
            }
            else {
                discount = 0.30; // 30% discount for regular customers staying more than 2 nights
            }
        }
        else {
            cout << "Invalid customer type!" << endl;
            return 1; // Exit the program with an error code
        }
        // Calculate total charge
        double totalBeforeDiscount = nights * roomRate;
        totalCharge = totalBeforeDiscount * (1 - discount);
        // Display customer information and total charge
        cout << "\nCustomer ID: " << customerID << endl;
        cout << "Customer Name: " << name << endl;
        cout << "Number of Nights: " << nights << endl;
        cout << "Room Rate: $" << roomRate << endl;
        cout << "Discount Applied: " << (discount * 100) << "%" << endl;
        cout << "Total Charge: $" << totalCharge << endl;
		break;
	}
}

