#include <iostream>
#include <thread>

bool is_finished = false;

void do_work()
{
    std::cout << "Thread ID: " << std::this_thread::get_id() << "\n";
    while (!is_finished)
    {
        std::cout << "Working...\n";
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
}

int main()
{
    std::thread worker(do_work);

    int n = 10;
    while (n--)
    {
        std::cout << "In Main\n";
        std::this_thread::sleep_for(std::chrono::seconds(2));
    }

    std::cout << "NOW YOU CAN ENTER:\n";

    std::cin.get();

    is_finished = true;

    std::cout << "Thread ID: " << std::this_thread::get_id() << "\n";

    worker.join();

    std::cout << "Finished!\n";
}