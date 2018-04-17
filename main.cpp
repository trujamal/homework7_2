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

/**
 * radixSort(inout theArray:ItemArray, in n:integer, in d:integer)
// sort n d-digit integers in the array theArray
	for (j=d down to 1) {
	     Initialize 10 groups to empty
	     Initialize a counter for each group to 0
	     for (i=0 through n-1) {
	          k = jth digit of theArray[i]
	          Place theArrar[i] at the end of group k
	          Increase kth counter by 1
	     }
	     Replace the items  in theArray with all the items in group 0,
  	     followed by all the items in group 1, and so on.
	}

 UVA 120
 https://saicheems.wordpress.com/2013/11/05/uva-120-stacks-of-flapjacks/

 */




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