

/*

#include<iostream>
using namespace std;

class Chef {
    public:
        void makeChicken(){
            cout<<"The chef makes yummy chicken"<<endl;
        }
        void makeSalad(){
            cout<<"The chef makes salad"<<endl;
        }
        void makeSpecialDish(){
            cout<<"chef make leg chicken"<<endl;
        }
};

class ItalianChef :public Chef{

};

int main(){
    Chef chef;
    chef.makeChicken();
    ItalianChef italianchef;
    italianchef.makeChicken();
    italianchef.makeSalad();
    italianchef.makeSpecialDish();
}


*/




// ----------------------------------------------------------------


/*





#include<iostream>
using namespace std;

class Chef {
    public:
        void makeChicken(){
            cout<<"The chef makes yummy chicken"<<endl;
        }
        void makeSalad(){
            cout<<"The chef makes salad"<<endl;
        }
        void makeSpecialDish(){
            cout<<"chef make leg chicken"<<endl;
        }
};

class ItalianChef :public Chef{
    public:
    void makePasta(){
        cout<<"The chef makes pasta"<<endl;
    }
};

int main(){
    Chef chef;
    chef.makeChicken();
    chef.makeSalad();
    chef.makeSpecialDish();
    
    ItalianChef italianchef;
    italianchef.makeChicken();
    italianchef.makePasta();
}

*/



//                                                      Multilevel Inheritance

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
class Equilateral : public Isosceles {
    public:
        void equilateral(){
            cout<<"I am a Equilateral triangle\n";
        }
};


int main(){
    Equilateral eqt;
    eqt.equilateral();
    eqt.isosceles();
    eqt.description();
    eqt.triangle();
    return 0;
}

*/