// 주사위 세 개

#include <iostream>

using namespace std;

int main() {
    int dice1, dice2, dice3;
    cin >> dice1 >> dice2 >> dice3;
    int reward;
    
    if(dice1 == dice2 && dice2 == dice3) {
        reward = 10000 + (dice1 * 1000);
    }
    else if (dice1 == dice2 || dice1 == dice3) {
        reward = 1000 + (dice1 * 100);
    }
    else if (dice2 == dice3) {
        reward = 1000 + (dice2 * 100);
    }
    else {
        int large = dice1;
        if (dice2 > large) large = dice2;
        if (dice3 > large) large = dice3;
        
        reward = large * 100;
    } 
        
    cout << reward << endl;
  
    return 0;
}
