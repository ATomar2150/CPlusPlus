#include "TextBook.h"
#include <string>
#include <iostream>
using namespace std;


//FOR TEXTBOOK CLASS
TextBook::TextBook()
{
    title = " ";
    author = " ";
    publisher = " ";
};
TextBook::TextBook(string title1, string author1, string publisher1)
{
    title = title1;
    author = author1;
    publisher = publisher1;
};

void TextBook::set(string title1, string author1, string publisher1)
{
    title = title1;
    author = author1;
    publisher = publisher1;
};

void TextBook::print() const
{
    cout<<"Title: "<<title<<endl;
    cout<<"Author: "<<author<<endl;
    cout<<"Publisher: "<<publisher<<endl;
};

void TextBook::setTitle(string title1)
{
    title = title1;
};
void TextBook::setAuthor(string author1)
{
    author = author1;
};
void TextBook::setPublisher(string publisher1)
{
    publisher = publisher1;
};

string TextBook::getTitle() const
{
    return title;
};
string TextBook::getAuthor() const
{
    return author;
};
string TextBook::getPublisher() const
{
    return publisher;
};
