#include <iostream>
#include <string>
#include "header.h"
#include <chrono>
#include <thread>

int main()
{
    menuu:
    std::cout << "Which planet do you want the ball to drop? Pick your choice 1 to 7.\n" << 
    "1)Earth - 9.8 m/s^2\n2)Jupiter - 24.7 m/s^2\n3)Saturn - 10.4 m/s\n4)Mars - 3.71 m/s^2\n5)Venus - 8.87 m/s^2\n"
    << "6)Neptun - 11.1 m/s^2\n7)Mercury - 3.7 m/s^2\n Your choice: ";
    int planets{};
    double gravity{};
    std::string planetstext {};
    std::cin >> planets;
    switch (planets)
    {
        case 1:
        gravity = 9.8;
        planetstext = "Earth";
        break;
        case 2:
        gravity = 24.7;
        planetstext = "Jupiter";
        break;
        case 3:
        gravity = 10.4;
        planetstext = "Saturn";
        break;
        case 4:
        gravity = 3.71;
        planetstext = "Mars";
        break;
        case 5:
        gravity = 8.87;
        planetstext = "Venus";
        break;
        case 6:
        gravity = 11.1;
        planetstext = "Neptun";
        break;
        case 7:
        gravity = 3.7;
        planetstext = "Mercury";
        break;

    }

    std::cout << "Enter the height of the tower: ";
    double height{};
    std::cin >> height;
    std::cout << "How many seconds do you want ball to fall: ";
    int secs{};
    std::cin >> secs;
    std:: cout << "Your choice of planet is " << planetstext << " with the gravity value of: " << gravity << "\nYou want your ball to fall for " << secs << " seconds from a tower that is " << height << " meters high.\nPlease type 1 to Agree. Type 0 to remake your choices. \nYour Choice: ";
    int choices {};
    std::cin >> choices;
    switch(choices)
    {
        case 0:
        goto menuu;
        break;
        
        case 1: 
        break;
    }
    for (int i = 0; i <= secs ; i++)
    {
        
        if (height - fallendistance(i , gravity) < 0)
        {
        std::cout << "At " << i << " seconds, ball is on the ground.\n";
        break;
        }
        std::cout << "At " << i << " seconds, ball is at " << height - fallendistance(i, gravity) << " meters.\n";
        std::this_thread::sleep_for(std::chrono::seconds(1));


    }
    system("pause");
}