#include <iostream>
#include <fstream>
#include <string>
#include <limits>

using namespace std;

void stringToIntCheck(std::ifstream& input){
    std::string temp;
    // while(std::getline(input, temp)){
    //     std::cout<<temp<<"\n";
    // }
    string a, b, c;
    
    input>>a;
    std::cout<<"a: "<<a<<" "<<input.tellg()<<"\n";
    input>>b;
    std::cout<<"b: "<<b<<" "<<input.tellg()<<"\n";
    input>>c;
    std::cout<<"c: "<<c<<" "<<input.tellg()<<"\n";
}

int main(){
    ifstream input("./text.txt");
    stringToIntCheck(input);
    return 0;
}
