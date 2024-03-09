#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

char tabla[3][3] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
int x=0,y=0;
char player = 'x';
char c;
string game;


void afisare() {
    system("cls");
    for (int i = 0;i < 3;i++) {
        for (int g = 0;g < 3;g++) {
            if (x == i && y == g)
                cout << "*";
            else
                cout << tabla[i][g];
            if (g < 2)
                cout << "   "  <<  "|";
        }
        cout << endl;
        if (i < 2) {
            for (int i = 0;i < 14;i++)
                cout << "-";
        }
        cout << endl;

    }
}

string nume1,nume2;
string n;
void controale() {
        cout << n << " muta" << endl;
        if (game == "pc" && player == '0') {
            while (1) {
                x = rand() % 4;
                y = rand() % 4;
                if (tabla [x][y] == ' ') {
                    tabla[x][y] = player;
                    player = 'x';
                    n = nume1;
                    break;
                }
            }
        }
        else {
            switch(_getch()) {
        case 'a' :
            y--;
            if (y < 0)
                y = 0;
            break;
        case 'd':
            y++;
            if (y > 2)
                y = 2;
            break;
        case 's':
            x++;
            if (x > 2)
                x = 2;
            break;
        case 'w':
            x--;
            if (x < 0)
                x = 0;
            break;
        case 'f':
            if (tabla [x][y] == ' ') {
                tabla[x][y] = player;
                if (player == 'x'){
                    player = '0';
                    n = nume2;
                }
                else {
                    player = 'x';
                    n = nume1;
                }
                Sleep(500);
            }

            else {
                cout << "Casuta ocupata.Alege alta!";
                Sleep(1500);
            }
       }


        }

}

bool game_over = 0;

void over (){
    if (tabla[0][0] == 'x' && tabla[0][1] == 'x' && tabla[0][2] == 'x') {
        cout << nume1 << " a castigat!";
        Sleep(1500);
        game_over = 1;
    }
    if (tabla[0][0] == '0' && tabla[0][1] == '0' && tabla[0][2] == '0') {
        if (game == "pc") {
            cout << "calculatorul a castigat!";
        Sleep(1500);
        game_over = 1;
        }
        else{
            cout << nume2 << " a castigat!";
            game_over = 1;
        }
    }
    if (tabla[1][0] == 'x' && tabla[1][1] == 'x' && tabla[1][2] == 'x') {
        cout << nume1 << " a castigat!";
        Sleep(1500);
        game_over = 1;
    }
    if (tabla[1][0] == '0' && tabla[1][1] == '0' && tabla[1][2] == '0') {
        if (game == "pc") {
            cout << "calculatorul a castigat!";
        Sleep(1500);
        game_over = 1;
        }
        else{
            cout << nume2 << " a castigat!";
            game_over = 1;
        }
    }
    if (tabla[2][0] == 'x' && tabla[2][1] == 'x' && tabla[2][2] == 'x') {
        cout << nume1 << " a castigat!";
        Sleep(1500);
        game_over = 1;
    }
    if (tabla[2][0] == '0' && tabla[2][1] == '0' && tabla[2][2] == '0') {
        if (game == "pc") {
            cout << "calculatorul a castigat!";
        Sleep(1500);
        game_over = 1;
        }
        else{
            cout << nume2 << " a castigat!";
            game_over = 1;
        }
    }
    if (tabla[0][0] == 'x' && tabla[1][1] == 'x' && tabla[2][2] == 'x') {
        cout << nume1 << " a castigat!";
        Sleep(1500);
        game_over = 1;
    }
    if (tabla[0][0] == '0' && tabla[1][1] == '0' && tabla[2][2] == '0') {
        if (game == "pc") {
            cout << "calculatorul a castigat!";
        Sleep(1500);
        game_over = 1;
        }
        else{
            cout << nume2 << " a castigat!";
            game_over = 1;
        }
    }
    if (tabla[0][2] == 'x' && tabla[1][1] == 'x' && tabla[2][0] == 'x') {
        cout << nume1 << " a castigat!";
        Sleep(1500);
        game_over = 1;
    }
    if (tabla[0][2] == '0' && tabla[1][1] == '0' && tabla[2][0] == '0') {
       if (game == "pc") {
            cout << "calculatorul a castigat!";
        Sleep(1500);
        game_over = 1;
        }
        else{
            cout << nume2 << " a castigat!";
            game_over = 1;
        }
    }
    if (tabla[0][0] == 'x' && tabla[1][0] == 'x' && tabla[2][0] == 'x') {
        cout << nume1 << " a castigat!";
        Sleep(1500);
        game_over = 1;
    }
    if (tabla[0][0] == '0' && tabla[1][0] == '0' && tabla[2][0] == '0') {
        if (game == "pc") {
            cout << "calculatorul a castigat!";
        Sleep(1500);
        game_over = 1;
        }
        else{
            cout << nume2 << " a castigat!";
            game_over = 1;
        }
    }
    if (tabla[0][1] == 'x' && tabla[1][1] == 'x' && tabla[2][1] == 'x') {
        cout << nume1 << " a castigat!";
        Sleep(1500);
        game_over = 1;
    }
    if (tabla[0][1] == '0' && tabla[1][1] == '0' && tabla[2][1] == '0') {
        if (game == "pc") {
            cout << "calculatorul a castigat!";
        Sleep(1500);
        game_over = 1;
        }
        else{
            cout << nume2 << " a castigat!";
            game_over = 1;
        }
    }
    if (tabla[0][2] == 'x' && tabla[1][2] == 'x' && tabla[2][2] == 'x') {
        cout << nume1 << " a castigat!";
        Sleep(1500);
        game_over = 1;
    }
    if (tabla[0][2] == '0' && tabla[2][2] == '0' && tabla[2][2] == '0') {
        if (game == "pc") {
            cout << "calculatorul a castigat!";
        Sleep(1500);
        game_over = 1;
        }
        else{
            cout << nume2 << " a castigat!";
            game_over = 1;
        }
    }


}

void restart () {
    cout << endl << endl;
    cout << "Apasa -r- pentru restart  ";
    char com;
    cin >> com;
    if (com == 'r') {
        for (int i = 0;i < 3;i++)
            for (int j = 0;j < 3;j++)
                tabla[i][j] = ' ';
        game_over  = 0;
        player = 'x';
        x = 0;
        y = 0;
        n = nume1;
    }
}


void meniu () {
    cout << " -> 1 <- : Player vs Player " << endl;
    cout << " -> 2 <- : Player vs CPU " << endl;
    switch (_getch()) {
    case '1' :
        game = "pp";
        cout << "nume player 1:"; cin >> nume1; cout << endl;
        cout << "nume player 2:"; cin >> nume2; cout << endl;
        n = nume1;
        break;
    case '2':
        game = "pc";
        cout << "nume: " ; cin >> nume1; cout <<endl;
        n = nume1;
        nume2 = "Pc";
    }
}


int main(){

    meniu ();
    system("cls");

    while (game_over == 0) {
        afisare();
        controale();
        over();
        int nr = 0;
        for (int i = 0;i < 3;i++)
            for (int j = 0;j < 3;j++)
                if (tabla[i][j] != ' ')
                    nr++;
        if (nr == 9)
            game_over = 1;
        if (game_over == 1)
            restart();

    }
    return 0;
}
