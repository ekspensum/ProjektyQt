#include "rezerwacje.h"

QDateTime Rezerwacje::getDataRezerwacji() const
{
    return dataRezerwacji;
}

QDateTime Rezerwacje::getTerminRezerwacji() const
{
    return terminRezerwacji;
}

QDateTime Rezerwacje::getDataOdwolaniaRezerwacji() const
{
    return dataOdwolaniaRezerwacji;
}

Rezerwacje::Rezerwacje()
{

}

Rezerwacje::Rezerwacje(int idFilmu, QString tytul, double cenaWypozyczenia, int idKlienta, QString imie, QString nazwisko, QDateTime dataRezerwacji, QDateTime terminRezerwacji)
{
    this->idFilmu = idFilmu;
    this->tytul = tytul;
    this->cenaWypozyczenia = cenaWypozyczenia;
    this->idKlienta = idKlienta;
    this->imie = imie;
    this->nazwisko = nazwisko;
    this->dataRezerwacji = dataRezerwacji;
    this->terminRezerwacji = terminRezerwacji;
}
