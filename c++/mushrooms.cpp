#include <iostream>
#include <string>

std::string determineMushroomType(bool hasGills, bool growsInForest, bool hasRing, bool hasConvexCup) {
    if (hasGills && growsInForest) {
        if (hasRing)
            return "Corpin chevelu";
        else
            return "Girolle";
    } else if (hasGills && !growsInForest) {
        return "Pied blue";
    } else if (!hasGills && growsInForest) {
        if (hasRing)
            return "Agaric jaunissant";
        else
            return "Amanite tuemouche";
    } else if (!hasGills && !growsInForest && hasConvexCup) {
        return "Cepe de bordeau";
    }

    return "Unknown Mushroom";
}

bool getUserResponse(const std::string& question) {
    std::string response;
    while (true) {
        // formulating the question form
        std::cout << question << " (yes/no): ";
        std::cin >> response;
        if (response == "yes") {
            return true;
        } else if (response == "no") {
            return false;
        } else {
            std::cout << "Invalid response. Please enter 'yes' or 'no'." << std::endl ;
        }
    }
}

int main() {
    std::cout << "\nAnswer the following questions with 'yes' or 'no'." << std::endl;
//funcion call. But here for the case of reducing lot of valuable we pass the input as the parameter to the function without 
// valuable for holding the input.
    bool hasGills = getUserResponse("1.\tDoes the mushroom have gills?\t:");
    bool growsInForest = getUserResponse("2.\tDoes the mushroom grow in the forest?\t:");
    bool hasRing = getUserResponse("3.\tDoes the mushroom have a ring?\t:");
    bool hasConvexCup = getUserResponse("4.\tDoes the mushroom have a convex cup?\t:");

    std::string mushroomType = determineMushroomType(hasGills, growsInForest, hasRing, hasConvexCup);

    std::cout << "\nThe mushroom type is\t: " << mushroomType << std::endl;

    return 0;
}
