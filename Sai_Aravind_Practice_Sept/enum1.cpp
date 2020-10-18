#include<iostream>

using namespace std;

int main ()

{

enum open_modes {input, output, append};

open_modes fileopenmode = output;

cout << input << "	" << output << " " << append << endl;
cout << "Fileopenmode = " << fileopenmode << endl;

//file open mode 3; // error

int i = append; 
cout << "Value of i: " << i << endl;

enum forms { shape = 1, sphere, cylinder, polygon};
cout << shape << " "<< sphere << " " << cylinder << " " << polygon << endl;

enum Points{point2d = 2, point2w, point3d = 3, point3w};
cout << point2d << " "<< point2w << " "<<point3d << " "<<point3w<<" "<<endl;


Points pt1 = point3d;
Points pt2 = pt1;
cout << pt1 << " " << pt2 << endl;


return 0;

}