#include <iostream>

bool leap_year(int year){
    bool ly;
    if(year%4==0){
        if ((year % 100)==0){
            if ((year % 400)==0){
                ly=true;
            }
            else{
                ly=false;
            }
        }
        else{
            ly=true;
        }
    }
    else{
        ly=false;
    }
    return ly;
}

void next_date(int d1, int m1, int y1, int& d2, int& m2, int& y2){
    int daysinmonth;
    if (m1==2){
        if(leap_year(y1)){
            daysinmonth = 29;
        }
        else{
            daysinmonth = 28;
        }
    }
    else if (m1 == 4 || m1 == 6 || m1 == 9 || m1 == 11){
        daysinmonth = 30;
    }
    else{
        daysinmonth = 31;
    }
    d2 = d1 + 1;
    m2 = m1;
    y2 = y1;    

    if (d2 > daysinmonth){
        d2 = 1;
        m2 = m1 + 1;
        if (m2 > 12){
            m2 = 1;
            y2 = y1 + 1;
        }
    }
}

int main(){
    int day, month, year;
    int next_day, next_month, next_year;

    std::cout << "Enter day, month and year separated by spaces: ";
    std::cin >> day >> month >> year;

    next_date(day, month, year, next_day, next_month, next_year);

    std::cout << "The next date is "
              << next_day << "/" << next_month << "/" << next_year
              << std::endl;
}