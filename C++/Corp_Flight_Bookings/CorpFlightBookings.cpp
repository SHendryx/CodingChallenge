//
// Created by SHendryx on 4/9/21.
//

#include <vector>
#include <iostream>
#include "CorpFlightBookings.h"

std::vector<int> corpFlightBookings(std::vector<std::vector<int>>& bookings, int n){
    /*
     * We have to use cumulative math to solve this problem. An iterative brute-force method has a time complexity of m * n.
     * This is too long for large problems. A better, but far less intuitive, solution is utilizing cumulative math.
     * We add the number of seats to the first flight number in the booking. Keeping in mind that we will later add these
     * seats to the following flights, we will also subtract this number of seats from the flight immediately after the
     * last flight. Subtracting this number means the number of seats won't carry over to the remaining flights. It nulls
     * it out. This isn't incredibly intuitive, but it does work and has a time complexity of 2n or just O(n).
    */
    std::vector<int> res(n);
    /*
     * This loop simply adds the number of seats to the first flight and removes the number of seats from the flight
     * after the last flight, thereby stopping the culmination of seats on further flights.
     */
    for (const auto& v : bookings)
    {
        res[v[0] - 1] += v[2];
        if (v[1] < n){
            res[v[1]] -= v[2];
        }
    }
    /*
     * This loop culminates the number of seats from previous flights. This is some crafty math which greatly reduces
     * the time complexity of the problem.
     */
    for (int i = 1; i < n; ++i)
    {
        res[i] += res[i - 1];
    }
    return res;
    // This implementation exceeds time limit
    /*
    std::vector<int> seats(numFlights, 0);

    for (int i = 0; i < numFlights; i++){
        for (int j = 0; j < bookings.size(); j++){
            if (i + 1 >= bookings[j][0] && i + 1 <= bookings[j][1]){
                seats[i] += bookings[j][2];
            }
        }
    }
    */

    // This implementation exceeds the time limit.
    /*
    unsigned long numBookings = bookings.size();      // number of bookings in array
    // Now we will traverse the bookings and add the number of seats to each flight num
    for (int i = 0; i < numBookings; i++){
        for (int flight = bookings[i][0] - 1; flight < bookings[i][1]; flight++){
            seats[flight] += bookings[i][2];
        }
    }
    */

    // Test input
    /*
    // define the vector we will use to store the flight information
    std::vector<std::vector<int>> flights(numBookings, std::vector<int> (numFlights, 0));
    // Now we will traverse the bookings and add the number of seats to each flight num
    for (int i = 0; i < numBookings; i++){
        for (int flight = bookings[i][0] - 1; flight < bookings[i][1]; flight++){
            flights[i][flight] = bookings[i][2];
        }
    }
    */

    // Test Output
    /*
    // let's output the booking information
    std::cout << "Flight: ";
    for (int i = 0; i < numFlights; i++){
        std::cout << "\t" << i + 1;
    }
    std::cout << "\n";
    for (int i = 0; i < numBookings; i++){
        std::cout << "Booking " << i + 1;
        for (int j = 0; j < numFlights; j++){
            std::cout << "\t" << flights[i][j];
        }
        std::cout << "\n";
    }
    */
    //return seats;
}