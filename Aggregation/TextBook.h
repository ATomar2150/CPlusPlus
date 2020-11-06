#ifndef TEXTBOOK
#define TEXTBOOK
#include <iostream>
#include <string>

using namespace std;

class TextBook
{
    private:
            string title;
            string author;
            string publisher;
    public:
            TextBook()
            {
                set("","","");
            };
            TextBook(string textTitle, string auth, string pub)
            {
                set(textTitle, auth, pub);
            };

            void set(string textTitle, string auth, string pub)
            {
                title = textTitle;
                author = auth;
                publisher = pub;
            };

            void print() const
            {
                cout<<"Title: "<<title<<endl;
                cout<<"Author: "<<author<<endl;
                cout<<"Publisher: "<<publisher<<endl;
            };

};
#endif