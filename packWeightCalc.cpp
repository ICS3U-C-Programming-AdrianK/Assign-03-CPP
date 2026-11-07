// copyright (c) 2026 all rights reserved
// Created by : Adrian student
// Date : 06 th NOV 2026
// This program asks the user for the weight of the package,
// the length of the package, the width of the package and
// the height of the package then calculates the volume of the
// package and finally, it tells the user whether or not the company
// will accept the package and if the package is not accepted, tell them why
#include <iomanip>
#include <iostream>
#include <string>

int main() {
    // Declare constants
    const float MAX_VOLUME = 10000;
    const float MAX_WEIGHT = 27;

    // Declare variables
    std::string lengthAsStr;
    std::string widthAsStr;
    std::string heightAsStr;
    std::string weightAsStr;
    std::string packShape;
    float lengthAsFloat;
    float widthAsFloat;
    float heightAsFloat;
    float weightAsFloat;
    float VolumeAsFloat;

    // Get the shape of the package
    std::cout << "Enter the shape your package (lowercase letters) : ";
    std::cin >> packShape;
    std::cout << "\n";
    if (packShape == "rectangle" || packShape == "rectangular shape"
    || packShape == "rectangular") {
        // Get the length of the package
        std::cout << "Enter the length your package (cm) : ";
        std::cin >> lengthAsStr;
        try {
            // cast the length to a float
            lengthAsFloat = std::stof(lengthAsStr);
            // Get the width of the package
            std::cout << "Enter the width your package (cm) : ";
            std::cin >> widthAsStr;
            try {
                // cast the width to a float
                widthAsFloat = std::stof(widthAsStr);
                // Get the weight of the package
                std::cout << "Enter the weight your package (kg) : ";
                std::cin >> weightAsStr;
                try {
                    // cast the weight to a float
                    weightAsFloat = std::stof(weightAsStr);
                    // Get the height of the package
                    std::cout << "Enter the height your package (cm) : ";
                    std::cin >> heightAsStr;
                    try {
                        // cast the height to a float
                        heightAsFloat = std::stof(heightAsStr);
                        // Check if all the users measurements are positive
                        if (heightAsFloat > 0 && widthAsFloat > 0 &&
                        weightAsFloat > 0 && lengthAsFloat > 0) {
                            // Calculate the volume of the package
                            float packVolume = heightAsFloat *
                             widthAsFloat * lengthAsFloat;
                            // Display volume to 2 decimal places
                            std::cout << std::fixed << std::setprecision(2)
                                << std::setfill('0')
                                << "The volume of your package is : "
                                << packVolume << "cm³" << std::endl;
                            if (weightAsFloat > MAX_WEIGHT ||
                            packVolume > MAX_VOLUME) {
                                if (weightAsFloat > MAX_WEIGHT) {
                                    std::cout << " Your package is not "
                                        << "acceptable because it is "
                                        << "too heavy";
                                    std::cout << "\n";
                                } else {
                                    std::cout << "Your package has an "
                                        << "appropriate weight";
                                }
                                if (packVolume > MAX_VOLUME) {
                                    std::cout << "Your package is not "
                                        << "acceptable because it is "
                                        << "too voluminous";
                                    std::cout << "\n";
                                } else {
                                    std::cout << "Your package has an "
                                        << "appropriate volume";
                                    std::cout << "\n";
                                }
                            } else {
                                std::cout << "Your package is acceptable";
                                std::cout << "\n";
                            }
                        } else {
                            std::cout << " wrong input, all measurements "
                                << "have to be greater than 0 ";
                            std::cout << "\n";
                        }
                    } catch (std::invalid_argument) {
                        std::cout << heightAsStr << "is not a number";
                        std::cout << "\n";
                    }
                } catch (std::invalid_argument) {
                    std::cout << weightAsStr << "is not a number";
                    std::cout << "\n";
                }
            } catch (std::invalid_argument) {
                std::cout << widthAsStr << "is not a number";
                std::cout << "\n";
            }
        } catch (std::invalid_argument) {
            std::cout << lengthAsStr << "is not a number";
            std::cout << "\n";
        }
    } else {
        std::cout << "Sorry , your package has to be in a rectangular shape";
        std::cout << "\n";
    }
    // finally statement
    std::cout << "Thanks for playing !!";
    std::cout << "\n";
}
