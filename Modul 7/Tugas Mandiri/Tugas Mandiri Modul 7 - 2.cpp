#include<iostream>

using namespace std;

int main(){
    string data[3][9] = {
        {   "2019",
            "Captain Marvel",
            "Avengers 4 : Endgame",
            "Godzilla: King of the Monsters",
            "Spider-Man: Far From Home",
            "Toy Story 4",
            "The Lion King",
            "Aladdin",
            "Terminator: Dark Fate"
        },
        {
            "2020",
            "The Eight Hundred",
            "Demon Slayer: Mugen Train",
            "Bad Boys for Life",
            "My People, My Homeland",
            "Tenet",
            "Sonic the Hedgehog",
            "Dolittle",
            "Legend of Deification"
        },
        {
            "2021",
            "The Battle at Lake Changjin",
            "Hi, Mom",
            "No Time to Die",
            "F9: The Fast Saga",
            "Detective Chinatown 3",
            "Venom: Let There Be Carnage",
            "Godzilla vs. Kong",
            "Shang-Chi and the Legend of the Ten Rings"
        }
    };
    int i, j;
    string cari;

    cout<<"Program menampilkan 8 film box office tahun 2019 s.d 2021"<<endl;

    cout<<"Masukan tahun : ";
    cin>>cari;

    for(i = 0; i < 3; i++){
        if(data[i][0].find(cari) != string::npos){
            for(j = 1; j < 9; j++){
                cout<<data[i][j]<<endl;
            }
        }
    }

    return 0;
}
