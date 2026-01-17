### A&DS

---

## Dynamic Programming

Task 1: *The cheapest way*

    The boy came to a paid staircase. To step on any step, you need to pay the amount indicated on it. The boy can either step on the next step or jump over the step. It is required to find out what the smallest amount the boy needs to reach the top step.

    Input data
    The first line of the input file contains a single natural number N≤100, which is the number of steps.
    The next line contains N natural numbers that do not exceed 100, which are the costs of each step (from bottom to top).

    Output data
    Output a single number — the lowest possible cost of climbing the stairs.

Solution: DynamicProgramming/dpTask1.cpp

Task 2: *Ticket purchase*

    There is a queue of N people waiting for tickets to the premiere of the new musical, each of whom wants to buy 1 ticket. There was only one ticket office for the entire queue, so ticket sales were very slow, leading the "guests" of the queue to despair. The quick-witted ones quickly noticed that, as a rule, the cashier sells several tickets in one hand faster than when the same tickets are sold one at a time. Therefore, they suggested that several people standing in a row give money to the first of them so that he could buy tickets for all of them.

    However, to combat speculators, the cashier sold no more than 3 tickets in one hand, so only 2 or 3 consecutive people could agree among themselves in this way.
    It is known that the cashier spends Ai seconds selling one ticket to the ith person in the queue, Bi seconds selling two tickets, and Ci seconds selling three tickets. Write a program that calculates the minimum time for which all customers could be served.
    Please note that tickets for a group of united people are always bought by the first of them. Also, in order to speed up, no one buys extra tickets (that is, tickets that no one needs).

    Input data
    The program input receives first the number N — the number of customers in the queue (1≤N≤5000). Then there are N triples of natural numbers Ai, Bi, Ci. Each of these numbers does not exceed 3600. The people in the queue are numbered starting from the cash register.

    Output data
    It is required to output one number — the minimum time in seconds for which all customers could be served.

Solution: DynamicProgramming/dpTask2.cpp

Task 3: *Knight's move*

    An N × M rectangular board is given (N rows and M columns). There is a chess knight in the upper left corner, which must be moved to the lower right corner of the board. In this case, the knight can ONLY move two squares down and one square to the right, or two squares to the right and one square down
    It is necessary to determine how many different routes there are leading from the upper-left to the lower-right corner.
    
    Input data
    The first line of the input file contains two natural numbers N and M (1 ≤ N, M ≤ 50).  

    Output data
    In the output file, print a single number, the number of ways to get a knight to the bottom right corner of the board.

Solution: DynamicProgramming/dpTask3.cpp

Task 4: *Knight's Move - 2*

    Given a rectangular board N × M (N rows and M columns), a chess knight is located in the upper-left corner, and it needs to be moved to the lower-right corner of the board. The knight can only move in the following ways:
    The task is to determine the number of different routes that lead from the upper-left corner to the lower-right corner.

    Input data
    The first line of the input file contains two natural numbers N and M (1 ≤ N, M ≤ 15).  

    Output data
    In the output file, print a single number: the number of ways to reach the lower-right corner of the board using a knight.

Solution: DynamicProgramming/dpTask4.cpp

Task 5: *The longest common subsequence with recovery*
    
    Given two sequences, find and output theirThe longesommon subsequence.
    
    Input data
    The first line of the input contains the number N, which is the length of the first sequence (1 ≤ N ≤ 1000). The second line contains the members of the first sequence, which are integers that do not exceed 10000 in modulus. The third line contains the number M, which is the length of the second sequence (1 ≤ M ≤ 1000). The fourth line contains the members of the second sequence, which are integers that do not exceed 10000 in modulus.

    Output data
    You need to output the longest common subsequence of the sequences, separated by spaces.

Solution: DynamicProgramming/dpTask5.cpp

Task 6: *0-1 backpack: exact weight*

    Given N gold bars with masses m1, ..., mN, they are placed in a backpack that can hold a maximum weight of M. Is it possible to achieve an exact weight of M?

    Input data
    The first line contains a natural number N that does not exceed 100 and a natural number M that does not exceed 10,000.

    Output data
    Output YES or NO.

Solution: DynamicProgramming/dpTask6.cpp

Task 7: *Backpack*

    Given N items with masses m1, ..., mN and costs c1, ..., cN, respectively.
    They are placed in a backpack that can hold a maximum weight of M. What is the maximum cost of the items in the backpack?

    Input data
    The first line contains a natural number N that does not exceed 100 and a natural number M that does not exceed 10,000.
    The second line contains N natural numbers mi that do not exceed 100.
    The third line contains N natural numbers ci that do not exceed 100.

    Output data
    Output a single integer: the maximum possible value of the backpack.

