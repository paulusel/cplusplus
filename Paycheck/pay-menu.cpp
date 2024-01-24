#include <iostream>
#include <ostream>

int main(){
    const float PAY_RATE = 16.78, // normal payment rate
                OVER_FACTOR = 1.5, // factor of PAY_RATE for ovrtime
                SS_TAX = 0.06, // social security tax
                FED_TAX = 0.14, // federal tax
                STATE_TAX = 0.05, // state tax
                UNION_DUE = 10, // Amount in dollars for union dues
                H_INSURANCE = 35; // Health insurance if dependants are more than 2

    int w_hours, n_dependant;
    float net, gross, overtime = 0, state_tax, fed_tax,
            soc_sec, union_due, h_insurance = 0;

    std::cout << "Enter hours worked: ";
    std::cin >> w_hours;
    std::cout << "Enter number of dependants: ";
    std::cin >> n_dependant;

    if(w_hours > 40){
        gross = PAY_RATE * 40;
        overtime = (w_hours - 40) * PAY_RATE * OVER_FACTOR;
    }
    else{
        gross = PAY_RATE * w_hours;
    }
    
    state_tax = gross * STATE_TAX;
    fed_tax = gross * FED_TAX;
    soc_sec = gross * SS_TAX;

    if(n_dependant > 2){
        net = gross - state_tax - fed_tax - soc_sec - UNION_DUE - H_INSURANCE;
    }
    else{
        net = gross - state_tax - fed_tax - soc_sec - UNION_DUE;
    }
    
    // Output
/*
 *    std::cout << "Gross Pay: " << gross << std::endl
 *        << "Federal Tax: " << fed_tax << std::endl
 *        << "State Tax: " << state_tax << std::endl
 *        << "Union Due: " << UNION_DUE << std::endl;
 *    if(n_dependant > 2){
 *        std::cout << "Health Insurance: " << H_INSURANCE << std::endl;
 *    }
 *    std::cout << "Net Pay: " << net << std::endl;
 *
 */
    int choice;
    std::cout << "What do you want to see?" << std::endl
        << "1. Gross Pay" << std::endl
        << "2. Federal Tax" << std::endl
        << "3. State Tax" << std::endl
        << "4. Union Due" << std::endl
        << "5. Health Insurance" << std::endl
        << "6. Anything else to exit" << std::endl;
    std::cin >> choice;

    switch (choice) {
        case 1:
            std::cout << "Gross Pay: "<< gross << std::endl;
            break;
        case 2:
            std::cout << "Federal Tax: " << fed_tax << std::endl;
            break;
        case 3:
            std::cout << "State Tax: " << state_tax << std::endl;
            break;
        case 4:
            std::cout << "Union Due: " << UNION_DUE << std::endl;
            break;
        case 5:
            if(n_dependant > 2){
                std::cout << "Health Insurance: " << H_INSURANCE << std::endl;
            }
            else{
                std::cout << "Health Insurance: 0" << std::endl; 
            }
        default:
            break;
    }

    return 0;
}
