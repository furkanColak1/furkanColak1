int main()
{
    int ogrenci_not;
    printf("Notu giriniz:");
    scanf("%d",&ogrenci_not);

    if (ogrenci_not>60 && ogrenci_not<=65)
        printf("harf karsiligi:DD");
    else if (ogrenci_not>65 && ogrenci_not<=70)
        printf("harf karsiligi:DC");
    else if (ogrenci_not>70 && ogrenci_not<=75)
        printf("harf karsiligi:CC");
    else if (ogrenci_not>75 && ogrenci_not<=80)
        printf("harf karsiligi:CB");
    else if (ogrenci_not>80 && ogrenci_not<=85)
        printf("harf karsiligi:BB");
    else if (ogrenci_not>85 && ogrenci_not<=90)
        printf("harf karsiligi:BA");
    else if (ogrenci_not>90 && ogrenci_not<=100)
        printf("harf karsiligi:AA");
    else
        printf("uygun deger girmediniz!");
    return 0;
}