Solution: DynamicProgramming/dpTask7.cpp

Task 8: *Weights*

    Given a set of weights with masses m1, ..., mN. Can they be placed on two scales so that they are in balance?

    Input data
    The first line of the input contains a natural number N that does not exceed 100. The next line contains N natural numbers mi that do not exceed 100.

    Output data
    The program should output YES if the weights can be divided into two equal-mass piles, or NO otherwise.

Solution: DynamicProgramming/dpTask8.cpp

Task 9: *The change-1*

    The buyer wants to purchase an item worth S rubles. He has N banknotes in denominations of P1, P2, ..., PN rubles. The seller has M banknotes in denominations of Q1, Q2, ..., QM. rubles. Determine if they will be able to pay off.

    Input data.
    The program receives an input amount of S. Next comes the number N, then P1, P2, ..., PN. Next comes the number M, then Q1, Q2, ..., QM. The number of banknotes held by the seller and buyer and their denominations do not exceed 100.

    Output data.
    If the seller is able to pay off the buyer, print out the denominations of the banknotes that the buyer gives to the seller and which he receives as change. Print a number with a “+” sign if the buyer gives the banknote of the corresponding denomination to the seller and with a “-” sign if the buyer receives this banknote for change. Separate the denominations of the banknotes with a space.

    If they can't pay, print the line Impossible.

Solution: DynamicProgramming/dpTask9.cpp

Task 10: *A backpack with the recovery of the answer (C)*
    
    Given N objects with mass m1, ..., mN and cost c1, ..., cN, respectively.
    They are filled with a backpack that can withstand a weight of no more than M. Determine the set of items that can be carried in a backpack that has the highest cost.

    Input data
    In the first line, enter a natural number N not exceeding 100 and a natural number M not exceeding 10000.
    In the second line, enter N natural numbers mi, not exceeding 100.
    In the third line, enter N natural numbers ci, not exceeding 100.

    Output data
    Print the numbers of the items (numbers from 1 to N) that will be included in the backpack of the highest value.

Solution: DynamicProgramming/dpTask10.cpp

Task 11: *Pizza*
    
    You have decided to order pizza with home delivery. It is known that for customers who have placed an order for more than C
    rubles, delivery is free, and for orders for C rubles and less, delivery costs B rubles. You have already selected a product worth A
    rubles. There are N more products available worth d1,...,dN
    rubles, each in a single copy. They can also be included in the order. How to spend the least amount of money and get a selected product worth A
    rubles at home?

    Input data
    The numbers A,B,C, N are entered first, and then N
    numbers d1,...,dN. All numbers are integers, 1≤A≤1000.1≤B≤1000.1≤C≤1000.0≤N≤1000.1≤di≤1000000.

    Output data
    Print a single number – the total amount of money that you will have to spend.

Solution: DynamicProgramming/dpTask11.cpp

Task 12: *Cutting the beams*

    You need to cut the wooden beam into several pieces in the specified places. The sawing company charges k
    rubles for cutting one bar k
    meters long into two parts.
    It is clear that different cutting methods lead to different total cost of the order. For example, consider a 10-meter-long beam that needs to be sawn at a distance of 2, 4 and 7 m, counting from one end. There are several ways to do this. You can cut it first at the 2 m mark, then 4 and finally 7 m. This will result in a cost 10+8+6 =24, because at first the length of the bar that was sawed was 10 m, then it became 8 m, and finally 6 m. Or you can cut it differently: first at the 4 m mark, then 2, then 7 m. This will result in a cost 10+4+6 =20, which is better.

    Determine the minimum cost of cutting timber into specified parts.

    Input data
    The first line of the input data contains an integer L
    (2≤L ≤106) - the length of the beam and the integer N
    (1≤N≤100) - the number of cuts. The second line contains N integers Ci
    (0<Ci <L) in strictly ascending order - the places where the cuts need to be made.

    Output data
    Print one natural number - the minimum cost of cutting.

Solution: DynamicProgramming/dpTask12.cpp

