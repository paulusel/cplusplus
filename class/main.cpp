#include <iostream>

class woman{
    private:
        int age;
        double balance;
        std::string habit;
    public:
        void create_woman(int, double, std::string);
        std::string beuty;
        std::string name;
        int get_age();
        std::string get_habit();
        double get_balance();
};

int woman::get_age(){
    return age;
}

double woman::get_balance(){
    return balance;
}

std::string woman::get_habit(){
    return habit;
}

void woman::create_woman(int age_in, double balance_in, std::string habit_in){
    age = age_in;
    balance = balance_in;
    habit = habit_in;
}

int main(){
    woman mygirl;

    mygirl.name = "Kate";
    mygirl.beuty = "Hot";

    mygirl.create_woman(23, 1000, "traditional");

    std::cout << "My girl " << mygirl.name << " is " << mygirl.get_habit()
        << " in habit and is of age " << mygirl.get_age() << "." << std::endl; 
    
    return 0;
}