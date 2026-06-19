#include <iostream>
#include <string>
using namespace std;
string format_numbers(string str){
    // Check if input is numeric
    for(char c: str){
        if(!(c >= '0' && c <= '9')){
            return "This is an invalid input";
        }
    }
    // Create the primary string
    string result;
    int count = 0;
    for(int i = str.size() - 1; i >= 0; i--){
        result.push_back(str[i]);
        count++;
        if(count % 3 == 0 && count == str.size()){
            continue;
        }
        else if(count % 3 == 0 && count != str.size()){
            result.push_back(',');
        }
    }
    // Create the final string
    string number;
    for(int i = result.size() -1; i >= 0; i--){
        number.push_back(result[i]);
    }
    return number;
    
}
int main() {
    // Test function
    cout << format_numbers("100000") << endl; 
    // Outputs: 100,000
    cout << format_numbers("100") << endl; 
    // Outputs: 100
    cout << format_numbers("100000000") << endl; 
    // Output: 100,000,000
    cout << format_numbers("My Team"); 
    // Output: This is an invalid input
    return 0;
}