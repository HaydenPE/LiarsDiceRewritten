Hello! This is my Software Engineering project. 

I was originally going to create an algorithm to play the January 2024 release game known as Buckshot Roulette. However, there has been quite a change of plans.
I have been spending (perhaps too long) a period of time brainstorming how to create the algorithm. Unfortunately, an update coming in the future is going to
add in new items that I can't exactly account for. Therefore, I am switching to this. My alternative.

Liar's Dice Rewritten is based on the version of Liar's Dice played in a deleted scene of Pirates of the Caribbean: Dead Man's Chest. There is an original version
of the game I made a little while ago, but not only is it made in Visual Studio and not Visual Studio Code, but it is also sloppy. Terrible. Like, super terrible.

I was in my second year, alright? I barely knew what was happening as is. Cut me some slack!

Anyways, Liar's Dice Rewritten is a revamp of the original code for Liar's Dice, and requires a few things to preface.

///EXPLANATION///
A more thorough explanation of the game as depicted in the movie can be watched via this YouTube link: https://www.youtube.com/watch?v=T44LuxdH0iw
For the sake of being thorough myself, I will give a brief description of the game.

Each player (which will be limited to two players, for the sake of simplicity) is given a cup and 5 dice.

At the start of the game, each player shakes their cup and randomizes what number they have on their dice. From there, each player takes turns guessing a combination
of dice face + amount is shared between the both of them. However, given a current face + amount combo, their guess must follow one of three actions:

    1. Increase the amount, keep the face (i.e. seven 5's -> eight 5's)
    2. Increase the amount, CHANGE the face (i.e. seven 5's -> nine 2's)
    3. Keep the amount, increase the face (i.e. seven 5's -> seven 6's)

Alternatively, they can instead call the opponent a liar. In this case, each player reveals their dice, and compare the dice to the opponent's last guess.
If the amount of a certain face is wrong (i.e. there aren't seven 5's on the table), then the opponent is a liar, and you win the game.
If the amount of a certain face is right (i.e. there are seven or more 5's on the table) then the opponent isn't a liar, and you lose the game.

///GOALS///

There are a few goals to achieve with this project. Not everything is going to be feasible in this timeframe, but I would at least like to get goals 1 and 2 finished.

    1. Create a playable version of Liar's Dice.
    2. Do so using the techniques for writing better code, as discussed in class.
    3. Make a UI for the game, allowing it to be played outside of the terminal.
    4. Expand the game to include more features.
         > Things like a difficulty slider/different AI players, multiplayer, etc.

This one's for you, Dr. Hawkins.