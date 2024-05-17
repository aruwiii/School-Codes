#include <iostream>
using namespace std;

class Array1D
{
private:
    int capacity;
    int size;
    int *array;

public:
    Array1D(int Arraycap = 10) : capacity(Arraycap), size(0), array(new int[capacity]) {}

    ~Array1D() { delete[] array; }

    int Getsize() const { return size; }

    bool isEmpty() const { return size == 0; }

    bool isFull() const { return size == capacity; }

    void InsertItem(int pos, int val)
    {
        if (pos < 0 || pos > size)
        {
            cout << "Invalid position!" << endl;
            return;
        }
        if (isFull())
        {
            cout << "Array is full!" << endl;
            return;
        }
        for (int i = size; i > pos; --i)
        {
            array[i] = array[i - 1];
        }
        array[pos] = val;
        ++size;
    }

    void RemoveItem(int pos)
    {
        if (pos < 0 || pos >= size)
        {
            cout << "Invalid position!" << endl;
            return;
        }
        for (int i = pos; i < size - 1; ++i)
        {
            array[i] = array[i + 1];
        }
        --size;
    }

    void AddItem(int val)
    {
        if (isFull())
        {
            cout << "Array is full!" << endl;
            return;
        }
        array[size] = val;
        ++size;
    }

    void DisplayElements() const
    {
        for (int i = 0; i < size; ++i)
        {
            cout << array[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    int choice, pos, val;
    Array1D arr(5); 

    while (true)
    {
        cout << "1. Add Item\n2. Insert Item\n3. Remove Item\n4. Display Elements\n5. Check Array Size\n6. Check if Array is Empty\n7. Exit\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the value to add: ";
            cin >> val;
            arr.AddItem(val);
            break;
        case 2:
            cout << "Enter the position and value to insert: ";
            cin >> pos >> val;
            arr.InsertItem(pos, val);
            break;
        case 3:
            cout << "Enter the position to remove: ";
            cin >> pos;
            arr.RemoveItem(pos);
            break;
        case 4:
            cout << "Array Elements: ";
            arr.DisplayElements();
            break;
        case 5:
            cout << "Array size: " << arr.Getsize() << endl;
            break;
        case 6:
            if (arr.isEmpty())
            {
                cout << "Array is empty!" << endl;
            }
            else
            {
                cout << "Array is not empty!" << endl;
            }
            break;
        case 7:
            cout << "Exiting...\n";
            return 0;
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}


