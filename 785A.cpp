#include <iostream>
using namespace std;

// Tetrahedron. Tetrahedron has 4 triangular faces.
// Cube. Cube has 6 square faces.
// Octahedron. Octahedron has 8 triangular faces.
// Dodecahedron. Dodecahedron has 12 pentagonal faces.
// Icosahedron. Icosahedron has 20 triangular faces.

int main()
{
    int n, face = 0;
    cin >> n;
    cin.ignore();
    string str;

    for (int i = 1; i <= n; i++)
    {
        getline(cin, str);

        if (str == "Tetrahedron")
            face = face + 4;
        else if (str == "Cube")
            face = face + 6;
        else if (str == "Octahedron")
            face = face + 8;
        else if (str == "Dodecahedron")
            face = face + 12;
        else if (str == "Icosahedron")
            face = face + 20;
    }

    cout << face;

    return 0;
}