Task 13: *Removing the brackets*
    
    A string made up of round, square, and curly brackets is given. Determine which is the smallest number of characters to remove from this string so that the remaining characters form the correct parenthesis sequence.

    Input data
    A string of round, square, and curly brackets. The length of the string does not exceed 100 characters.

    Output data
    Print the maximum length string, which is the correct parenthesis sequence that can be obtained from the source string by deleting some characters.If there are several possible answers, print any of them.

Solution: DynamicProgramming/dpTask13.cpp

Task 14: *Nails*
    
    Nails are driven into the board in one row. Any two nails can be connected with a thread. It is required to connect some pairs of carnations with threads so that at least one thread is tied to each carnation, and the total length of all the threads is minimal.

    Input data
    The first line of the input data contains the number Nc— the number of nails (2≤N≤100). The next line contains N
    numbers, the coordinates of all the nails (non—negative integers not exceeding 10000).

    Output data
    Print a single number — the minimum total length of all the threads.

Solution: DynamicProgramming/dpTask14.cpp

Task 15: *Painting the fence*
    
    Vasya's grandfather built a fence at the cottage from whatever came to hand. The fence consists of a row of N boards 10 cm wide, but possibly of different heights.
    Now Vasya wants to paint the fence in this way. He chooses 5 random consecutive boards and paints them in the same color. Then he selects any 5 boards that have not yet been painted in a row and paints them in a different color. And so he continues until he can choose 5 consecutive unpainted boards.
    It is required to determine which is the largest area of the fence he will be able to paint in this way.

    Input data
    One number N is entered in the first line of the input file.
    - the number of boards.

    In the second line of the input file, N
    numbers are entered - the heights of the 1st, 2nd, ..., N
    -th fence boards in centimeters.
    All numbers are natural and do not exceed 100.

    Output data
    Print one number: the largest painted area in square centimeters.

Solution: DynamicProgramming/dpTask15.cpp

Task 16: *Sequences of 0 and 1 without k identical characters in a row*
    
    Using the natural n and k data, determine the number of sequences of length n of 0 and 1 that do not contain k identical characters in a row. n≤106, 2≤k≤n+1. It is guaranteed that the answer does not exceed 231-1.

    Input data
    Two natural numbers n and k are entered.

    Output data
    Print the answer to the problem.

Solution: DynamicProgramming/dpTask16.cpp

Task 17: *Cafe (no response)*
    
    A new cafe has recently opened near Petya University, which operates the following discount system: for every purchase of more than 100 rubles, the buyer receives a coupon entitling him to one free lunch (for purchases of 100 rubles or less, the buyer does not receive such a coupon).
    One day, Petya came across a price list for the next N days. After studying it carefully, he decided that he would have lunch at this cafe for all N days, and every day he would buy exactly one lunch at the cafe. However, Petya's scholarship is small, and therefore he wants to make the most of the discount system provided so that his total costs are minimal. It is required to find the minimum possible total cost of meals.

    Input data
    The first line of the input file contains an integer N (0≤N≤100). Each of the following N lines contains one integer indicating the cost of lunch in rubles for the corresponding day. The cost is a non—negative integer not exceeding 300.

    Output data
    In the first line, give the minimum possible total cost of meals. In the second line, give two numbers K1 and K2 — the number of coupons that will remain unused for Petya after these N days and the number of coupons he has used, respectively.

Solution: DynamicProgramming/dpTask17.cpp

Task 18: *Sawtooth sequences*
    
    Let's call a sequence sawtooth if each of its elements is either strictly larger or strictly smaller than its neighbors. Using the given numbers n and k, determine the number of sawtooth sequences of length n made up of the numbers 1..k.

    Input data
    The program receives two natural numbers n and k, not exceeding 106. It is guaranteed that the answer does not exceed 231-1.

    Output data
    Print the answer to the problem.

Solution: DynamicProgramming/dpTask18.cpp

Task 19: *The largest increasing sequence*

    Given a sequence, it is required to find the length of its largest increasing subsequence. A subsequence of a sequence is a set of its elements that are not necessarily consecutive.

    Input data
    The first line of the input data contains the number N - the length of the sequence (1 ≤ N ≤ 1000). In the second line, the sequence itself is set (the separator is a space). The elements of the sequence are integers not exceeding 10000 modulo.

    Output data
    It is required to deduce the length of the largest strictly increasing subsequence.

Solution: DynamicProgramming/dpTask19.cpp

