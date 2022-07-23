// It allow us to control access to the different attribute and different elements inside our c++ 
// classes.



/*
#include<iostream>
using namespace std;

class Movie {
    private:
        string rating;
    public:
        string title;
        string director;
        Movie(string aTitle, string aDirector, string aRating) {
            title = aTitle;
            director = aDirector;
            aRating = aRating;
        }
};


int main() {
    Movie avenger("The Avenger","Joss Widon","PG-B");
    cout<<avenger.rating;     // error: ‘std::string Movie::rating’ is private within this context
}




*/


// -------------------------------------------------------------------------------------



/*

#include<iostream>
using namespace std;

class Movie {
    private:
        string rating;
    public:
        string title;
        string director;
        Movie(string aTitle, string aDirector, string aRating) {
            title = aTitle;
            director = aDirector;
            setRating(aRating);
        }
        void setRating(string aRating) {
            if(aRating=="G" || aRating == "PG" || aRating == "PG-13" || aRating == "R" || aRating == "NR") 
                rating = aRating;
            else
                rating = "NR";
        }
        string getRating(){
            return rating;
        }
};


int main() {
    Movie avenger("The Avenger","Joss Widon","PG-13");
    avenger.setRating("G");
    cout<<avenger.getRating()<<endl;
    avenger.setRating("Ggg");
    cout<<avenger.getRating();
}


*/
