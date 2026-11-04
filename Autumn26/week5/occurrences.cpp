#include <iostream>
#include <vector>

int main(){
    int n, newnum, s;
    std::cout << "please enter n:" << std::endl;
    std::vector<int> v;
    std::cin >> n;
    for(int counter=1; counter<=n; counter++){
    std:: cin >> newnum;
    v.push_back(newnum);
    }
    std::cin >> s;
    int count = 0;
    std::vector<int> indices;
    for(int counter=0; counter<n; counter++){
    if(v[counter] == s){
        count = count +1;
        indices.push_back(counter);
    }
    }
    if(count==0){
        std::cout << "there are no occurrences of " << s << std::endl;
    }
    else if(count ==1){
        std::cout << "there is 1 occurrence of " << s << " at index " << std::endl;
    }
    else{
        std::cout << "there are " << count << " occurrences of " << s << " at indices " << std::endl;
    }
    for(int counter=0; counter<count; counter++){
        std::cout << indices[counter] << std::endl;
    }
}
