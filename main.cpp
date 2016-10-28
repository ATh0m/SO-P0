#include <iostream>
#include <thread>

void foo(int x)
{
    std::cout << "Child #" + std::to_string(x) + "\n";
}

#define N 10

int main()
{
    std::thread threads[N];

    for (int i = 0; i < N; i++)
        threads[i] = std::thread(foo, i);

    for (int i = 0; i < N; i++)
        threads[i].join();

    std::cout << "Parent" << std::endl;
    
    return 0;
}
