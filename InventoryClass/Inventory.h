#ifndef INVENTORY_H
#define INVENTORY_H

class Inventory
{   
    private:
            int itemNumber;
            int quantity;
            double cost;
            double totalCost;
    public:
            Inventory();
            Inventory(int,int,double);
            void setItemNumber(int);
            void setQuantity(int);
            void setCost(double);
            void setTotalCost(double);
            int getItemNumber() const;
            int getQuantity() const;
            double getCost() const;
            double getTotalCost();
};

#endif