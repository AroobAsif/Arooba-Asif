#include<iostream>
#include<string>
#include<limits> 
using namespace std;

int choice;
string user, password;


struct Item {
    string name;
    int price;
};


struct CartItem {
    int itemIndex;  
    int quantity;   
};

Item items[10];  
int itemCount = 0;

CartItem cart[10];  
int cartItemCount = 0;


#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"

void listItems() {
    if (itemCount == 0) {
        cout << RED << "No items available!" << RESET << endl;
    } else {
        cout << BLUE << "Items in store:" << RESET << endl;
        for (int i = 0; i < itemCount; i++) {
            cout << GREEN << i + 1 << ". " << items[i].name << " - " << items[i].price << " Pkr" << RESET << endl;
        }
    }
}

void addItem() {
    if (itemCount >= 10) {
        cout << RED << "Cannot add more items. Store is full!" << RESET << endl;
        return;
    }

    cout << YELLOW << "Enter item name: " << RESET;
    cin.ignore();
    getline(cin, items[itemCount].name);

    cout << YELLOW << "Enter item price: " << RESET;
    while (!(cin >> items[itemCount].price)) {
        cout << RED << "Invalid input. Please enter a valid price: " << RESET;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    itemCount++;
    cout << GREEN << "Item added successfully!" << RESET << endl;
}

void updateItem() {
    int itemNumber;
    cout << YELLOW << "Enter the item number to update: " << RESET;
    while (!(cin >> itemNumber) || itemNumber < 1 || itemNumber > itemCount) {
        cout << RED << "Invalid input. Please enter a valid item number: " << RESET;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << YELLOW << "Enter new item name: " << RESET;
    cin.ignore();
    getline(cin, items[itemNumber - 1].name);

    cout << YELLOW << "Enter new item price: " << RESET;
    while (!(cin >> items[itemNumber - 1].price)) {
        cout << RED << "Invalid input. Please enter a valid price: " << RESET;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << GREEN << "Item updated successfully!" << RESET << endl;
}

void deleteItem() {
    int itemNumber;
    cout << YELLOW << "Enter the item number to delete: " << RESET;
    while (!(cin >> itemNumber) || itemNumber < 1 || itemNumber > itemCount) {
        cout << RED << "Invalid input. Please enter a valid item number: " << RESET;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    for (int i = itemNumber - 1; i < itemCount - 1; i++) {
        items[i] = items[i + 1];
    }

    itemCount--;
    cout << GREEN << "Item deleted successfully!" << RESET << endl;
}

void buyItem() {
    int itemNumber, quantity;
    cout << YELLOW << "Enter item number to buy: " << RESET;
    while (!(cin >> itemNumber) || itemNumber < 1 || itemNumber > itemCount) {
        cout << RED << "Invalid input. Please enter a valid item number: " << RESET;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << YELLOW << "Enter quantity: " << RESET;
    while (!(cin >> quantity) || quantity < 1) {
        cout << RED << "Invalid input. Please enter a valid quantity: " << RESET;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    
    cart[cartItemCount].itemIndex = itemNumber - 1;
    cart[cartItemCount].quantity = quantity;
    cartItemCount++;

    cout << GREEN << "Item(s) added to the cart!" << RESET << endl;
}

void totalBill() {
    int total = 0;

    if (cartItemCount == 0) {
        cout << RED << "Your cart is empty!" << RESET << endl;
        return;
    }

    
    for (int i = 0; i < cartItemCount; i++) {
        total += items[cart[i].itemIndex].price * cart[i].quantity;
    }

    cout << CYAN << "Total Bill: " << total << " Pkr" << RESET << endl;
}

int main() {
    do {
        cout << GREEN << "*******************************************************************" << RESET << endl;
        cout << BLUE << "***************************************************" << RESET << endl;
        cout << endl;
        cout << MAGENTA << ",--.            ,---. ,--------.,------. ,------.,------.,--------." << RESET << endl;
        cout << MAGENTA << "/   |  ,---.    '   .-''--.  .--'|  .--. '|  .---'|  .---''--.  .--'" << RESET << endl;
        cout << MAGENTA << "|  | / '  |    .  -.   |  |   |  '--'.'|  --, |  --,    |  |    " << RESET << endl;
        cout << MAGENTA << " |  |/  |  |       |  |   |  |   |  ---. |  ---.|  '---;   |  |" << RESET << endl;
        cout << MAGENTA << " --''--|  |    -----'   --'   --' '--'  ------'------'   --'    " << RESET << endl;
        cout << MAGENTA << "        --'" << RESET << endl;
        cout << GREEN << "**********************************************************************" << RESET << endl;
        cout << BLUE << "                *******************************************************" << RESET << endl;
        cout << GREEN << "Choose the desired option\n" << RESET;
        cout << "1.Owner" << endl;
        cout << "2.Customer" << endl;
        cout << "3.Exit" << endl;
        cout << YELLOW << "Enter the choice: " << RESET;
        while (!(cin >> choice) || choice < 1 || choice > 2) {
            cout << RED << "Invalid input. Please enter 1 for Owner or 2 for Customer: " << RESET;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        int option;
        if (choice == 1) {
            cout << "Enter the username:" << endl;
            cin >> user;
            cout << "Enter the password:" << endl;
            cin >> password;
            cin.ignore();

            if (user == "owner" && password == "PF2020") {
                cout << GREEN << "Login successful" << RESET << endl;
                do {
                    cout << YELLOW << "1.Add item" << RESET << endl;
                    cout << YELLOW << "2.Update" << RESET << endl;
                    cout << YELLOW << "3.List" << RESET << endl;
                    cout << YELLOW << "4.Delete" << RESET << endl;
                    cout << YELLOW << "5.Main Menu" << RESET << endl;
                    cout << YELLOW << "Enter your option: " << RESET;
                    while (!(cin >> option) || option < 1 || option > 5) {
                        cout << RED << "Invalid input. Please choose between 1 and 5: " << RESET;
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    }

                    switch (option) {
                        case 1:
                            addItem();
                            break;
                        case 2:
                            updateItem();
                            break;
                        case 3:
                            listItems();
                            break;
                        case 4:
                            deleteItem();
                            break;
                        case 5:
                            cout << "Returning to main menu..." << endl;
                            break;
                        default:
                            cout << RED << "Invalid Input" << RESET << endl;
                            break;
                    }
                } while (option != 5); 
            } else {
                cout << RED << "Invalid Credentials" << RESET << endl;
            }
        } else if (choice == 2) {
            cout << "Enter the username:" << endl;
            cin >> user;
            cout << "Enter the password:" << endl;
            cin >> password;
            cin.ignore();
            if (user == "owner" && password == "PF2020") {
                cout << GREEN << "Login successful" << RESET << endl;
                do {
                    cout << YELLOW << "1.Buy item" << RESET << endl;
                    cout << YELLOW << "2.Total bill" << RESET << endl;
                    cout << YELLOW << "3.Main menu" << RESET << endl;
                    cout << YELLOW << "Enter your option: " << RESET;
                    while (!(cin >> option) || option < 1 || option > 3) {
                        cout << RED << "Invalid input. Please choose between 1 and 3: " << RESET;
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    }

                    switch (option) {
                        case 1:
                            buyItem();
                            break;
                        case 2:
                            totalBill();
                            break;
                        case 3:
                            cout << "Returning to main menu..." << endl;
                            break;
                        default:
                            cout << RED << "Invalid Input" << RESET << endl;
                            break;
                    }
                } while (option != 3); 
            } else {
                cout << RED << "Invalid credentials" << RESET << endl;
            }
        }

    } while (choice != 3); 

    return 0;
}