Task 20: *Explosion hazard-2*
    
    When processing radioactive materials, three types of waste are generated — especially dangerous (type A), non-dangerous (type B) and not at all dangerous (type C). Identical containers are used for their storage. After the waste is placed in containers, the latter are stacked vertically. A stack is considered explosive if it contains more than one Type A container in a row. A stack is considered safe if it is not explosive. For a given number of containers, N
    determine the number of safe stacks.

    Input data
    One number is 1≤N≤20.

    Output data
    One number is the number of safe stack formation options.

    Note
    In the example from the condition, among the stacks of length 2, there are safe stacks of types AB, AC, BA, BB, BC, CA, CB and CC. AA type stacks are explosive.

Solution: DynamicProgramming/dpTask20.cpp

Task 21: *Smooth numbers*

    Let's call a number smooth if its two adjacent digits differ by no more than 1. Given a natural n, determine the number of smooth natural numbers with length n. It is guaranteed that the answer does not exceed 231-1.

    Input data
    The natural number n is entered.

    Output data
    Print the answer to the problem.

Solution: DynamicProgramming/dpTask21.cpp

Task 22: *Large backpack*
    
    You have N items with weights w1, w2, . . . , wN . It is necessary to check whether it is possible to select some items with a total weight of W.

    Input data format
    The first line contains two integers N and W (1 <= N <= 2500, 1 <= W <= 6 250 000).
    In the second line, separated by a space, N integers w1, w2, . . . , wN (1 6 wi 6 2 500) are written — the weights
    of the objects.

    Output data format
    In a single line, print "YES" (without quotes) if using these items you can
    gain weight W, or "NO" otherwise.

Solution: DynamicProgramming/dpTask22.cpp

Task 23: *Weight: stacks of the same size*

    A set of kettlebells weighing m1, . . . , mN is given . Divide this set into two equal-weight piles containing an equal number of kettlebells.

    Input data format
    The first line of the input data contains a natural number N, not exceeding 100.
    In the next line, separated by a space, N natural numbers mi are written, not exceeding 100.

    The output data format
    should be output in the first line of the kettlebell numbers (numbers from 1 to N) included in the first pile, in the second line — the kettlebell numbers in the second pile.
    If the problem has no solution, print a single number -1.

Solution: DynamicProgramming/dpTask23.cpp

---

## Back Tracking

Task 1: *All strings of length n of k different characters*

    Based on the numbers N and K, output all strings of length N from characters 0..K-1 in lexicographic order.

    Input data
    2 numbers are given: N and K (N, K <= 10; N+K < 15)

    Output data
    It is necessary to output all strings of length N from characters 0..K-1 in lexicographic order.

Solution: BackTracking/BackTrTask1.cpp

Task 2: *All binary strings of length n containing exactly k units*

    Based on the given numbers N and K, output all strings of zeros and ones of length N containing exactly K units in lexicographic order.

    Input data
    2 numbers are set: N and K (0 ≤ K ≤ N, 0 ≤ N ≤ 100)

    Output data
    It is necessary to output all strings of zeros and ones of length N, containing exactly K units, in lexicographic order. It is guaranteed that the response size does not exceed 10MiB

Solution: BackTracking/BackTrTask2.cpp

Task 3: *All decreasing sequences of length k from the numbers 1..n*

    According to the given numbers N and K, output all decreasing sequences of length K from the numbers 1..N in lexicographic order.

    Input data
    2 numbers are given: N and K. (1 ≤ N,K ≤ 100)

    Output data
    It is necessary to output all decreasing sequences of length K from the numbers 1..N in lexicographic order. Sequences are displayed one at a time per line, the numbers inside the sequences are separated by spaces.

Solution: BackTracking/BackTrTask3.cpp

Task 4: *Peaceful Queens*

    The number N is given. Determine how many ways you can arrange N×N queens on the board without hitting each other.

    Input data
    The singular number is N. (N ≤ 10)

    Output data
    It is necessary to deduce the number of ways in which N×N N queens can be placed on the board without hitting each other.

Solution: BackTracking/BackTrTask4.cpp

Task 5: *A simple square*

    Petya has a 3x3 playing field
    filled with numbers from 1 to 9. At the beginning of the game, he can place a chip in any square of the field. At each step of the game, it is allowed to move a chip to any adjacent cell, but it is not allowed to visit the same cell twice. Petya carefully keeps a log of the game, writing down the numbers in the order in which the chip visited the cells. Petya wondered what the maximum number he could get in the protocol was. Help him answer this question.

    Input data
    The input file contains a description of the field — 3 lines of 3 integers separated by spaces. It is guaranteed that all nine numbers are different and lie in the range from 1 to 9.

    Output data
    Print a single integer — the maximum number that could be obtained in the protocol when playing on this field.

    The answer can be output not as a number, but as a string or as a sequence of individual digits (but without separating them with spaces).

