//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
#include <iostream>
#include <cmath>
#include <fstream>
#include <iomanip>
using namespace std;

int main(){
    int count = 0;
    double sum =0 , mean, std,x=0;
    string score;
    ifstream source("score.txt");
    while (getline(source,score)){
        sum += atof(score.c_str());
        count++;
        x += pow(atof(score.c_str()),2);
    }
    
    mean = sum/count;
    std = sqrt((x/count)-pow(mean,2));

    cout << "Number of data = " << count << '\n';
    cout << setprecision(3);
    cout << "Mean = " << mean << '\n';
    cout << "Standard deviation = " << std;
}