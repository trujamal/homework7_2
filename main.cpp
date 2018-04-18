#include <iostream>
#include <cstdio>
#include <sstream>

/**
 * @author Jamal Rasool
 * @version 2.0
 * @date 4/17/18
 * @desc Program is designed to calculate the number of flips required for a given sequence of pancakes
 * @note Data structure used in this assignment arrays
 * @return exit code 0
 */

int main() {

    int const DIAMETER = 100; // setting the maximum size
    std::string user_input;

    while(getline(std::cin, user_input)) {

        // ----Declaring variables ----
        std::stringstream sin(user_input);
        int pancake_sequence[DIAMETER], counter_var = 0;
        int flip[DIAMETER], iterate_arr = 0, temporary_val;

        // Checking the user input for the number of characters within it; essentially for size keeping
        while(sin >> pancake_sequence[counter_var])
            counter_var++;

        for(int i = 0; i < counter_var; i++) {
            std::cout << " " << pancake_sequence[i]; // Displays user input
        }

        printf("%s\n",""); // formatting
        for(int i = 0; i < counter_var; i++) {

            int max_flip_index = counter_var-i-1;

            for(int j = 0; j < counter_var-i; j++) {
                if(pancake_sequence[max_flip_index] < pancake_sequence[j])
                    max_flip_index = j;
            }

            if(max_flip_index == counter_var-i-1)
                continue; // Equal values continue and don't modify contents
            if(max_flip_index) {

                flip[iterate_arr++] = counter_var-max_flip_index; // Setting index of the flipped array with the number of times it had to be moved
                for(int j = 0, k = max_flip_index; j < k; j++, k--)
                    temporary_val = pancake_sequence[j], pancake_sequence[j] = pancake_sequence[k], pancake_sequence[k] = temporary_val;
            }
            flip[iterate_arr++] = i+1; // Setting value to the array index
            for(int j = 0, k = counter_var-i-1; j < k; j++, k--)
                temporary_val = pancake_sequence[j], pancake_sequence[j] = pancake_sequence[k], pancake_sequence[k] = temporary_val;
        }
        for(int i = 0; i < iterate_arr; i++)
            std::cout << flip[i] << " "; // Displays the flipped output.
        printf("%s\n","0"); // formatting last zero at the end of each use-case
    }
    return 0;
}