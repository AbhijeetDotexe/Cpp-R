// Memory Allocation and using arrays in classes
#include <iostream>
using namespace std;
class shop
{
    int itemid[100];
    int itemprice[100];
    int counter;

public:
    void initcounter(void)
    {
        counter = 0;
    }
    void display(void);
    void setprice(void);
};
void shop::setprice(void)
{
    cout << "Enter id of your " << counter + 1 << " item : ";
    cin >> itemid[counter];
    cout << "Enter price of your item : ";
    cin >> itemprice[counter];
    counter++;
}
void shop ::display(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The id of the item is " << itemid[i] << " and the price of the item is " << itemprice[i] << endl;
    }
}
int main()
{
    shop dukaan;
    dukaan.initcounter();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    cout<<endl;
    dukaan.display();
    return 0;
}