#ifndef TEXTBOOK_H
#define TEXTBOOK_H
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
            TextBook();
            TextBook(string, string, string);

            void setTitle(string);
            void setAuthor(string);
            void setPublisher(string);

            string getTitle() const;
            string getAuthor() const;
            string getPublisher() const;

            void set(string, string, string);

            void print() const;

};
#endif