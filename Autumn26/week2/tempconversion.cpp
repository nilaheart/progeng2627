#include <iostream>
#include <string>

int main(){
    double tempin, tempout;
    std::string unit_in, unit_out;

    const double celsiustofahrenheit = 2;

    std::cin >> tempin >> unit_in;

    bool valid_unit = true;

    if ((unit_in == "C") || (unit_in == "c") ){
        unit_out = "F";
        tempout = (tempin*celsiustofahrenheit)+30;
    }
    else if((unit_in == "F") || (unit_in == "f")){
        unit_out = "C";
        tempout = (tempin-30)/celsiustofahrenheit;
    }
    else{
        valid_unit = false;
    }
    if(valid_unit){
    std::cout << tempout << " " << unit_out << std::endl;
    }
    else{
        std::cout << "error, unit not recognised" << std::endl;
    }
}