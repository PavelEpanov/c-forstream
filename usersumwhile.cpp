# include <iostream>
int main(){
    int sum = 0;
    int value = 0;
    while(std::cin >> value){
        std::cout << sum << std::endl;
        sum += value;
    }
    return 0;
}