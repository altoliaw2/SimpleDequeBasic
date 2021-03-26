#include <iostream>
#include <deque>

int main(){
    std::deque<int> o_Dqu;
    o_Dqu.push_front (200);
    o_Dqu.push_front (300);

    o_Dqu.push_back (5);
    o_Dqu.push_back (1);

    return 0;
}
