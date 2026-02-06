#include <iostream>

int main(){
    double input;
    double sum = 0;
    int count = 0;

    double minValue, maxValue;
    bool firstInput = True
    
    std::cout<< "Enter integers 0 to stop" << endl;

    while(std::cin >> input && input != 0) {
        if (firstInput) {
            minValue = input;
            maxValue = input;
            firstInput = false;

        }
        else {
            if (input<minValue) input = minValue;
            if (input> maxValue) input = maxValue;

        }
        sum += input;
        count++;

    }
    if (count > 0) {
        std::cout << "Min Value: " << minValue << "Max Value: " 
        << maxValue << " Average: " << (sum/count) << std::endl;

    }
    return 0;
}