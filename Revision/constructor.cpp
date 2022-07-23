// Object is an instance of class

// #include<iostream>
// using namespace std;

// class Book {
//     public:
//         string title;
//         string author;
//         int pages;
//         Book(){                             // constructor function
//             cout<<"Creating Object"<<endl;
//         }
// };

// int main(){
//     Book book1;
//      Book book1; //object1
//     book1.title = "Harry Potter";
//     book1.author = "JK Rowling";
//     book1.pages = 500;
    
//     cout<<book1.title<<endl;
//     cout<<book1.author<<endl;
//     cout<<book1.pages<<endl;
    
//     cout<<"--------------------------"<<endl;
    
//     Book book2; //object2
//     book2.title = "Lord of the ring";
//     book2.author = "Takein";
//     book2.pages = 700;
    
//     cout<<book2.title<<endl;
//     cout<<book2.author<<endl;
//     cout<<book2.pages<<endl;
// }





// ----------------------------------------------------------------

/*
#include<iostream>
using namespace std;

class Book {
    public:
        string title;
        string author;
        int pages;
        Book(string name){
            cout<<name;
        }
};

int main(){
     Book book1("Harry Potter"); //object1
    // book1.title = "Harry Potter";
    book1.author = "JK Rowling";
    book1.pages = 500;
    
    cout<<book1.title<<endl;
    cout<<book1.author<<endl;
    cout<<book1.pages<<endl;
    
    cout<<"--------------------------"<<endl;
    
    Book book2("Lord of the ring"); //object2
    // book2.title = "Lord of the ring";
    book2.author = "Takein";
    book2.pages = 700;
    
    cout<<book2.title<<endl;
    cout<<book2.author<<endl;
    cout<<book2.pages<<endl;
}

*/




/*


#include<iostream>
using namespace std;

class Book {
    public:
        string title;
        string author;
        int pages;
        Book(string aTitle, string aAuthor, int aPages){
            title = aTitle;
            author =aAuthor;
            pages = aPages;
        }
};

int main(){
    Book book1("Harry Potter","JK Rowling",500); //object1
    Book book2("Lord of the ring","Takein",700); //object2
    
    cout<<book1.title<<endl;
    cout<<book2.title<<endl;
}


*/






/*


#include<iostream>
using namespace std;

class Book {
    public:
        string title;
        string author;
        int pages;
        Book(string aTitle, string aAuthor, int aPages){
            title = aTitle;
            author =aAuthor;
            pages = aPages;
        }
};

int main(){
    Book book1("Harry Potter","JK Rowling",500); //object1
    Book book2("Lord of the ring","Takein",700); //object2
    
    book1.title = "Mohit Jaiswal";
    cout<<book1.title<<endl;
    cout<<book2.title<<endl;
}


*/



/*


// Object is an instance of class

#include<iostream>
using namespace std;

class Book {
    public:
        string title;
        string author;
        int pages;
        Book(){
            title = "no title";
            author ="noauthor";
            pages = 0;
        }
        Book(string aTitle, string aAuthor, int aPages){
            title = aTitle;
            author =aAuthor;
            pages = aPages;
        }
};

int main(){
    Book book1("Harry Potter","JK Rowling",500); //object1
    Book book2("Lord of the ring","Takein",700); //object2
    Book book3;
    
    cout<<book3.title<<endl;
    
}


*/