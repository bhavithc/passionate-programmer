#include <thread>
#include <iostream>

void printLoop()
{
    for (int i = 0; i < 20; i++) {
        std::cout << "Loop " << i << std::endl;
    }
}

int main()
{
    std::thread t1(printLoop);

    std::cout << "Hello world \n";

    t1.join();
    
    return 0;
}