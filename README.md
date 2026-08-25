# Simple ATM Simulation in C++

A simple, console-based Automated Teller Machine (ATM) system written in C++. This program simulates basic banking features using a loop and a switch-case structure.

##  Features

- **Check Balance:** View your current account balance (starts at 10,000).
- **Withdraw Money:** Take money out of your account (with checks to prevent overdrafts).
- **Deposit Money:** Add money to your account (validates that the amount is greater than 0).
- **Menu Loop:** The program keeps running until you explicitly choose to exit.

## How It Works

The program uses a `do-while` loop to show the user a menu of choices. Based on the user's input (1 to 4), a `switch` statement runs the specific banking math and updates the `balance` variable in real-time.

## Technical Concepts Used
- Standard Input/Output (cin, cout)
- Control Flow (do-while loop, switch-case statements)
- Conditional Validation (if-else blocks)
- Variable Data Tracking (int updates)

##  Customization
Feel free to modify the starting `balance` variable in `atm-simulation.cpp` to test different scenarios or run the program with any initial amount you like!
