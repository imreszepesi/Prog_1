#include "../source/Simple_window.h"
#include "../source/Graph.h"

int main()
{


    Point tl(300,50);
    Simple_window win(tl,1000,800,"Drill13");
    win.wait_for_button();
    win.set_label("Drill13");
    Lines grid;
    int x_size = 800;
    int y_size = 800;
    for (int i = 100; i<=x_size; i+=100) {
        grid.add(Point(i,0),Point(i,y_size));
        grid.add(Point(0,i),Point(x_size,i));
    }
    win.attach(grid);
    
    win.wait_for_button();
    
}