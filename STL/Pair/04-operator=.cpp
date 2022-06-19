// pair::operator=
#include <iostream>
#include <string>
#include <utility>
using namespace std;

int main(void) {
    pair<string, int> planet, homeplanet;

    planet = {"Earth", 6371};

    homeplanet = planet;
    // pair<string, int> homeplanet = planet;

    cout <<"Home planet: " <<homeplanet.first <<"\n";
    cout <<"Planet size: " <<homeplanet.second <<"\n\n";

    // assign reference
    pair<string, int> &ref_planet = homeplanet;

    ref_planet = {"Mongol", 23423};
   
    cout <<"Home planet: " <<homeplanet.first <<"\n";
    cout <<"Planet size: " <<homeplanet.second <<"\n";


}