#ifndef SALE_H
#define SALE_H

class Sale
{
    private:
            double itemCost;
            double taxRate;
    public:
            Sale(double cost, double rate)
            {
                itemCost = cost;
                taxRate = rate;
            }
        
        double getItemCost()
        {
            return itemCost;
        }

        double getTaxRate()
        {
            return taxRate;
        }

        double getTax() const
        {
            return (itemCost * taxRate);
        } 

        double getTotal() const
        {
            return (itemCost + taxRate);
        }

};

#endif