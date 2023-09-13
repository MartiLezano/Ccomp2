//Marccelo Farid Tito Lezano 3.10
#include<string>
using namespace std;
class Invoice{

    Invoice(string part_number, string descrip, int quantity, int pr): p_number(part_number),description(descrip),qt(quantity),price(pr),VAT(0.2),discount(0){

        }
    void setpartnumber(string part_number){
        part_number=p_number;
    }
    void setdescription(string descrip){
        descrip=description;
    }
    void setquantity(int quantity){
        if (quantity>0){
            qt=quantity;
        }
    }
    void setprice(int pr){
        if (price>0){
            price=pr;
        }
    }
    void setvat(int vx){
        if (vx>0){
            VAT=vx;
        }
    }
    void setdiscount(int dis){
        if (dis>0){
            discount=dis;
        }
    }
    string part_number() const {
        return p_number;
    }

    string getdescription() const {
        return description;
    }

    int getquantity() const {
        return qt;
    }

    int getprice() const {
        return price;
    }

    double getVAT() const {
        return VAT;
    }

    double getdiscount() const {
        return discount;
    }

    double getinvoiceaccount() const {
        return qt * price;
    }

    private:
        string p_number;
        string description;
        int qt;
        double VAT;
        double price;
        double discount;


};