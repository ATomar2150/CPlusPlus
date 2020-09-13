#include <iostream>
using namespace std;

int main (){

    double startingTimeOfCall;
    double endOfCall;
    double timeValidCheck;
    double totalCharge;
    double durationOfCall;
    double callBreakCharge1;
    double callBreakCharge2;
    double callBreakCharge3;

    cout<< "Enter the starting Time Of Call."<<endl;
    cin>> startingTimeOfCall;
   
    //getting the fractional part of timeOfCall for input validation.
    timeValidCheck = startingTimeOfCall - static_cast<int>(startingTimeOfCall);

    if(timeValidCheck > .59){
        cout<<"Minutes should be in range of 0-59. "<<endl;
        return 0;
    }
    //input validation.
    if(startingTimeOfCall > 23.59){
        cout<< "Invalid Time."<<endl;
        return 0;
    }

     cout<< "Enter the End Time Of Call."<<endl;
    cin>> endOfCall;

    durationOfCall = endOfCall - startingTimeOfCall;
    cout<< "Duration of call is: "<<durationOfCall<<endl;



    //calculating the duration of call and displaying charges of call.
    if(startingTimeOfCall>= 00.00 && startingTimeOfCall <= 06.59)
    {   
        //if the call started in first interval but ends up in secon or third interval.
        if (endOfCall > 06.59 && endOfCall < 19.00){

            callBreakCharge1 = (06.59 - startingTimeOfCall)*0.12;
            callBreakCharge2 = (endOfCall - 07.00)*0.55;
            totalCharge = callBreakCharge1 + callBreakCharge2;
            cout<< "This call overlapped two time charge intervals. so, the total charge consist of two diiferent charge rates 0.12 && 0.55. "<<endl;
            cout<< "Total cost is: "<<totalCharge;
            return 0;
        } else if (endOfCall > 19.00 && endOfCall < 23.59) {

            callBreakCharge1 = (06.59 - startingTimeOfCall)*0.12;
            callBreakCharge2 = (endOfCall - 19.01)*0.35;
            callBreakCharge3 = (19.00 - 07.00)*0.55;
            totalCharge = callBreakCharge1 + callBreakCharge2 + callBreakCharge3;
            cout<< "This call overlapped three time charge intervals, so, the total charge consist of three diiferent charge rates 0.12, 0.55 & 0.35. "<<endl;
            cout<< "Total cost is: "<<totalCharge;
            return 0;
        } else{
        
        cout<< "Rate per Minute is: 0.12 "<<endl;
        totalCharge = durationOfCall * 0.12;
        cout<< " Total cost of call is: "<<totalCharge<<endl;
        }
    }
    else if (startingTimeOfCall>= 07.00 && startingTimeOfCall <= 19.00)
    {

       cout<< "Rate per Minute is: 0.55 "<<endl;
       totalCharge = durationOfCall * 0.55;
        cout<< " Total cost of call is: "<<totalCharge<<endl;
    }
    else if (startingTimeOfCall>= 19.01 && startingTimeOfCall <= 23.59)
    {

        cout<< "Rate per Minute is: 0.35 "<<endl;
        totalCharge = durationOfCall * 0.35;
        cout<< " Total cost of call is: "<<totalCharge<<endl;
    } 
    return 0;

}