Solution: BackTracking/BackTrTask5.cpp

Task 6: *Bids*

    Before the start of the cockroach race, all fans were invited to place two bets on the results of the races. Each bid has the form "Cockroach #A will arrive earlier than cockroach #B".
    The organizers of the races decided to find out if the cockroaches could come in such an order that each fan had exactly one bet out of two (that is, so that exactly one of the two statements of each fan turned out to be true). It is believed that no two cockroaches can reach the finish line at the same time.

    Input data
    The first line of the input data contains two natural numbers separated by a space: the number K, not exceeding 10, is the number of cockroaches and the number N, not exceeding 100, is the number of fans. All cockroaches are numbered from 1 to K. Each of the following N lines contains 4 natural numbers A, B, C, D, not exceeding K, separated by spaces. They correspond to the fan's bets "Cockroach #A will arrive earlier than cockroach #B" and "Cockroach #C will arrive earlier than cockroach #D".

    Output data
    If it is possible to complete the races so that each of the fans has exactly one of the two bets, then the cockroach numbers should be displayed in the order in which they appear in the final results table (first, the number of the cockroach that came first, then the number of the cockroach that came second, etc.) in one row separated by a space. If there are several such options, print any of them.

    If the desired result cannot be achieved, print a single number 0.

Solution: BackTracking/BackTrTask6.cpp

Task 7: *Coins*

    Coins in denominations A1, A2,..., AM are used in the Magical Land. The magical man came to the store and found that he had exactly two coins of each denomination. He needs to pay the amount of N. Write a program that determines whether he can pay without change.

    Input data
    First, the number N (1≤N≤109) is entered, then the number M (1≤M≤15) and then M pairs of different numbers A1, A2,..., AM (1≤Ai≤109).

    Output data
    First, print K — the number of coins that will have to be given to the Magic Man if he can pay the specified amount without change. Next, print K numbers indicating the coin values. If there are several solutions, print the option in which the Magic Person will give the least possible number of coins. If there are several such options, print any of them.

    If you can't do without change, then print one number 0. If the Magic Man does not have enough money to pay the specified amount, print one number -1 (minus one).

Solution: BackTracking/BackTrTask7.cpp

Task 8: *Divisors*

    A natural number a is called a divisor of a natural number b if b=ac for some natural number c.
    For example, the divisors of the number 6 are the numbers 1, 2, 3, and 6. Two numbers are called mutually prime if they have no common divisors other than 1. For example, 16 and 27 are mutually prime, but 18 and 24 are not.
    We will call a set of k numbers (a1,a2,...,ak) normal if the following conditions are met:
    each of the numbers ai is a divisor of the number n;
    the inequality a1<a2<...<ak holds ;
    the numbers ai and ai+1 for all i from 1 up to k−1 are coprime;
    the product a1a2...ak does not exceed n .
    For example, the set (2, 9, 10) is a normal set of 3 divisors of 360.
    It is required to write a program that, based on the given values of n and k , determines the number of normal sets of k divisors of the number n.

    Input data
    The first line of the input file contains two integers: n and k (2≤n≤108 , 2≤k≤10 ).

    Output data
    The output file should contain one number — the number of normal sets of k
    divisors of the number n.

Solution: BackTracking/BackTrTask8.cpp

Task 9: *Room size*

    It is required to calculate the area of a room in a square maze.

    Input data
    In the first line, enter the number N – the size of the maze (3 <= N <= 10). The following N lines contain a maze (‘.’ is an empty cell, ‘*’ is a wall). Finally, the last row contains two numbers – the row and column number of the cell located in the room whose area needs to be calculated. It is guaranteed that this cell is empty and that the maze is surrounded by walls on all sides.

    Output data
    It is required to print a single number – the number of empty cells in a given room.

Solution: BackTracking/BackTrTask9.cpp

## Searches

Task 1: *Cows - in the stalls*

    In a straight line, there are stalls in which the cows must be placed so that the minimum distance between the cows is as large as possible.

    Input data format
    In the first line, enter the numbers N (2 < N <= 1e5) – the number of stalls and K (1 < K < N)
    – the number of cows. The second line contains N natural numbers in ascending order – the coordinates of the stalls (coordinates do not exceed 1e9).

    Output data format
    Print one number – the largest possible allowable distance.

