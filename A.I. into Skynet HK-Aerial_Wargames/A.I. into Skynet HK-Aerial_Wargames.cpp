
// Including standard libraries
#include <iostream>
#include <cstdlib>
#include <ctime>

// Including std namespace
using namespace std;

// Main function
int main()
{
    // Defining playAgain variable
    char playAgain;

    // Game loop
    do
    {
        // // // // // // //
        //
        // Setting enemy location on 8x8 grid
        //
        // // // // // // //

        // Seeding the random number generator
        srand(static_cast<unsigned int>(time(0)));

        // Generating the random number
        int enemyLocation = rand() % 64 + 1;

        // Printing the enemy location information
        cout << "\n ------------------\nInitializating enemy placement on an 8x8 grid...\n ------------------\n\n";




        // // // // // // //
        //
        // Human player variables & game loop
        //
        // // // // // // //

        // Printing the initialization sequence
        cout << "\n ------------------\nInitialization of Skynet HK-Aerial player search software commencing...\n ------------------\n\n";

        // Compiling the amount of tries
        int humanTries = 0;

        // Player's guess
        int humanGuess = 0;

        // Game loop
        do
        {
            // Getting the player's guess
            cout << "\nPlease enter a gridspace between 1 and 64, then press 'enter' to guess enemy's location: ";

            // Changing player guess into a variable
            cin >> humanGuess;

            // Addition to the amount of tries
            ++humanTries;

            // If statement regarding a valid entered number
            if (humanGuess > 64 or humanGuess < 1)
            {
                cout << "Error: Guess out of grid range.\n ------------------\n";
            }

            // Else if statement regarding the greater than status of the human guess
            else if (humanGuess > enemyLocation)
            {
                // Printing that player guess is too high
                cout << "Analyzation resulted in a search of gridspace # " << humanGuess << " . \nThis gridspace is a higher number than the enemy's location. \n ------------------" << endl;
            }

            // Else if statement regarding the less than status of the human guess
            else if (humanGuess < enemyLocation)
            {
                // Printing that player guess is too low
                cout << "Analyzation resulted in a search of gridspace # " << humanGuess << " . \nThis gridspace is a lower number than the enemy's location. \n ------------------" << endl;
            }

            // Else statement regarding successful enemy location
            else
            {
                // Printing the successful enemy location sequence
                cout << "Analyzation resulted in a search of gridspace # " << humanGuess << "\n ------------------\n\nThe enemy was located at gridspace # " << enemyLocation << "\nIt took player approximately " << humanTries << " analyzation sequences to find the enemy within the grid.\n\nCommencing aerial attack...\n" << endl;

                // Break statement to exit game loop
                break;
            }
        }

        // While loop to re-initialize do loop
        while (humanGuess != enemyLocation);




        // // // // // // //
        //
        // Random guess variables & game loop
        //
        // // // // // // //

        // Printing the initialization sequence
        cout << "\n ------------------\nInitialization of Skynet HK-Aerial random search software commencing...\n ------------------\n\n";

        // Compiling the amount of tries
        int randomTries = 0;

        // Random guess variable
        int randomGuess = 0;

        // Game loop
        do
        {
            // Generating the random number
            int randomNumber = rand();

            // Generating the random guess
            int randomGuess = (randomNumber % 64) + 1;

            // Addition to the amount of tries
            ++randomTries;

            // If statement regarding the greater than status of the random guess
            if (randomGuess > enemyLocation)
            {
                // Printing that random guess is too high
                cout << "Analyzation resulted in a search of gridspace # " << randomGuess << " . \nThis gridspace is a higher number than the enemy's location.\n ------------------" << endl;
            }

            // Else if statement regarding the less than status of the random guess
            else if (randomGuess < enemyLocation)
            {
                // Printing that random guess is too low
                cout << "Analyzation resulted in a search of gridspace # " << randomGuess << " . \nThis gridspace is a lower number than the enemy's location.\n ------------------" << endl;
            }

            // Else statement regarding successful enemy location
            else
            {
                // Printing the successful enemy location sequence
                cout << "Analyzation resulted in a search of gridspace # " << randomGuess << "\nThe enemy was located at gridspace # " << enemyLocation << "\nIt took the random search approximately " << randomTries << " analyzation sequences to find the enemy within the grid.\n\nCommencing aerial attack...\n" << endl;

                // Break statement to exit game loop
                break;
            }
        }

        // While loop to re-initialize do loop
        while (randomGuess != enemyLocation);




        // // // // // // //
        //
        // Linear search variables & game loop
        //
        // // // // // // //

        // Printing the initialization sequence
        cout << "\n ------------------\nInitialization of Skynet HK-Aerial linear search software commencing...\n ------------------\n\n";

        // Compiling the amount of tries
        int linearTries = 0;

        // Linear guess variable
        int linearGuess = 0;

        // Game loop
        do
        {
            // Addition to the amount of tries
            ++linearTries;

            // Addition to linear guess
            ++linearGuess;

            // If statement regarding the greater than status of the random guess
            if (linearGuess != enemyLocation)
            {
                // Printing that linear guess is too low
                cout << "Analyzation resulted in a search of gridspace # " << linearGuess << " . \nThis gridspace is a lower number than the enemy's location.\n ------------------" << endl;
            }

            else
            {
                // Printing the successful enemy location sequence
                cout << "Analyzation resulted in a search of gridspace # " << linearGuess << "\nThe enemy was located at gridspace # " << enemyLocation << "\nIt took the random search approximately " << linearTries << " analyzation sequences to find the enemy within the grid.\n\nCommencing aerial attack...\n" << endl;

                // Break statement to exit game loop
                break;
            }
        }

        // While loop to re-initialize do loop
        while (linearGuess != enemyLocation);




        // // // // // // //
        //
        // Binary search variables & game loop
        //
        // // // // // // //

        // Printing the initialization sequence
        cout << "\n ------------------\nInitialization of Skynet HK-Aerial binary search software commencing...\n ------------------\n\n";

        // Compiling the amount of tries
        int binaryTries = 0;

        // Grid high number
        int searchGridHighNumber = 64;

        // Grid low number
        int searchGridLowNumber = 1;

        // Binary search algorithm
        int targetLocationPrediction = 0;

        // Game loop
        do
        {
            // Binary search algorithm
            int targetLocationPrediction = ((searchGridHighNumber - searchGridLowNumber) / 2) + searchGridLowNumber;

            // Addition to the amount of tries
            ++binaryTries;

            // If statement regarding the greater than status of the target location prediction
            if (targetLocationPrediction > enemyLocation)
            {
                // Re-initializing the high number within the binary search algorithm
                searchGridHighNumber = targetLocationPrediction;

                // Printing that enemy location guess is too high
                cout << "Analyzation resulted in a search of gridspace # " << targetLocationPrediction << " . This gridspace is a higher number than the enemy's location. \nCommencing another analyzation...\n ------------------" << endl;
            }

            // Else if statement regarding the less than status of the target location prediction
            else if (targetLocationPrediction < enemyLocation)
            {
                // Re-initializing the low number within the binary search algorithm
                searchGridLowNumber = targetLocationPrediction;

                // Printing that enemy location guess is too low
                cout << "Analyzation resulted in a search of gridspace # " << targetLocationPrediction << " . This gridspace is a lower number than the enemy's location. \nCommencing another analyzation...\n ------------------" << endl;
            }

            // Else statement regarding successful enemy location
            else
            {
                // Printing the successful enemy location sequence
                cout << "Analyzation resulted in a search of gridspace # " << targetLocationPrediction << "\nThe enemy was located at gridspace # " << targetLocationPrediction << "\nIt took Skynet HK-Aerial approximately " << binaryTries << " analyzation sequences to find the enemy within the grid.\n\n" << endl;

                // Break statement to exit do loop
                break;
            }
        }

        // While loop to re-initialize game loop
        while (targetLocationPrediction != enemyLocation);




        // // // // // // //
        //
        // Displaying all search results
        //
        // // // // // // //

        cout << "\n ------------------\nAll Skynet HK-Aerial analyzation sequences have now been completed.\nThe enemy has successfully been eliminated.\n";
        cout << "Enemy was located at gridspace # " << enemyLocation << "\n\n";
        cout << "The human player took approximately " << humanTries << " tries to successfully find the enemy.\n";
        cout << "The random search took approximately " << randomTries << " tries to successfully find the enemy.\n";
        cout << "The linear search took approximately " << linearTries << " tries to successfully find the enemy.\n";
        cout << "The binary search took approximately " << binaryTries << " tries to successfully find the enemy.\n ------------------\n";

        cout << "Would you like to re-initialize Skynet HK-Aerial to find another enemy?\nIf so, enter 'y' then press 'enter', if not enter 'n' then press 'enter'";
        cin >> playAgain;
    } while (playAgain == 'y');
    cout << "\nThank you for using Skynet HK-Aerial software.\n";

    // Return function to ensure program success
    return 0;
}