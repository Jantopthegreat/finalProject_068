#include <iostream>
using namespace std;

class bidangDatar {
private:
    int x;
    int y;

public:
    bidangDatar() {
        x = 0;
        y = 0;
    }

    virtual void input() {}
    virtual float Luas(int a) { return 0; }
    virtual float Keliling(int a) { return 0; }
    virtual void cekUkuran() { return; }

    void setX(int a) {
        this->x = a;
    }

    int getX() {
        return x;
    }

    void setY(int b) {
        this->y = b;
    }

    int getY() {
        return y;
    }
};

class Lingkaran : public bidangDatar {
public:
    void input() {
        int jari;
        cout << "Masukkan jarijari: ";
        cin >> jari;
        setX(jari);
    }

    float Luas(int r) {
        return 3.14 * r * r;
    }

    float Keliling(int r) {
        return 2 * 3.14 * r;
    }

    void cekUkuran() {
        int r = getX();
        float keliling = Keliling(r);
        if (keliling > 40) {
            cout << "\nUkuran Lingkaran yang dibuat besar" << endl;
        }
        if (keliling < 20 && keliling > 10) {
            cout << "\nUkuran Lingkaran yang dibuat sedang" << endl;
        }
        if (keliling < 10) {
            cout << "\nUkuran Lingkaran yang dibuat kecil" << endl;
            }
    
    }
};

class PersegiPanjang : public bidangDatar {
public:
    void input() {
        int lebar;
        int panjang;
        cout << "Masukkan Lebar PersegiPanjang: ";
        cin >> lebar;
        setY(lebar);

        cout << "Masukan Panjang PersegiPanjang :";
        cin >> panjang;
        setX(panjang);
    }

    float Luas(int b) {
        return b * getY();
    }

    float Keliling(int b) {
        return 2 * (getY() + getX());
    }

    void cekUkuran() {
        int a = getX();
        float keliling = Keliling(a);
        if (keliling > 40)
            cout << "\nUkuran PersegiPanjang yang dibuat besar" << endl;
        if (keliling < 20 && keliling > 10)
            cout << "\nUkuran PersegiPanjang yang dibuat sedang" << endl;
       if (keliling < 10)
            cout << "\nUkuran PersegiPanjang yang dibuat kecil" << endl;
    }
};

int main() {
    char repeat;
    bidangDatar* bd;
    do {

    bd = new Lingkaran();
    bd->input();
    int r = bd->getX();
    cout << "Lingkaran dibuat" << endl;
    cout << "\nLuas Lingkaran = " << bd->Luas(r) << endl;
    cout << "\nKeliling Lingkaran = " << bd->Keliling(r) << endl;
    bd->cekUkuran();
    

    
    bd = new PersegiPanjang();
    bd->input();
    int a = bd->getX();
    cout << "\nPersegi Panjang berhasil dibuat" << endl;
    cout << "\nLuas Persegi Panjang = " << bd->Luas(a) << endl;
    cout << "\nKeliling Persegi Panjang = " << bd->Keliling(a) << endl;
    bd->cekUkuran();
    delete bd;

    cout << "Apakah Anda ingin mengulang program? (Y/N): ";
    cin >> repeat;

    } while (repeat == 'Y' || repeat == 'y');

    return 0;
}




        
