#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>

using namespace std;

int main(){
    int count = 0;
    double num = 0;
    double sum = 0;
    string line;
    ifstream pad("score.txt");
    double sumSquares;
    while(getline(pad,line)){
        num = stod(line);
        sum += num;
        sumSquares += pow(num,2);
        count ++;
    }
    
    double mean = sum / count;
    double stdev = sqrt(sumSquares / count - pow(mean,2) );
    
    cout << "Number of data = " << count << endl;
    cout << setprecision(3);
    cout << "Mean = " << sum / count << endl;
    cout << "Standard deviation = " << stdev << endl;
    pad.close();
}
