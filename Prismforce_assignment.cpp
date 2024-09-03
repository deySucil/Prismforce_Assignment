#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<float> powers(11); // Declaring a vector in which we will store the values k1,k2...k11
    float init_power;         // In this var we will store the initial power p
    int a, b;

    cin >> init_power; // Taking the value of initial power p

    cin >> a >> b; // Taking the values of a and b as input

    for (int i = 0; i < 11; i++)
        cin >> powers[i];

    int cnta = 0; // A variable that will count the no of times Abhimanyu skip a enemy
    int cntb = 0; // Count the no of times Abhimanyu regenerate his power

    float curr_pow = init_power; // Declaring a var named curr_pow assigning the value of initial power to it
    for (int i = 0; i < 11; i++)
    {
        if (i == 3 || i == 7)
        {
            if (curr_pow >= powers[i] + powers[i - 1] / 2)
            {
                curr_pow -= powers[i] + powers[i - 1] / 2;
            }
            else if (init_power >= powers[i] + powers[i - 1] / 2)
            {
                if (cntb >= b)
                {
                    if (cnta >= a)
                    {
                        cout << "Abhimanyu can't cross the Chakravyuh." << endl;
                        return 0;
                    }
                    else
                    {
                        cnta++;
                    }
                }
                else
                {
                    curr_pow = init_power; // Regenerating his power

                    cntb++; /*Incrementing the var cntb that will store the no
                    of time Abhimanyu have regenerated his power*/

                    curr_pow -= (powers[i] + powers[i - 1] / 2); /*After fighting decrementation of his power*/
                }
            }
            else
            {
                if (cnta >= a)
                {
                    cout << "Abhimanyu can't cross the Chakravyuh." << endl;
                    return 0;
                }
                else
                {
                    cnta++; // Incrementing the no of times he skip an enemy
                }
            }
        }
        else
        {
            if (curr_pow >= powers[i])
            {
                curr_pow -= powers[i];
            }
            else if (init_power >= powers[i])
            {
                if (cntb >= b)
                {
                    if (cnta >= a)
                    {
                        cout << "Abhimanyu can't cross the Chakravyuh." << endl;
                        return 0;
                    }
                    else
                    {
                        cnta++;
                    }
                }
                else
                {
                    curr_pow = init_power; // Regenerating his power

                    cntb++; /*Incrementing the var cntb that will store the no
                    of time Abhimanyu have regenerated his power*/

                    curr_pow -= powers[i]; /*After fighting decrementation of his power*/
                }
            }
            else
            {
                if (cnta >= a)
                {
                    cout << "Abhimanyu can't cross the Chakravyuh." << endl;
                    return 0;
                }
                else
                {
                    cnta++; // Incrementing the no of times he skip an enemy
                }
            }
        }
    }

    cout << "Abhimanyu can successfully cross the Chakravyuh." << endl;
}

/*Time Complexity: In general for using a loop the time complexity must be linear that is O(n), where n is the no of iterations

But as here n is fixed i.e 11, hence the time complexity is constant.

So, here the Time Complexity = O(1)
*/

/*Space-Complexity: Similary as Time complexity Space complexity is also constant as the lenght of vector is fixed
So, the Space Complexity = 0(1)
*/
/*

Test Case 1 (Success):
Description: Abhimanyu has enough power and a few skips and recharges.
Input:
enemyPower = [3, 2, 1, 4, 3, 5, 2, 1, 3, 2, 1]
power = 10
skips = 2
recharges = 2
Explanation: Abhimanyu can use his power and recharges effectively to defeat or skip enemies, managing to cross the Chakravyuh.
Output:
Abhimanyu can successfully cross the Chakravyuh.



Test Case 2 (Failure):
Description: The initial power is insufficient, and recharges are limited.
Input:
enemyPower = [6, 3, 2, 3, 2, 1, 4, 3, 5, 2, 1, 3, 2, 1]
power = 6
skips = 3
recharges = 2
Explanation: With limited initial power and recharges, Abhimanyu will struggle to get past several enemies, and even though he has three skips, he may not be able to cross all enemies.
Output:
Abhimanyu can't cross the Chakravyuh.
*/