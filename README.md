
# Prismforce Assignment



## Problem Statement
Abhimanyu is inside the Chakravyuha, which consists of 11 concentric circles, each guarded by a different enemy. Abhimanyu needs to traverse all 11 circles to reach the Pandavas' army. He starts from the innermost circle and must overcome each enemy in the circles to move forward.
## Given:
- There are 11 circles in the Chakravyuha, each guarded by an enemy with a specific power.
- Abhimanyu starts with an initial power p.
- Abhimanyu can skip fighting enemies a times.
- Abhimanyu can recharge his power b times.
- Battling an enemy in a circle will reduce Abhimanyu's power by the enemy's power.
- If Abhimanyu's power is less than the enemy's power when entering a circle, he loses the battle.
- Enemies in circles 3 and 7 have the ability to regenerate themselves with half of their initial power and can attack - Abhimanyu from behind if he continues fighting in the next circles.
## Objective: 
Write an algorithm to determine if Abhimanyu can successfully cross all 11 circles and reach the Pandavas' army.
## Input: 
- An array powers of size 11 where powers[i] represents the power of the enemy in the (i+1)-th circle.
- Initial power init_power.
- Number of skips a.
- Number of recharges b.
## Output:
- "Abhimanyu can successfully cross the Chakravyuh!" if Abhimanyu can cross all circles.
- "Abhimanyu can't cross the Chakravyuh." if he cannot.

## Approach: 
- Use bruteforce approach to explore all possible strategies (battling, skipping, recharging).
- Handle the regeneration of enemies in circles 3 and 7.
- Ensure to track the power and the number of skips and recharges left.
## Test Cases: 
###  Test case1:
### Input

- `enemyPower = [3, 2, 1, 4, 3, 5, 2, 1, 3, 2, 1]`
- `power = 10`
- `skips = 2`
- `recharges = 2`

### Output: 
Abhimanyu can successfully cross the Chakravyuh.
### Explanation

Abhimanyu needs to cross a series of enemies with different power levels. He can use his initial power of 10 to defeat some enemies, skip up to 2 enemies, and recharge his power up to 2 times. The goal is to manage these resources effectively so that he can defeat or skip all enemies and cross the Chakravyuh.

###  Test case2:
### Input

- `enemyPower = [6, 3, 2, 3, 2, 1, 4, 3, 5, 2, 1, 3, 2, 1]`
- `power = 6`
- `skips = 3`
- `recharges = 2`
### Output: 
Abhimanyu can't cross the Chakravyuh.

### Explanation: 
With limited initial power and recharges, Abhimanyu will struggle to get past several enemies, and even though he has three skips, he may not be able to cross all enemies.
Output:

## Complexity Analysis: 
### Time Complexity: 
In general for using a loop the time complexity must be linear that is O(n), where n is the no of iterations

But as here n is fixed i.e 11, hence the time complexity is constant.

#### So, here the Time Complexity = O(1)

### Space Complexity: 
Similarly like Time complexity Space complexity is also constant as the lenght of vector is fixed.
#### So, the Space Complexity = O(1).
