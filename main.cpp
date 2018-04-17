#include <iostream>
#include <stack>
#include <vector>
#include <sstream>

// Getting max original value to be compared to in the program
int getMax(std::vector<int> temp_vec)
{
    int radix_basis = temp_vec[0];
    for (int i = 1; i < temp_vec.size(); i++)
        if (temp_vec[i] > radix_basis)
            radix_basis = temp_vec[i];
    return radix_basis;
}

// Handles the moving of variables to the correct location to be sorted in the right position
void sorting_helper(std::vector<int> data, int max_val)
{
    int output[data.size()]; // output array
    int i, count[10] = {0};

    // Store count of occurrences in count[]
    for (i = 0; i < data.size(); i++)
        count[ (data[i]/max_val)%10 ]++;

    // Change count[i] so that count[i] now contains actual
    //  position of this digit in output[]
    for (i = 1; i < 10; i++)
        count[i] += count[i - 1];

    // Build the output array
    for (i = data.size() - 1; i >= 0; i--)
    {
        output[count[ (data[i]/max_val)%10 ] - 1] = data[i];
        count[ (data[i]/max_val)%10 ]--;
    }

    // Copy the output array to arr[], so that arr[] now
    // contains sorted numbers according to current digit
    for (i = 0; i < data.size(); i++)
        data[i] = output[i];
}

// Radix Sort
std::vector<int> sort_algorithim(std::vector<int> data) {
    int max_value = getMax(data);

    for (int j = 1; max_value/j > 0; j *= 10)
        sorting_helper(data, j);
return data;
}

void print_info(std::vector<int> info) {
    for(auto x: info)
        std::cout << x << ' ';
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

        std::vector<int> temp  = sort_algorithim(pancake_sequence);

        // Print vector information
        print_info(temp);
        // Clearing
        ss.clear();
        pancake_sequence.clear();
    }
//    return 0;
}