//This program calculates and displays the positive divisors of a given integer.
//Name Banguu Philemon Wob.
//Computer Science Level 300

#include <iostream>


void Display_Divisor(int numb)
{
	std::cout << "Positive divisors of " << numb << " in descending order:" << std::endl;

    // Iterating from numb to 1 and check for divisors
    for (int i = numb; i > 0; --i) {
        if (numb % i == 0) {
            std::cout << i << std::endl;
        }
    }
}
int main()
{
    std::cout << "This program calculates and displays the positive divisors of a given integer." << std::endl;
    std::cout << "Enter a positive integer, or enter 0 or a negative integer to terminate the program." << std::endl;

    while (true) {
        int user_Input;
        std::cout << "\nEnter a positive integer: ";
        std::cin >> user_Input;

        // Checks if the user wants to terminate the program
        if (user_Input <= 0) {
            std::cout << "Program terminated. Goodbye!" << std::endl;
            break;
        }

        Display_Divisor(user_Input);

        // Ask the user if they want to enter another integer
        char choice;
        std::cout << "Do you want to enter another integer? (y/n): ";
        std::cin >> choice;

        if (choice != 'y' && choice != 'Y') {
            std::cout << "Program terminated. Goodbye!" << std::endl;
            break;
        }
    }
	
	std::cin.get();
}