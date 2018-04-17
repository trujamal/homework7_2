#include <iostream>
#include <stack>
#include <vector>
#include <sstream>

void print_info(std::vector<int> p_current, std::vector<int> p_temp) {
    for(int i = p_current.size() - 1; i > 0; i--)
        std::cout << p_current[i];
    std::cout << p_current[0];
    for(int i = 0; i < p_temp.size() - 1; i++)
        std::cout<< p_temp[i];
    std::cout << p_temp[p_temp.size() - 1] << std::endl;
}

std::vector<int> sorting_algorithim(std::vector a) {
    std::vector<int> temp_vector;

    // Radix Sort Algorithim






    return temp_vector;
}

int main() {
    std::string line_input;
    std::vector<int> pancake_sequence;
    std::stringstream ss;
    int num_values;


    while(std::cin >> line_input)
    {
        ss.str(line_input);
        while(ss >> num_values) // Placing int values into the vector
            pancake_sequence.push_back(num_values);

        std::vector<int> temp  = sorting_algorithim(pancake_sequence);

        // Print array information
        print_info(pancake_sequence,temp);
        // Clearing
        ss.clear();
        pancake_sequence.clear();
    }
//    return 0;
}