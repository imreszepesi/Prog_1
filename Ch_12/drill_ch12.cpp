#include "../source/Simple_window.h"
#include "../source/Graph.h"


int main()
{
    using namespace Graph_lib;

    Point tl(150,150);
    Simple_window win(tl,600,400,"My window");
    win.resize(600,400);
    win.wait_for_button();


}