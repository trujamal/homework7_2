#include <iostream>
#include <sstream>
#include <deque>
#include <algorithm>
#include <vector>

std::vector<int> reverse_vec(std::vector<int> a){
    std::reverse(a.begin(), a.end());
    return a;
}
int main() {
    std::string line_input;
    int num_values;

    while(std::cin >> line_input)
    {
        std::vector<int> pancake_sequence;
        std::stringstream ss;
        ss.str(line_input);
        while(ss >> num_values) // Placing int values into the vector
            pancake_sequence.push_back(num_values);

        for(std::vector<int>::iterator it=pancake_sequence.begin(); it!=pancake_sequence.end(); ++it)
        {
            std::vector<int>::iterator Max = max_element(it, pancake_sequence.end());
            if(Max!=it)
            {
                if(Max != pancake_sequence.end()-1)
                {
                    reverse(Max, pancake_sequence.end());
                    std::cout<<distance(pancake_sequence.begin(), Max)+1<<' ';
                }
                reverse(it,pancake_sequence.end());
                std::cout<<distance(pancake_sequence.begin(),it)+1<<' ';
            }
        }
        // Clearing
        ss.clear();
        pancake_sequence.clear();
    }
//    return 0;
}
while(getline(cin,str))
{
cout<<str<<endl;
istringstream iss(str);
std::vector<int> que;
for(int tmp; iss>>tmp; que.push_back(tmp));
for(std::vector<int>::iterator it=que.begin(); it!=que.end(); ++it)
{
std::vector<int>::iterator Max = max_element(it, que.end());
if(Max!=it)
{
if(Max != que.end()-1)
{
reverse(Max, que.end());
cout<<distance(que.begin(), Max)+1<<' ';
}
reverse(it,que.end());
cout<<distance(que.begin(),it)+1<<' ';
}
}
cout<<"0\n";
}
