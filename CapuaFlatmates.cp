// OFFICIAL ASSIGNMENT INSTRUCTIONS [Grade 12]
// You are in the ancient roman town of Capua of 10 houses, with a population of 15 people, each
// with their own individual name, address, monthly salary, and bank account. The Almighty
// Caesar Augustus wants you to keep track of the rooming arrangements within the city for 2
// years.  Everyone started off with 100 denarii in their account, and has a randomly pre-set
// monthly salary between 10 and 50 denarii. The town starts off with 10 people (chosen at
// random) moving in together at the beginning of the year.
// a. Every month, two random people get together and live together in one of the houses. If one of them already living with another person, another two people get together
//   i. When two people move in, they pool their bank account into one account
// b. Every month, one big roommate clash breaks out.  Two people will split their joint account in half, each taking half the money, and will the first available house.
// c. Every month, everyone gets their monthly salary and puts it into their savings account (assume they forage for food, don’t use electricity, and are tax evaders).
// Output the money and address of each person after each month.
// At the end, output the money and address of each person, the current roommates in pairs, as well as stating the longest surviving roommate relationship.

// -----------------------------------------------------------------------

//NAME: Anupya Pamidimukkala
//COURSE: ICS4U1
//ASSIGNMENT: ROMAN VILLAGE ASSIGNMENT
//Input: Nothing
//Output: Account balance and address of each person in Capua for every month uptil 2 years;
//        Final account balance and addresses of each person in Capua after 2 years;
//        longest surviving flatmate relationship
//DATE: NOV 30, 2015

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stdlib.h>
#include <stdio.h>
#include <cstring>
using namespace std;
int main()
{
    srand(time(NULL)); //generates random numbers; not pre-set random numbers by the computer
    int population = 15; //stores total number of people in the town
    //int salary = 0; //stores salary of each person
    int salaryArr[population]; //creates an array that stores each person's monthly salary
    int rnd = 0; //stores a random integer
    int rnd1 = 0; //stores a random integer
    int temp = 0; //stores a temporary roommate name
    int boolean = 1;
    int accountArr[population]; //ACCOUNT ARRAY: stores individual account
    //int month = 1; //stores month count
    int *pointerArr[population]; //array of pointers
    int houseMoney[10]; //ADDRESS ARRAY: stores the total savings of all housemates
    int halved = 0; //stores the halved account money when roommates split up
    int roommates[15]; //creates an array of coupled roommates
    int byebye = 0;
    int rel[5]; //Tracks longest survivng relationship
    int conflicts[5]; //stores # of conflicts in each house
    for (int a = 0; a<5; a++) //sets rel elements as 0, 100, 200, 300, 400
    {
        rel[a] = rnd+100;
        rnd+=100;
    }

    int *p1;
    int *p2;
    int *p3;
    int *p4;
    int *p5;
    int *p6;
    int *p7;
    int *p8;
    int *p9;
    int *p10;
    int *p11;
    int *p12;
    int *p13;
    int *p14;
    int *p15;

    //CREATES ACCOUNTS FOR ALL 15 PEOPLE
    for (int a = 0; a<15; a++)
    {
        accountArr[a] = 100; //base salary for all 15 people
    }

    //makes a random array of roommates
    //generates salaries correspondingly and stores it in array
    for (int a = 0; a<15; a++)
    {
        rnd = rand()%15;
        boolean = 1; //reset
        //rnd = (rand()%(15-a))+a; //pick a random roommate, eliminating last random
        while (boolean != 0)
        {
            boolean = 0;
            for (int b = 0; b<a; b++)
            {
                if (rnd == roommates[b]) //if roommate already exists
                {
                    while (rnd == roommates[b]) //loops until new roommate is picked
                    {
                        rnd = rand()%15; //pick a new roommate
                        boolean = 1;
                    }
                }
            }
            roommates[a] = rnd; //stores the random roommate in the array
            rnd1 = (rand()%40) + 10; //generates random salary
            salaryArr[a] = rnd1; //stores random salary in array
        }
    }


    //TWO POINTERS POINTING AT THE SAME ADDRESS = IF PAIR LIVING TOGETHER
    //CREATES AN ARRAY OF POINTERS THAT STORES THE ADDRESS VALUES OF EACH POINTER

    p1 = &accountArr[0];
    pointerArr[0] = p1;

    p2 = &accountArr[1];
    pointerArr[1] = p2;

    p3 = &accountArr[2];
    pointerArr[2] = p3;

    p4 = &accountArr[3];
    pointerArr[3] = p4;

    p5 = &accountArr[4];
    pointerArr[4] = p5;

    p6 = &accountArr[5];
    pointerArr[5] = p6;

    p7 = &accountArr[6];
    pointerArr[6] = p7;

    p8 = &accountArr[7];
    pointerArr[7] = p8;

    p9 = &accountArr[8];
    pointerArr[8] = p9;

    p10 = &accountArr[9];
    pointerArr[9] = p10;


    //IF LIVING ALONE, POINTERS POINT AT LAST FIVE HOUSES
    p11 = &accountArr[10];
    pointerArr[10] = p11;

    p12 = &accountArr[11];
    pointerArr[11] = p12;

    p13 = &accountArr[12];
    pointerArr[12] = p13;

    p14 = &accountArr[13];
    pointerArr[13] = p14;

    p15 = &accountArr[14];
    pointerArr[14] = p15;

    //ACTUAL GAMEPLAY BEGINS
    for (int month = 0; month < 25; month++)
    {
        cout << "You are in MONTH: " << month <<endl;

        //ADDS MONTHLY SALARY TO THE ACCOUNTS
        for (int a = 0; a<15; a++)
        {
            if (roommates[a]==0)
            {
                *p1+= salaryArr[a];
                cout << "Account balance of person " << roommates[a] << " is " << *p1 << " denariis." <<endl;
            }
            if (roommates[a]==1)
            {
                *p2+= salaryArr[a];
                cout << "Account balance of person " << roommates[a] << " is " << *p2 << " denariis." <<endl;
            }
            if (roommates[a]==2)
            {
                *p3+= salaryArr[a];
                cout << "Account balance of person " << roommates[a] << " is " << *p3 << " denariis." <<endl;
            }
            if (roommates[a]==3)
            {
                *p4+= salaryArr[a];
                cout << "Account balance of person " << roommates[a] << " is " << *p4 << " denariis." <<endl;
            }
            if (roommates[a]==4)
            {
                *p5+= salaryArr[a];
                cout << "Account balance of person " << roommates[a] << " is " << *p5 << " denariis." <<endl;
            }
            if (roommates[a]==5)
            {
                *p6+= salaryArr[a];
                cout << "Account balance of person " << roommates[a] << " is " << *p6 << " denariis." <<endl;
            }
            if (roommates[a]==6)
            {
                *p7+= salaryArr[a];
                cout << "Account balance of person " << roommates[a] << " is " << *p7 << " denariis." <<endl;
            }
            if (roommates[a]==7)
            {
                *p8+= salaryArr[a];
                cout << "Account balance of person " << roommates[a] << " is " << *p8 << " denariis." <<endl;
            }
            if (roommates[a]==8)
            {
                *p9+= salaryArr[a];
                cout << "Account balance of person " << roommates[a] << " is " << *p9 << " denariis." <<endl;
            }
            if (roommates[a]==9)
            {
                *p10+= salaryArr[a];
                cout << "Account balance of person " << roommates[a] << " is " << *p10 << " denariis." <<endl;
            }
            if (roommates[a]==10)
            {
                *p11+= salaryArr[a];
                cout << "Account balance of person " << roommates[a] << " is " << *p11 << " denariis." <<endl;
            }
            if (roommates[a]==11)
            {
                *p12+= salaryArr[a];
                cout << "Account balance of person " << roommates[a] << " is " << *p12 << " denariis." <<endl;
            }
            if (roommates[a]==12)
            {
                *p13+= salaryArr[a];
                cout << "Account balance of person " << roommates[a] << " is " << *p13 << " denariis." <<endl;
            }
            if (roommates[a]==13)
            {
                *p14+= salaryArr[a];
                cout << "Account balance of person " << roommates[a] << " is " << *p14 << " denariis." <<endl;
            }
            if (roommates[a]==14)
            {
                *p15+= salaryArr[a];
                cout << "Account balance of person " << roommates[a] << " is " << *p15 << " denariis." <<endl;
            }
        }
        cout << endl;
        //OUTPUTS THE ADDRESS OF EACH PERSON
        cout << "Person " << roommates[0] << " lives in House 1." <<endl;
        cout << "Person " << roommates[1] << " lives in House 1." <<endl;
        cout << "Person " << roommates[2] << " lives in House 2." <<endl;
        cout << "Person " << roommates[3] << " lives in House 2." <<endl;
        cout << "Person " << roommates[4] << " lives in House 3." <<endl;
        cout << "Person " << roommates[5] << " lives in House 3." <<endl;
        cout << "Person " << roommates[6] << " lives in House 4." <<endl;
        cout << "Person " << roommates[7] << " lives in House 4." <<endl;
        cout << "Person " << roommates[8] << " lives in House 5." <<endl;
        cout << "Person " << roommates[9] << " lives in House 5." <<endl;
        cout << "Person " << roommates[10] << " lives in House 6." <<endl;
        cout << "Person " << roommates[11] << " lives in House 7." <<endl;
        cout << "Person " << roommates[12] << " lives in House 8." <<endl;
        cout << "Person " << roommates[13] << " lives in House 9." <<endl;
        cout << "Person " << roommates[14] << " lives in House 10." <<endl;


        //RECALCULATES TOTAL AMOUNT OF MONEY IN THE HOUSE EVERY MONTH
        houseMoney[0] = *pointerArr[roommates[0]] + *pointerArr[roommates[1]];
        houseMoney[1] = *pointerArr[roommates[2]] + *pointerArr[roommates[3]];
        houseMoney[2] = *pointerArr[roommates[4]] + *pointerArr[roommates[5]];
        houseMoney[3] = *pointerArr[roommates[6]] + *pointerArr[roommates[7]];
        houseMoney[4] = *pointerArr[roommates[8]] + *pointerArr[roommates[9]];
        houseMoney[5] = *pointerArr[roommates[10]];
        houseMoney[6] = *pointerArr[roommates[11]];
        houseMoney[7] = *pointerArr[roommates[12]];
        houseMoney[8] = *pointerArr[roommates[13]];
        houseMoney[9] = *pointerArr[roommates[14]];

        rnd = rand()%5; //picks a house for conflict
        //TRACKS LONGEST SURVIVING FLATMATE RELATIONSHIP
        if (rnd == 0)
        {
            rel[0]+=1; //adds a conflict to the total ever in HOUSE 1
        }
        if (rnd == 1)
        {
            rel[1]+=1; //adds a conflict to the total ever in HOUSE 2
        }
        if (rnd == 2)
        {
            rel[2]+=1; //adds a conflict to the total ever in HOUSE 3
        }
        if (rnd == 3)
        {
            rel[3]+=1; //adds a conflict to the total ever in HOUSE 4
        }
        if (rnd == 4)
        {
            rel[4]+=1; //adds a conflict to the total ever in HOUSE 5
        }

        byebye = houseMoney[rnd]/2; //temporary variable stores half of the total collective money
        *pointerArr[roommates[rnd]] = byebye; //updates the flatmate-who-stays-there's money
        *pointerArr[roommates[14-rnd]] = byebye; //updates leaving flatmate's money

        rnd1 = (rand()%5)+10; //choose a random single flatmate to replace leaving flatmate

        //SWITCHES THE ACTUAL ROOMMATES IN ARRAY
        temp = roommates[rnd1]; //stores old roommate in temporary variable
        roommates[rnd1] = roommates[(2*rnd)+1]; //moves new roommate into old roommate's spot in the house
        roommates[(2*rnd)+1] = temp; //moves old roommate into new roommate's spot

        //SWITCHES THE MONTHLY SALARIES IN ARRAY
        temp = salaryArr[rnd1]; //stores old salary in temporary variable
        salaryArr[rnd1] = salaryArr[(2*rnd)+1]; //moves new salary into old salary's spot
        salaryArr[(2*rnd)+1] = temp; //moves old salary into new salary's spot
        cout << endl;
        cout << "-------------------------------------------------" << endl;
    }

    //SORTS ALL FLATMATE CONFLICTS PER HOUSE FROM LEAST TO GREATEST
    for (int a = 0; a<5; a++)
    {
        conflicts[a] = rel[a]%100; //stores # of conflicts of each person
    }
    boolean = 1;  //resets boolean to run the while loop

    while (boolean == 1)
    {
        boolean = 0;
        for (int a = 0; a<4 ; a++)
        {
            if (conflicts[a]>conflicts[a+1]) //sorts houses by least to most # of conflicts
            {
                //SWITCHES ACTUAL HOUSE # IN ARRAY
                temp = rel[a+1]; //stores smaller value in temporary variable
                rel[a+1] = rel[a]; //places larger value in place of smaller variable
                rel[a] = temp; //stores smaller value in larger value's place

                //SWITCHES THE CONFLICT # IN THE ARRAY
                temp = conflicts[a+1]; //stores smaller value in temporary variable
                conflicts[a+1] = conflicts[a]; //places larger value in place of smaller variable
                conflicts[a] = temp; //stores smaller value in larger value's place
                boolean = 1;
            }
        }
    }


    //PROGRAM OUTPUT
    cout << "AFTER 2 YEARS: The currrent roommates" <<endl;
    cout << "In House 1, we have " << roommates[0] << " and " << roommates[14] << " living together." <<endl;
    cout << "In House 2, we have " << roommates[1] << " and " << roommates[13] << " living together." <<endl;
    cout << "In House 3, we have " << roommates[2] << " and " << roommates[12] << " living together." <<endl;
    cout << "In House 4, we have " << roommates[3] << " and " << roommates[11] << " living together." <<endl;
    cout << "In House 5, we have " << roommates[4] << " and " << roommates[10] << " living together." <<endl;
    cout << "In House 6, we have " << roommates[5] << " living alone." << endl;
    cout << "In House 7, we have " << roommates[6] << " living alone." << endl;
    cout << "In House 8, we have " << roommates[7] << " living alone." << endl;
    cout << "In House 9, we have " << roommates[8] << " living alone." << endl;
    cout << "In House 10, we have " << roommates[9] << " living alone." << endl;
    cout << endl;
    cout << "AFTER 2 YEARS: The individual account balance" << endl;
    cout << "Person 0 has: " << *p1 << " denariis." << endl;
    cout << "Person 1 has: " << *p2 << " denariis." << endl;
    cout << "Person 2 has: " << *p3 << " denariis." << endl;
    cout << "Person 3 has: " << *p4 << " denariis." << endl;
    cout << "Person 4 has: " << *p5 << " denariis." << endl;
    cout << "Person 5 has: " << *p6 << " denariis." << endl;
    cout << "Person 6 has: " << *p7 << " denariis." << endl;
    cout << "Person 7 has: " << *p8 << " denariis." << endl;
    cout << "Person 8 has: " << *p9 << " denariis." << endl;
    cout << "Person 9 has: " << *p10 << " denariis." << endl;
    cout << "Person 10 has: " << *p11 << " denariis." << endl;
    cout << "Person 11 has: " << *p12 << " denariis." << endl;
    cout << "Person 12 has: " << *p13 << " denariis." << endl;
    cout << "Person 13 has: " << *p14 << " denariis." << endl;
    cout << "Person 14 has: " << *p15 << " denariis." << endl;
    cout << endl;

    cout << "Longest surviving flatmate relationship is in House " << (rel[0])/100 + 1 << " which is currently occupied by persons " << roommates[(rel[0])/100] << " and " << roommates[14-(rel[0]/100)] << "." << endl;
}
