# Matrix-Pattern
It's time of ACM ICPC World Finals. A lot of teams from all over the world have gathered to compete. Their stay has been planed at a grand hotel. As the organizers want people to interact with each other, they accommodated all the people in a single floor of the hotel. There are a total n * m rooms in the floor, which are arranged in n rows, with each row containing m rooms.

Teams have come from various countries. There are a total of C such countries, and each country has ci teams. Total number of teams are n * m, so each team will stay in a separate room. The director knows that people have traveled a lot of distance to come to the site, and will feel bored and homesick if they are unable to communicate with each and every person of their country. Communication of competitive programmers is usually discussion of problems, which they really like. There is a small window in each of the four walls of the rooms. Teams can talk to each other through the window. Teams are usually suspicious and very apprehensive of discussing problems with teams of other countries. So, two teams from different countries don't discuss problems at all.

Two teams of same country can communicate with each other, If

Either, the two rooms share a wall with each other. Then they will communicate through the small window on that wall.
Or, they can communicate with each other indirectly by communicating through other teams of the same country. That is, take 2 teams: Team A and Team B from the same country. They can communicate with each other indirectly, if there is a sequence of teams (Team A, Team X1, Team X2, .., Team Xk, Team B), where all of them are from the same country, and every adjacent pair of teams in this sequence are in rooms which share a wall.
The director wants to provide accommodation to the teams in such a way that teams from the same country are able to communicate among themselves. But he doesn't know whether he can arrange the teams in such a way or not, so he requires your help in this task. Can you please tell him whether it is possible to do so, If yes, then also output which country's team should occupy each room.

Input
First line of the input contains T - number of test cases. T test cases follows.

First line of each test case contains three space separated integers n, m, C, denoting the number of rows, number of columns, and number of countries participating.

Second line of each test case contains C space separated c1, c2, ..., cC, denoting that there are ci teams of i-th country.

Output
For each test case, output -1 in a separate line if it is not possible to arrange the teams in the desired way. Otherwise print n rows, each containing m space separated integers, where j-th element in the i-th row should be an integer from 1 to C denoting which country's team is provided accommodation in the room (i, j). If there are more than one possible ways of accommodation of teams satisfying the above conditions, you can output any of them.

Constraints
1 ≤ T, n, m ≤ 50
1 ≤ C ≤ n * m
1 ≤ ci ≤ n * m
c1 + c2 + ... + cC = n * m
Example
Input:
2
2 2 2
2 2
2 2 1
4
Output:
1 2
1 2
1 1
1 1
Explanation
Example case 1. Teams from country 1 and country 2, both can discuss problems among themselves.

Note that the below given arrangement of teams is not a valid one, as the teams from same countries can't discuss problems with each other.

1 2
2 1
Example case 2. Teams are only from country 1. You can see that all the teams able to communicate with each other.

