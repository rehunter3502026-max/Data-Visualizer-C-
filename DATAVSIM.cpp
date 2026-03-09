#include <iostream>
#include <vector>
using namespace std;

class DataVisualizer
{
private:
    vector<int> data;

public:
    void addData()
    {
        int n;
        cout << "Enter number: ";
        cin >> n;
        data.push_back(n);
    }

    void showData()
    {
        cout << "Dataset: ";
        for (int i = 0; i < data.size(); i++)
            cout << data[i] << " ";
        cout << endl;
    }

    void statistics()
    {
        if (data.size() == 0)
        {
            cout << "No data available\n";
            return;
        }

        int sum = 0;
        int maxVal = data[0];
        int minVal = data[0];

        for (int i = 0; i < data.size(); i++)
        {
            sum += data[i];

            if (data[i] > maxVal)
                maxVal = data[i];

            if (data[i] < minVal)
                minVal = data[i];
        }

        cout << "Average: " << (double)sum / data.size() << endl;
        cout << "Max: " << maxVal << endl;
        cout << "Min: " << minVal << endl;
    }

    void barChart()
    {
        cout << "\nBar Chart:\n";

        for (int i = 0; i < data.size(); i++)
        {
            cout << data[i] << " | ";
            for (int j = 0; j < data[i]; j++)
                cout << "*";
            cout << endl;
        }
    }
};

int main()
{
    DataVisualizer app;
    int choice;

    do
    {
        cout << "\n1. Add Data\n";
        cout << "2. Show Data\n";
        cout << "3. Statistics\n";
        cout << "4. Bar Chart\n";
        cout << "0. Exit\n";
        cout << "Choice: ";
        cin >> choice;

        if (choice == 1)
            app.addData();
        else if (choice == 2)
            app.showData();
        else if (choice == 3)
            app.statistics();
        else if (choice == 4)
            app.barChart();

    } while (choice != 0);

    return 0;
}

