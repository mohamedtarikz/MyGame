# File:    CS112_A1_T2_3_subtract_square
#
# Purpose: The game starts with random number of coins. Each player removes a
#          squared integer number of coins. The player that takes the last coin
#          wins.
#
# Author:  Mohamed Tarik Taha Mohamed
#
# ID:      20230554

import math

def is_squared_integer(num):  # Check if a number is a squared integer.
    root = math.sqrt(num)  # Calculate the square root of the number
    return root.is_integer()  # Return True if the square root is an integer, False otherwise

coins = input("Enter initial number of coins: ") # Prompt user to enter desired initial number of coins
current_player = 0  # Make player 1 start

while coins > 0:  # Continue the game while there are still coins remaining
    coins_taken = int(input("Player " + str(current_player + 1) + ", please enter a squared integer number of coins to take: "))  # Prompt the current player to enter the number of coins to take
        
    # Input validation loop
    while not (is_squared_integer(coins_taken) and coins_taken <= coins and coins_taken != 0):
        coins_taken = int(input("Invalid input! Please enter a squared integer number of coins to take: "))
        
    coins -= coins_taken  # Subtract the number of coins taken by the current player from the total number of coins
    current_player = 1 - current_player  # Switch to the next player
    print("Number of coins left:", coins)  # Print the number of coins left after the current player's move

if current_player == 0:  # Check which player won the game
    print("Player 2 wins!")
else:
    print("Player 1 wins!")
