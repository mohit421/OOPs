#include<iostream>
using namespace std;

class Book {
    public: 
        string title;
        string author;
        int pages;
};

int main(){
    Book book1; //object1
    book1.title = "Harry Potter";
    book1.author = "JK Rowling";
    book1.pages = 500;
    
    cout<<book1.title<<endl;
    cout<<book1.author<<endl;
    cout<<book1.pages<<endl;
    
    cout<<"--------------------------"<<endl;
    
    Book book2; //object2
    book2.title = "Lord of the ring";
    book2.author = "Takein";
    book2.pages = 700;
    
    cout<<book2.title<<endl;
    cout<<book2.author<<endl;
    cout<<book2.pages<<endl;
}