Solution: Searches/SearchTask1.cpp

Task 2: *Diplomas*

    When Petya was in school, he often participated in computer science, mathematics, and physics Olympiads. Since he was a fairly capable boy and studied hard, he received diplomas at many of these Olympiads. By the time he graduated from high school, he had accumulated n
    diplomas, and, as it turned out, they all had the same dimensions: w — wide and h— in height. Now Petya is studying at one of the best Russian universities and lives in a dormitory with his classmates. He decided to decorate his room by hanging his diplomas from the school Olympiads on one of the walls. Since it is quite difficult to attach diplomas to a concrete wall, he decided to buy a special board made of cork wood to attach it to the wall, and diplomas to it. In order for this structure to look more beautiful, Petya wants the board to be square and take up as little space on the wall as possible. Each diploma must be placed strictly in a rectangle of size w
    on h. Diplomas must not be rotated 90 degrees. Rectangles corresponding to different diplomas should not have common internal points. It is required to write a program that will calculate the minimum size of the side of the board that Petya will need to place all her diplomas.

    Input data
    The input file contains three integers: w, h, n(1≤w,h,n≤109).

    Output data
    The output file must contain the answer to the task.

Solution: Searches/SearchTask2.cpp

Task 3: *Deforestation*

    Farmer Nikolai hired two lumberjacks: Dmitry and Fedor, to cut down the forest, in place of which there should be a cornfield. There are X trees in the forest.
    Dmitry cuts down A trees a day, but every K- He rests every day and does not cut down a single tree. Thus, Dmitry is resting in K-th, 2K-th, 3K-th day, etc.
    Fedor cuts down B trees a day, but every M- He rests every day and does not cut down a single tree. Thus, Fedor is resting in M-th, 2M-th, 3M-th day, etc.
    Lumberjacks work in parallel and, thus, on days when none of them is resting, they cut down A+ B trees, on days when only Fedor is resting — A trees, and on days when only Dmitry is resting — B trees. On days when both loggers are resting, not a single tree is cut down.
    Farmer Nikolai wants to figure out how many days it will take lumberjacks to cut down all the trees, and he will be able to sow a cornfield.
    You need to write a program that uses the given integers A, K, B, M and X to determine in how many days all the trees in the forest will be cut down.

    Input data
    The input file contains five integers separated by spaces: A, K, B, M and X (1 ≤ A, B ≤ 109, 2 ≤ K, M ≤ 1018, 1 ≤ X ≤ 1018).

    Output data
    The output file must contain a single integer, the desired number of days.

Solution: Searches/SearchTask3.cpp

Task 4: *Cleaning day*

    There are N students in the class. The homeroom teacher was instructed to send R teams of C people each to the clean-up day.
    All the crews on the clean-up day will be engaged in carrying logs. Each log is carried simultaneously by all members of the same team. At the same time, the more convenient it is to carry a log, the less the height of the members of this team differs.
    The number of inconveniences of a brigade will be called the difference between the height of the tallest and the height of the lowest members of this brigade (if there is only one person in the brigade, then this difference is 0). The homeroom teacher decided to form brigades so that the maximum number of inconveniences of the formed brigades would be minimal. Help him with this!
    Consider the following example. Let's say there are 8 people in the class whose height in centimeters is 170, 205, 225, 190, 260, 130, 225, 160, and it is necessary to form two brigades of three people each. Then one of the options is this:
    1st team: people with height 225, 205, 225
    2nd team: people with height 160, 190, 170
    In this case, the number of inconveniences of the first team will be 20, and the number of inconveniences of the second — 30. The maximum number of inconveniences will be 30, and this will be the best possible result.

    Input data format
    First, the natural numbers N, R, and C are entered — the number of people in the class, the number of teams, and the number of people in each team (1 ≤ R*C ≤ N ≤ 100,000). Next, N integers are entered — the height of each of the N students. The student's height is a natural number not exceeding 1,000,000,000.

    Output data format
    Print one number, the smallest possible value for the maximum number of inconveniences of the formed brigades.

Solution: Searches/SearchTask4.cpp

