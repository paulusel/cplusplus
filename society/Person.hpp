#include <string>

enum EventType{
    BIRTH = 1;
    DEATH = 2;
    MARRIAGE = 3;
    DIVORCE = 4;
}

class Human{
    std::string     name;
    char            sex;
    unsigned int    age;
    std::string     color;
    double          height;
    double          weight;
    Person          father;
    Person          mother;
    Person          children[];
    double          wealth;
    std::string     m_status;
    std::string     education;
    std::string     skills[];
}

class Person{
    Human           self;
    Human           mother;
    Human           father;
    Human           children[];
}

class Event{

    Date            date;
    Person          person;    
}

class Registry{
    private:
        std::vector<Person>  registry;
    public:
        bool register(Event event);
        unsigned int pop_no();
        bool search();
        void    destroy();
}
