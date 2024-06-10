/*#include <iostream>
#include <thread>
#include <unistd.h> // For sleep on Unix-like systems
//#include <windows.h> // For Sleep on Windows

using namespace std;

void taskA() {
    for (int i = 0; i < 10; i++) {
        sleep(1); // Sleep for 1 second on Unix-like systems
        //Sleep(1000); // Sleep for 1 second (1000 milliseconds) on Windows
        cout << "taskA" << endl;
        fflush(stdout); // Ensure the output is flushed immediately
    }
}

void taskB() {
    for (int i = 0; i < 10; i++) {
        sleep(1); // Sleep for 1 second on Unix-like systems
        //Sleep(1000); // Sleep for 1 second (1000 milliseconds) on Windows
        cout << "taskB" << endl;
        fflush(stdout); // Ensure the output is flushed immediately
    }
}

int main() {
    thread t1(taskA); // Create thread t1 to run taskA
    thread t2(taskB); // Create thread t2 to run taskB
    
    t1.join(); // Wait for t1 to finish
    t2.join(); // Wait for t2 to finish
    
    return 0;
}*/
