#include <iostream>

int main(){
    int n, curmax, curmin;
    std::cout<<"please enter number:" << std::endl;
    std::cin>>n;

    curmax = n;
    curmin = n;

    std::cout << "maximum so far:" << curmax << std::endl;
    std::cout << "minimum so far:" << curmin << std::endl;
    
    bool going = true;
    while(going){
        std::cout << "please enter number:" << std::endl;
        std::cin >> n;

        if(n == 0){
            going = false;
        }
        else{
            if (n>curmax){
                curmax=n;
            }
            else if(n<curmin){
                curmin=n;
            }
            std::cout << "maximum so far: " << curmax << std::endl;
            std::cout << "minimum so far: " << curmin << std::endl;
        }
    }



}