Task 5: *Children's party*

    The organizers of the children's party plan to inflate M
    balloons for him. To this end, they invited N
    volunteers,
    the ith among whom inflates a balloon in Ti
    minutes, but each time after inflating Zi
    balloons, Yi gets tired and rests
    minutes. Now the organizers of the holiday want to know how long it will take for all the balloons to inflate with the most optimal work of the assistants, and how many balloons each of them will inflate. (If the assistant inflated the balloon and has to rest, but he does not have to inflate more balloons, then it is considered that he finished the work immediately after the end of inflating the last balloon, and not after rest).

    Input data
    The first line of the input data contains the numbers M
    and N (0 <= M <= 15000, 1 <= N <= 1000). The next N lines contain three integers - Ti, Zi and Yi respectively (1 <= Ti, Yi <= 100, 1 <= Zi <= 1000).

    Output data
    Print the number T in the first line, which is the time it takes for all the balloons to inflate. In the second line, print N
    numbers - the number of balloons inflated by each of the invited assistants. Separate the numbers with spaces. If there are several ball distributions, print any of them.

Solution: Searches/SearchTask5.cpp

Task 6: *Elevator in the business center*

    Last year, at the municipal stage, there was a task about business center employees who leave work in the evening. Now solve the problem about the employees of the business center who come to work in the morning.
    The business center is N-a three-storey building, the floors are numbered from 1 to N
    from bottom to top. There is exactly one employee on each floor. All employees arrive in the morning at the parking lot, which is located in the basement, one floor below the ground floor. The business center is equipped with an elevator that can accommodate an unlimited number of people, but today the harmful elevator operator is ready to take all employees to only one floor.
    Each employee has a choice: they can walk up the stairs, and it will take A
    seconds. Or he can take the elevator, which will take all the employees to some floor they have chosen together. After exiting the elevator, the employee can go up to his floor (also spending A
    seconds going up one floor), or go down to the desired floor, spending B
    seconds going down one floor. The elevator takes C
    seconds to climb one floor.
    Determine the minimum time for all employees to disperse to their floors, if they choose the floor to which the elevator goes in the best way, and their behavior strategy (climb the stairs or take the elevator and then go up the stairs).

    Input data format
    The first row of input data contains the number N, which is the number of floors in the business center. The next three lines contain the numbers A, B, C
    — the time it takes for an employee to climb one floor, descend one floor, and the time it takes for an elevator to climb one floor. All numbers are positive integers not exceeding 2×109, with A≥B, A≥C.

    Output data format
    The program should output a single integer, which is the minimum time it takes for all employees to get to their floor.

Solution: Searches/SearchTask6.cpp

Task 7: *Wires*

    Given N lengths of wire L1, L2, ..., LN centimeters. It is required to cut them into K equal segments of the largest possible length, expressed as an integer number of centimeters. If it is impossible to get K segments with a length of even 1 cm, output 0.
    Constraints: 1 <= N <= 10,000, 1 <=K <= 10,000, 100 <= Li <= 10,000,000, all integers.

    Input data
    The first line contains the numbers N and K. In the next N lines - L1, L2, ..., LN, one number per line.

    Output data
    Print a single number - the resulting length of the segments.

Solution: Searches/SearchTask7.cpp

Task 8: *Square root and square square*

    Find a number x such that
    x^2+√x=C, with an accuracy of at least 6 digits after the dot.

    Input data format
    The single line contains the real number
    1≤C≤10^10.

    Output data format
    Print one number — the desired x.

Solution: Searches/SearchTask8.cpp

Task 9: *The last frontier*

    This is an interactive task.
    One day, Pavel, a sociable programmer, invited his friends to a quest. The boys easily solved the puzzles and moved forward. And now they have to solve the last riddle before receiving the long-awaited prize.
    The mystery is that in front of the guys there is a door with N locks that need to be opened. Some locks are open and some are closed. The guys don't know which locks are already open, however, after spending some time studying one particular lock, they can determine whether it is open or not. There is a sign next to the door that says that the leftmost lock is open and the rightmost is closed.
    In the process of completing the previous tasks, the guys figured out how to open the door. Let's number the locks from left to right with numbers from 1 to N. Then, in order to open the door, the guys need to find a lock with the number i < N, such that the lock i it is open, and the i + 1 lock is closed.
    As already mentioned, in order to determine if
    the ith lock is open, they need to examine it in detail, spending some time on it. Since the guys don't have much time left to complete the last task, they can take a detailed look at no more Q locks.
    Help the guys open the door.
    
    Interaction format
    At the beginning, the program is given a single integer N (2 ≤ N ≤ 10^18) as input.
    
    After that, you can make requests like ? i, meaning that the guys are examining the lock with the number i in detail. In response to such a request, you will receive the number 0, meaning that the lock is closed, or the number 1 otherwise.
    
    If you find the answer, you should make a request like ! i, meaning that you believe that lock i is open and lock i + 1 is closed. After this request, you must terminate the program.
    
    It is assumed that at the beginning you know the condition of the locks 1 and N.

