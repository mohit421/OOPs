

/*


#include<iostream>
using namespace std;

class Rectangle {
    public: 
        void display(){
            // cout<<area<<endl;
        }
        void read_input(){
            int height,width;
            int area = height*width;
            printf("%d%d\n",height,width);
            printf("%d\n",area);
        }
};

class RectangleArea:public Rectangle {
    
};

int main(){
    // Declare a rectangle area object
    
    Rectangle r_area;
        
    // read the widht and height;
    r_area.Rectangle::display();
    
    r_area.display();
}


*/



// -------------------------------------

/*

#include<iostream>
#include<cstdio>
#include<vector>
#include<cmath>


using namespace std;

class Triangle {
    public:
        void triangle(){
            cout<<"I'm a Triangle"<<endl;
        }
        
};

class Isosceles : public Triangle {
    public:
        void isosceles(){
            cout<<"I am a isosceles triangle\n";
        }
        void description(){
            cout<<"In an Isosceles triangle two side are equal\n";
        }
};


int main(){
    Isosceles isc;
    isc.isosceles();
    isc.description();
    isc.triangle();
    return 0;
}

*/