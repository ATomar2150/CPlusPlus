#ifndef DATE_H
#define DATE_H

class Date
{
    private:
            int day;
            int month;
            int year;
    public:
            Date();
            void setDate(int);
            void setMonth(int);
            void setYear(int);
            int getDate() const;
            int getMonth() const;
            int getYear() const;
};

#endif