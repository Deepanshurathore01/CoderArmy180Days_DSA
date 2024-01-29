#include<iostream>
#include<fstream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    vector<int> v(5);

    // Writing data to the file
    ofstream fout;
    fout.open("index.txt");
    cout << "Enter the elements: ";
    for(int i = 0; i < 5; i++)
        cin >> v[i];

    fout << "Original elements: ";
    for(int i = 0; i < 5; i++)
    {
        fout << v[i] << " ";
    }
    fout.close();

    // Reading data from the file
    ifstream fin;
    fin.open("index.txt");
    cout << "Original elements: ";
    int a;
    while (fin >> a)
    {
        cout << a << " ";
    }
    fin.close();

    // Sorting the vector
    sort(v.begin(), v.end());

    // Writing sorted data back to the file
    fout.open("index.txt");
    fout << "\nSorted elements: ";
    for (int i = 0; i < 5; i++)
    {
        fout << v[i] << " ";
    }
    fout.close();

    // Reading and displaying the sorted data from the file
    fin.open("index.txt");
    cout << "\nSorted elements from file: ";
    while (fin >> a)
    {
        cout<< a << " ";
    }
    fin.close();

    return 0;
}
