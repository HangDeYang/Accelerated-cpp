#include<iostream>
#include<time.h>

void sleepcp(int milliseconds) // cross-platform sleep function
{
    clock_t time_end;
    time_end = clock() + milliseconds * CLOCKS_PER_SEC/1000;
    while (clock() < time_end)
    {
    }
}
int main()
{
	int i = 10;
	while (i + 5> 0) {
		i -= 1;
		std::cout << i << std::endl;
		sleepcp(1000);
			}
}