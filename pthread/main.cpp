#include <iostream>
#include <thread>
#include <vector>
#include <string>

using namespace std;


void fun1(string tr)
{
    cout << "Thread ID:" << this_thread::get_id() << " made by " << tr << endl;
    this_thread::sleep_for(chrono::milliseconds(2000));
}

int main()
{
    vector<thread> threads;
    for(int i = 0; i < 5; ++i)
    {
        threads.push_back(thread{&fun1, "mango"});
    }
    for(auto& thread:threads)
    {
        if(thread.joinable())
        thread.join();
    }

    chrono::milliseconds dura(7000);
    this_thread::sleep_for(dura);

    thread t_test(fun1, "katrina");
    thread t_test_move = thread(move(t_test));
    cout << t_test_move.joinable() << endl;
    t_test_move.join();

    return 0;
}
