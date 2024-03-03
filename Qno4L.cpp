#include<iostream>
#include<cstring>

using namespace std;

class MusicIns
{
protected:
    char instrument[15][15];

public:
    void string()
    {
        strcpy(instrument[0], "Veena");
        strcpy(instrument[1], "Guitar");
        strcpy(instrument[2], "Sitar");
        strcpy(instrument[3], "Sarod");
        strcpy(instrument[4], "Mandolin");
    }

    void wind()
    {
        strcpy(instrument[0], "Flute");
        strcpy(instrument[1], "Clarinet");
        strcpy(instrument[2], "Saxophone");
        strcpy(instrument[3], "Nadaswaram");
        strcpy(instrument[4], "Piccolo");
    }

    void perc(void)
    {
        strcpy(instrument[0], "Tabla");
        strcpy(instrument[1], "Mridangam");
        strcpy(instrument[2], "Bongos");
        strcpy(instrument[3], "Drums");
        strcpy(instrument[4], "Tambour");
    }

    void show()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << instrument[i];
            cout << " ";
        }
        cout << endl; // Add a newline for better formatting
    }
};

class typIns : public MusicIns
{
public:
    void get()
    {
        cout << "1. String Instrument" << endl;
        cout << "2. Wind Instrument" << endl; // Corrected typo: "Ind" to "Wind"
        cout << "3. Percussion Instrument" << endl;
    }

    void show(int choice)
    {
        switch (choice)
        {
        case 1:
            string();
            MusicIns::show();
            break;
        case 2:
            wind();
            MusicIns::show();
            break;
        case 3:
            perc();
            MusicIns::show();
            break;
        }
    }
};

int main()
{
    int x;
    typIns t;
    t.get();
    cout << "Enter the Choice:";
    cin >> x;
    t.show(x);
    return 0;
}

