#include <iostream>
using namespace std;

    void choose();

    // int variables
    int choice;
    int wanted_bus;
    int seat_num;
    int total = 0;

    // arrays
    int seat_nums_av[32];
    int bus_no[50];

    // string variables
    string passanger_name;
    string driver_name;
    string arrival_time;
    string departure_time;
    string from;
    string to;
    string state;
    string stars = "*******************************************";
    string edge = "==================================";

    // counters
    int i = 0;
    int k = 0;
    int p = 0;
    int y = 0;
    int z = 0;

    // function that provides the possibility to register new bus
    void install()
    {
        // loop that checks if there is a free space for another bus
        // and ads input to the array if there is one.

        // If user want to exit command he can to that with entering
        // the -1 input

        // If the bus number already exists, it returns notification
        // related to that
        while(true)
        {
            if(bus_no[i] == NULL || bus_no[i] == 0)
            {
                cout << "Enter new bus number: ";
                cin >> bus_no[i];

                if(bus_no[i] == -1)
                {
                    choose();
                }
                break;
            }
            else
            {
                i++;
                cout << "That number already exists, " << endl;
            }
        }

        // Asking the user to input all
        // the other data for registering
        // new bus

        // User still has the possibility
        // to exit by inputing -1 as a command

        // *this relates to the whole other part
        //  this function under this comment
        cout << "Enter drivers name: ";
        cin >> driver_name;

        if(driver_name == "-1")
        {
            choose();
        }

        cout << "Enter arrival time: ";
        cin >> arrival_time;

        if(arrival_time == "-1")
        {
            choose();
        }

        cout << "Enter departure time: ";
        cin >> departure_time;

        if(departure_time == "-1")
        {
            choose();
        }

        cout << "From: ";
        cin >> from;

        if(from == "-1")
        {
            choose();
        }

        cout << "To: ";
        cin >> to;
        cout << endl;

        if(to == "-1")
        {
            choose();
        }

        cout << stars << endl << endl;
    }

    // Providing user the possibility
    // to make a reservation based on
    // the available buses that exist
    void reservation()
    {
        // For every of the 50 times which
        // user has to try entering valid number,
        // nested for loop checks if number of
        // the bus our user choose is registered,
        // other words - is it in the array

        // User also have the possibility to
        // exit by providing -1 as a command
        for(int k = 0; k < 50; k++)
        {
            cout << "Enter wanted bus number: \n";
            cin >> wanted_bus;

            if(wanted_bus == -1)
            {
                wanted_bus = NULL;
                choose();
            }
            for(int p = 0; p < 50; p++)
            {
                if(wanted_bus == bus_no[p])
                {
                    k = 54;
                }
            }
        }

        // For every of the 50 times which
        // user has to try entering valid number,
        // nested for loop checks if number of
        // the seat our user choose is registered,
        // other words - is it in the array

        // User also have the possibility to
        // exit by providing -1 as a command

        // If invalid value is entered,
        // there is notification popping up
        for(int y = 0; y < 50; y++)
        {
            cout << "Enter seat number: \n";
            cin >> seat_num;

            if(seat_num == -1)
            {
                choose();
            }
            else
            {
                if(seat_num < 32 && seat_num > 0)
                {
                    for(int z = 0; z < 32; z++)
                    {
                        if(seat_nums_av[z] == NULL)
                        {
                            seat_nums_av[z] = seat_num;
                            y = 54;
                        }
                    }
                }
                else
                {
                    cout << "There is 32 seats in this bus, enter valid number.\n\n";
                }
            }
        }

        cout << "What is your name?" << endl;
        cin >> passanger_name;

        if(passanger_name == "-1")
        {
            choose();
        }
    }

    // Displaying all the
    // available buses
    void avail_bss()
    {
        for(i=0; i<50; i++)
        {
            if(bus_no[i] != NULL)
            {
                total ++;
                cout << "Bus Number " << bus_no[i] << endl << endl;
            }
            else
            {
                if(i == 49 && total < 1)
                {
                    cout << "\n~There are no available buses, sorry~\n\n";
                }
            }
        }
    }

    // Reservation Info.
    // Two cases:
    // - reservation false
    // - reservation true
    void res_info()
    {
        cout << stars << endl << endl;

        cout << "Reservation Information:\n\n";

        if(wanted_bus == 0)
        {
            cout << "Bus Number:     ";
            cout << "   Driver: ";
            cout << "   Arrival Time: "<< endl << endl;

            cout << "Departure Time: ";
            cout << "   From:   ";
            cout << "   To: " << endl << endl;
        }
        else
        {
            cout << "Bus Number: " << wanted_bus;

            cout << "      Driver: " << driver_name;
            cout << "   Arrival Time: " << arrival_time << endl << endl;

            cout << "Departure Time: " << departure_time;
            cout << "   From: " << from;
            cout << "   To: " << to << endl << endl;
        }

        cout << stars << endl << endl;

        cout << "SEATS: \n\n";
        for(i=1; i < 33; i++)
        {
            // FIX NEEDED - instead of having passengers name only next to the seat
            // which is reserved by him, there is a name next to every seat.........
            state = (seat_nums_av[i-1] == 0) ? state = "Empty" : state = passanger_name;

            cout << i << ". " << state << "   ";

            if(i==4 || i==8 || i==12 || i==16 || i==20 || i==24 || i==28 || i==32)
            {
                cout << endl << endl;
            }
        }
    }

    // :0
    void quit()
    {
        exit(0);
    }

    // Only Function We Are Calling
    // main menu which is calling
    // the rest of the functions
    void choose()
    {

        while(choice!=5)
        {
            cout << edge << endl;
            cout << "1. Install Bus Information\n";
            cout << "2. Make a Reservation\n";
            cout << "3. See Buses Available\n";
            cout << "4. See Bus Reservation Information\n";
            cout << "5. Exit\n";
            cout << edge << endl << endl;

            cout << "Type command number: ";
            cin >> choice;
            cout << endl;

            switch(choice)
            {
                case 1:
                    install();
                    break;

                case 2:
                    reservation();
                    break;

                case 3:
                    avail_bss();
                    break;

                case 4:
                    res_info();
                    break;

                case 5:
                    quit();
                    break;
            }
        }
    }

int main()
{
    choose();
}
