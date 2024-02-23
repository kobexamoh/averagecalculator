# averagecalculator
## Or, the one where I mess around with C to practice getting the hang of this thing.

Since early January 2024 I've been learning C on the side. Unfortunately for public eyes, the way that I've been learning has involved a Github Classroom setup which keeps the code private by default. This means that the habit of (almost) daily practice that I thought was there actually can't be seen by interested parties -- that is, the green squares that make it look like I'm super productive don't exist.

Oof.

Enter ChatGPT.

## The Idea

I decided to have ChatGPT generate some prompts for me to practice C publicly so that I can learn in public and see just how long I can keep the streak of green going. The point isn't to be perfect: the point is to be consistent.

## The "Rules"

ChatGPT is to be my mock interviewer. I use it to get problems, and then at the end I run the code by it to get ideas on what I did right, what I could have done better, and how I could improve for the future. Yes, I'm aware that there's the Code Review Stack Exchange. But sometimes, it's nice to have the feedback presented in a more...how do we say...kind way.

When I ask the GPT to generate a question for me to solve, I give it some rules: it can't give me the outright answer, and it has to treat it like a technical interivew. I can ask it clarifying questions, and it can answer in a way that guides me towards the solution, not in a way that gives the outright answer. Often times, the response it generates leads me to a Stack Overflow thread, but that's fine. The idea isn't to have it give me the answers (that defeats the point of learning and practicing), but to have it be my own personal senior developer.

Improvisation is key!

## The (Original) Prompt
> Write a C program that defines a function called calculateAverage that takes an array of integers and its size as parameters. The function should calculate the average of all the numbers in the array and return it. Then, in the main function, create an array of integers, prompt the user to enter the values for the array, call the calculateAverage function to find the average, and finally, print the average value.
>
> Remember to handle input validation to ensure that the user enters valid integer values for the array elements.

Now, this prompt had me thinking "based on this prompt, I can't assume that the array will have a fixed size at the time of creation, correct?

ChatGPT responded "That's correct. Since the size of the array is not predetermined and is instead determined by the user input, you cannot assume a fixed size at the time of array creation. You'll need to dynamically allocate memory for the array based on the user's input. This typically involves using dynamic memory allocation functions like malloc() to allocate memory for the array based on the size entered by the user."

Yikes. This, to me, was not good. I haven't learned `malloc` yet, so I needed to modify the prompt a bit. After asking the GPT if this prompt could be solved without malloc (after all, I assume this is the sort of thing you could tease out of an interviewer), it replied "Certainly! You can solve the prompt without using dynamic memory allocation by restricting the size of the array to a predefined maximum size. This way, you can declare the array with a fixed size and prompt the user to enter values within that size limit."

Bless the GPTs.

## The New Prompt
> Write a C program that defines a function called calculateAverage that takes an array of integers and its size as parameters. The function should calculate the average of all the numbers in the array and return it. Then, in the main function, declare an array of integers with a predefined maximum size (e.g., 100), prompt the user to enter the values for the array, call the calculateAverage function to find the average, and finally, print the average value.
>
> You can assume a maximum size for the array, such as 100, to simplify the implementation without using dynamic memory allocation.

## The Suffering Begins (And It Is Necessary)
I was able to carve out a little time to try to keep attempting this problem. I first needed to prompt the user for their values, and then I needed to define the maximum size of the array. That wasn't necessarily too bad. It got a little tricky when I tried reading the values into the array, but thanks to the textbook (King's C Programming) it became doable. And -- just my luck -- I was able to even output the values that were put into the array too! It was a win!

It got quite gross once I started to mess with logic for the function definition for `averageCalculator`. Like I said previously, I didn't want to use `malloc` because I hadn't learned it in my studies yet. I literally just learned about pointers, so I was doing my best to avoid anything related to pointers in my solution. But as anyone who has tried to solve problems can attest, it's pretty much a given that there's a marked difference between the order you learn stuff and the order in which you apply stuff.

Yay, me.

### `sizeof` is not what you think it is
Initially, I was trying to use `sizeof` the way that `.size()` gets used in jQuery or `.length` gets used in vanilla JS. I thought that I could easily get the size of an array that the logic in the definition for `averageCalculator` would be a piece of cake because of that. I was, however, so wrong.

As it happens, `sizeof` gives the size of a pointer, NOT the size of the array as I was expecting. And from here is where all my trouble began to cascade. Oy vey.
