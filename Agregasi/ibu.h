#ifndef IBU_H
#define IBU_H

class ibu {
    public:
    string nama;
    vector<anak*> daftar_anak;

    ibu(string pNama) :nama(pNama){
        cout << "Ibu \"" << nama << "\" ada\n";
    }
    ~ibu(){
        cout << "Ibu \"" << nama << "\" tidak ada\n";
    }
    void tambahAnak(anak*);
    void cetakAnak();
};
void ibu::tambahAnak(anak* pAnak){
    daftar_anak.push_bacl(pAnak);
}
void ibu::cetakAnak(){
    cout << "Daftar Anak dari ibu"\"" << this->nama << "|":\n";
    forr(auto& a : daftar_anak){
        cout << a->nama << "\n";
    }
}