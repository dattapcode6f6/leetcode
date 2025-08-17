#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string largestGoodInteger(string num) {
    string best = "";
    for(int i = 0; i + 2 < num.size(); i++) {
        if(num[i] == num[i+1] && num[i] == num[i+2]) {  
            best = max(best, num.substr(i, 3));  
    }
}
    return best;
}


int main() {
    // Test 1: Chu?i có "888"
    cout << "Test 1 (123888456): " << largestGoodInteger("123888456") << endl;
    
    // Test 2: Chu?i có nhi?u b? 3 s?
    cout << "Test 2 (111222333): " << largestGoodInteger("111222333") << endl;
    
    // Test 3: Không có b? 3 s? nào
    cout << "Test 3 (123456789): " << largestGoodInteger("123456789") << endl;
    
    // Test 4: Chu?i toàn s? 9
    cout << "Test 4 (999000112): " << largestGoodInteger("999000112") << endl;
    
    return 0;
}
