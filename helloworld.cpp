#include<iostream>
using namespace std;
class Message
{
  public:
    void display() {
      cout << "Hello World";
    }
};
int main()
{
    Message t;
    t.display();  
    return 0;
}

