// Program: A game where two players have an agreed number of coins between them and take turns taking a squared number of coins, the player that the last coin wins


// Author:  Mohamed Tarik Taha Mohamed
// ID:      20230554
// Section: N/A


// Version: 2.0


// Date:    29/2/2024

#include <bits/stdc++.h>  // Include all standard libraries
using namespace std;

// Function to check if a number is a perfect square
bool Valid(int num){
    double sqrot = sqrt(num);  // Calculate the square root of the number
    int root = sqrot;  // Convert the square root to an integer
    return (sqrot - root == 0.0);  // Check if the difference between the square root and its integer part is 0
}

int main()
{
    int coins;
    cout<<"Enter initial number of coins: ";  // Tell the user to enter the initial number of coins
    cin>>coins;  // Read the initial number of coins entered by the user
    int current_player = 0;  // Initialize the current player to player 1

    int coins_taken;
    // Continue the game while there are still coins remaining
    while(coins > 0){
        // Tell the current player to enter the number of coins to take
        cout<<"Player "<<current_player + 1<<", please enter a squared integer number of coins to take: ";
        cin>>coins_taken;
        // Input validation loop
        while(!((Valid(coins_taken)) && (coins_taken <= coins) && (coins_taken != 0))){
            // If the input is invalid, prompt the user to enter a valid square integer
            cout<<"Invalid Input! Please enter a valid square integer: ";
            cin>>coins_taken;
        }
        coins -= coins_taken;  // Subtract the number of coins taken by the current player from the total number of coins
        current_player = 1 - current_player;  // Switch to the next player
        // Print the number of coins remaining after the current player's move
        cout<<"Remaining number of coins is: "<<coins<<endl;
    }
    // Print the winner of the game
    if(current_player == 0)
        cout<<"Player 2 wins!"<<endl;
    else
        cout<<"Player 1 wins!"<<endl;
    return 0;
}