Solution: Searches/SearchTask9.cpp

Task 10: *Minimizing the maximum*

    Given n non-strictly increasing arrays A(i) and m are non - strictly decreasing arrays B(j). All arrays have the same length l. The following are given q queries of the form (i, j), the response to the query is k, that max (A(i)(k), B(j)(k)) is minimal . If there are such
    There are several k, you can return any one.

    Input data format
    On the first line are the numbers n
    , m, l(1 ≤ n, m ≤ 900; 1 ≤ l <= 3,000). The next n lines contain descriptions of the a(i) arrays. Each array is described by the enumeration l elements. Arraelements are integers from 0 to 10^5 − 1. Next is the number m and the description of the arrays b(j) in the same format. Arrays and elements inside an array are numbered with  1. On the next row, the number of queries is q(1 ≤ q ≤ n ⋅ m ). The next q rows contain pairs of numbers i, j (1 ≤ i ≤ n, 1 ≤ j ≤ m).

    Output data format
    Print q numbers from 1 to l – responses to queries.

Solution: Searches/SearchTask10.cpp

Task 11: *A Very Easy Task*

    This morning, the jury decided to add another, very Easy Task to the Olympiad version. The executive Secretary of the Organizing Committee printed her condition in one copy, and now he needs to make
    n more copies before the start of the Olympiad. He has two copiers at his disposal, one of which copies the sheet for x seconds, and the other in y
    seconds. It is allowed to use both one copier and both at the same time. You can copy not only from the original, but also from a copy. Help the jury figure out the minimum time it will take.

    Input data format
    The program receives three natural numbers n, x and y, separated by a space (1 ≤ n ≤ 2 ⋅ 10^8, 1 ≤ x, y ≤ 10).

    Output data format
    Print one number – the minimum time in seconds required to get n copies.

    Solution: Searches/SearchTask11.cpp

Task 12: *Space settlement*

    To explore Mars, it is necessary to build a research base. The base should consist of n identical modules, each of which is a rectangle.
    Each module is a living compartment, which has the shape of a rectangle measuring a × b meters. To increase the reliability of the modules, engineers can add a layer of additional protection around each module. The thickness of this layer should be an integer number of meters, and all modules should have the same thickness of additional protection. A module with protection, the thickness of which is d It will have the shape of a rectangle measuring
    (a + 2d)×(b + 2d)meters.
    All modules must be located on a pre-prepared rectangular field measuring w×h
    meters. At the same time, they should be organized in the form of a regular grid: their sides should be parallel to the sides of the field, and the modules should be oriented in the same way.

    You need to write a program that, based on the specified number and size of modules, as well as the size of the field for their placement, determines the maximum thickness of the additional protection layer that can be added to each module.

    Input data format
    The program input is provided with five space-separated integers:
    n, a, b, w, h(1 ≤ n, a, b, w, h ≤ 10^18). It is guaranteed that, without additional protection, all modules can be placed in the settlement as described.

    Output data format
    Print a single integer: the maximum possible thickness of additional protection. If additional protection cannot be installed, the number
    0 must be output.

Solution: Searches/SearchTask12.cpp

Task 13: *A lonely number*

    One day Masha had nothing to do, so she wrote it down on a piece of paper N integers:
    a1, a2,... , a N. Masha recently studied sorting algorithms, so she wrote out her numbers in non-decreasing order, that is, a1 ≤ a2 ≤... ≤ a N.
    Masha is also very fond of riddles, so among her numbers there is a certain number C, which occurs exactly once among the written numbers, and all other numbers occur exactly twice.
    Masha has given you a riddle — to find the "lonely" number C.
    To do this, you can do no more than 42
    times ask Masha to tell you i-e is the recorded number.
    Masha informed you that 1 ≤ a(i) ≤ 10^9.
    Interaction format
    
    At the beginning, your solution should count the number N(1 ≤ N ≤ 10^6) — the number of numbers written by Masha.
    Then your solution can do no more than 42
    requests. In order to make a request, your solution should output it in the following format: "? i" (without quotes,1≤ i ≤ N ). The answer to the query is the number a(i).
    
    In order to deduce the answer, your solution must deduce "! C", and then shut down immediately.

    Solution: Searches/SearchTask13.cpp

