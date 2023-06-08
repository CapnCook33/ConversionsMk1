/**
 * @author J. Stephen Cook
 *
 * A conversion calculator. Certainly not original, but it's practice and conversions
 * that I often find myself looking up. Conversions to start will include weight and distance,
 * will expand to more detail and other metrics later. Possibly convert to GUI.
 *
 */

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>

using namespace std;

class Distance{
public:
    void setDistance(float newDist);
    float getDistance();
    float KiloToFeet();
private:
    float userIn;
};

void Distance::setDistance(float newDist) {
    userIn = newDist;
}

float Distance::getDistance() {
    return userIn;
}

float Distance::KiloToFeet() {
    float kiloToFeet = userIn;
}

int main() {

    Distance d1;
    float useAmount;
    int convChoice, distChoice, wghtChoice;

    cout << "What metric would you like to see?\n"
            "Press 1 for Distance, 2 for Weight, 3 for TBA, 4 for TBA, 5 for TBA." << endl;

    cin >> convChoice;
    if(convChoice == 1){
        cout << "What metric would you like to start with?\n"
                "Press 1 for Millimeters, Press 2 for Centimeters, Press 3 for Meters, Press 4 for Kilometers,\n"
                "Press 5 for Inches, Press 6 for Feet, Press 7 for Yards, Press 8 for Miles, Press 0 to Exit." << endl;
        cin >> distChoice;
        if(distChoice == 1){

        }
    }
    //Definitely gonna be making some maps for all this.
    cin >> useAmount;
    d1.setDistance(useAmount);


    return 0;
}

//Tossing this in so I can test GitHub.