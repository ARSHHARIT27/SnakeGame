#include<iostream> // for printing something to the screen
#include<unistd.h>  // it is use for using a function name usleep() (this function's work is to pause the program for a short time so to play otherwise the game loop will run so fast that it will be impossible for human to play)
#include<termios.h>
//(this header file is used to turn off line buffering(so the program doesn't wait for you to press enter), is used to turn of echo(show keypress doesn't show on the screen), make input non-blocking(so the game can keep running even if no key is pressed))
/*Without termios.h, the game would:
Wait for the Enter key after each input (which would be too slow for Snake)
Show every letter you press on the screen (which would mess up your game display)
With termios.h, the game can:
Check if you're pressing w, a, s, or d — instantly
Keep the screen clean and responsive
Run smoothly like a real game*/
#include<thread>

// about thread
/*

#include <iostream>
#include <thread>

void sayHello() {
    std::cout << "Hello from another thread!" << std::endl;
}

int main() {
    std::thread t(sayHello);  // Start a new thread to run sayHello()
    t.join();                 // Wait for the new thread to finish
    std::cout << "Back in the main thread." << std::endl;
    return 0;
}
    explanation::


We are saying: form including the header file that hey computer !

“I want to use cout to print messages, and I want to use threads (extra workers).”

now

🧠 void sayHello() { ... }


This is a function. It's like a small task that we want a new thread to run.
It just prints this:
Hello from another thread!

🚀 std::thread t(sayHello);

This is the main event. This line is saying:

“Hey computer! Start a new thread (a new mini-program) and make it run the sayHello() function.”
So now we have 2 things happening:

🧍‍♂️ The main thread (which is running main())
🧵 A new thread (running sayHello())

✅ This means both parts can run at the same time!


🛑 t.join();

After starting the new thread, we say:
“Okay, main thread — wait until the new thread (t) is done.”
This is important because without join(), the main thread might finish and exit the program before the new thread finishes printing its message.
So:
First, the new thread prints: "Hello from another thread!" 🧵
Then, the main thread prints: "Back in the main thread." 🧍‍♂️
The program waits for the thread to finish before moving on.
🎯 std::cout << "Back in the main thread.";
This prints a message from the main thread, after waiting for the other thread to finish.
So the output looks like this:
Hello from another thread!
Back in the main thread.
*/
#include<vector>
/* 
this header file is included in the program to use dyanmaic array  (called vectors) where in the runtime you can increase your vector's size and decrease also
*/
#include<cstdlib>
/*
this header file is used to unlock several utility functions like ,rand() for random numbers generations, srand() for setting the time seeding ,malloc() for run time memory allocation, free() for runtime memory free
*/
#include<ctime>
/*
this header file is used to acces the time and date related functions in c++
*/
using namespace std;
int width=20,height=20;
int x,y,fruitX,fruitY,score;
int tailX[100],tailY[100];
int nTail=0;
enum Direction {STOP=0,LEFT,RIGHT,UP,DOWN};
Direction dir;
bool gameover;
int main(){
    return 0;
}