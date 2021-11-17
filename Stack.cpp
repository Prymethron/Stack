#include <iostream>
using namespace std;
#define size 100

struct Stack
{
    int top = -1;
    int stack_list[size];

void push(int x){
    if (top < 0) {
        top++;
        stack_list[top] = x;
        cout<< x << " pushed to the stack."<<endl;
    }
    else{
        top++;
        stack_list[top] = x;
        cout<< x << " pushed to the stack."<<endl;
    }
}

void pop(){
    if (top<0)
        cout<<"There's no any element to pop."<<endl;
    else
    {
        cout << stack_list[top] <<" is popped.\n";
        stack_list[top] = 0;
        top--;
    }
}

void peek(){
    if (top<0)
            cout << "There's no any element to peek." << endl;
        else
            cout <<"The top element of the stack : "<< stack_list[top] <<endl;
}

void printStack(){
    for(int i=0;i<=top;i++)
        cout << stack_list[i]<< " ";
    cout<<endl;
}
};

void invalidInput(){
    cout<< "Invalid input.\n";
    cin.clear();
    cin.ignore(10000,'\n');
}



int main()
{
    Stack stack;
    int selection=0, x;
    while(-1)
    {
        cout<< "Select a function to do.\n1-Push\n2-Pop\n3-Print Stack\n4-Peek\n5-Exit\n";
        if(!(cin >> selection))
        invalidInput();
        else
            {switch(selection){
            case 1:
            cout << "Enter a value to enqueue.\n";
            if(!(cin>>x))
            {
                invalidInput();
            }
            else
            {
                stack.push(x);
            }
            break;

            case 2:
            stack.pop();
            break;

            case 3:
            stack.printStack();
            break;

            case 4:
            stack.peek();
            break;

            case 5:
            exit(0);
            break;

            default:
            cout<< "Invalid input.\n";
            break;
            }}
    }
}



