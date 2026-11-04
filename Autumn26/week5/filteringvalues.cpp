#include <iostream>
#include <vector>

int main(){
    int n, newnum, t;
    std::vector<int> v;
    std::cin >> n;
    for(int counter=1; counter<=n; counter++){
    std:: cin >> newnum;
    v.push_back(newnum);
    }
    std::cin >> t;
    for(int counter=0; counter <n; counter++){
        if (v[counter]<t){
            std::cout << v[counter] << std::endl;
        }
    }
}