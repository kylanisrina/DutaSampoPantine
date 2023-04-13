import sys
class mahasiswa:
    def _init_(self, nama, npm, kelas):
        self.nama = nama
        self.npm = npm
        self.kelas = kelas
    def anggota_kelompok(self):
        print("Kelompok 13: ")
        print("Nama\t: ", self.nama)
        print("NPM\t: ", self.npm)
        print("Kelas\t: ", self.kelas)

mahasiswa1 = mahasiswa("Sheila Silvera Shandy", "2217051150", "A")
mahasiswa2 = mahasiswa("Dhiya Ghina Hasri", "2217051068", "A")
mahasiswa3 = mahasiswa("Fadillah", "2217051138", "A")

kelompok = [mahasiswa1, mahasiswa2, mahasiswa3]

print("Anggota Kelompok 13")
for mhs in kelompok:
    mhs.anggota_kelompok()


print("------------Price list Bagshop------------")
pembeli = input("Masukkan Nama Pembeli : ")
print ("Nama pembeli : ", pembeli)
harga = (25000,50000,150000,300000,500000)
daftar_tas = [
  {'model': 'Tas totebag', 'harga': harga[0]},
  {'model': 'Tas sling bag', 'harga': harga[1]},
  {'model': 'Tas backpack', 'harga': harga[2]},
  {'model': 'Koper 18 inch', 'harga': harga[3]},
  {'model': 'Koper 24 inch', 'harga': harga[4]},
]

# Buat fungsi untuk menampilkan daftar tas yang tersedia
def tampilkan_daftar_tas():
  for i, tas in enumerate(daftar_tas):
    print(i+1, tas['model'], '\t', tas['harga'])

# Buat fungsi untuk menampilkan struk

def sda(): 
    print("Daftar Tas yang Tersedia:")
    tampilkan_daftar_tas()
    jalan=True
    while(jalan==True):
        pilihan = input("Masukkan nomor tas yang ingin dibeli (0 untuk keluar): ")
        if pilihan == "0":
            sys.exit(0)
        elif pilihan == "1" :
            tas_dipilih = "Tas totebag"
            jumlah_tas = int(input("Berapa banyak tas yang ingin Anda beli? "))
            total_harga = harga[0]*jumlah_tas
            
            uang=int(input("masukkan uang kamu :"))
            if uang>=total_harga :
                print("==================================")
                print("\tStruk Penjualan Tas ")
                print("Model Tas  :", tas_dipilih)
                print("Jumlah     :", jumlah_tas)
                print("Total harga:", total_harga)
                kembalian=uang-total_harga
                print("Kembalian  :", kembalian)
                print("==================================")
                ulang=input("Apakah anda ingin mengulang lagi : ")
                if ulang == "y" or "Y" :
                    sda()
                if ulang== "t" or "T" :
                    break
                else :
                    print("Terima kasih telah berkunjung di toko kami")
                    sys.exit(0)
                    
            elif uang<total_harga :
                print("Mohon maaf saldo anda kurang ")
                sys.exit(0)

        
        elif pilihan == "2" :
            tas_dipilih = "Tas slingbag"
            jumlah_tas = int(input("Berapa banyak tas yang ingin Anda beli? "))
            total_harga = harga[1]*jumlah_tas
            
            uang=int(input("masukkan uang kamu :"))
            if uang>=total_harga :
                print("==================================")
                print("\tStruk Penjualan Tas ")
                print("Model Tas  :", tas_dipilih)
                print("Jumlah     :", jumlah_tas)
                print("Total harga:", total_harga)
                kembalian=uang-total_harga
                print("Kembalian  :", kembalian)
                print("==================================")
                ulang=input("Apakah anda ingin mengulang lagi : ")
                if ulang == "y" or "Y" :
                    sda()
                if ulang== "t" or "T" :
                    break
                else :
                    input("Terima kasih telah berkunjung di toko kami")
                    sys.exit(0)
            elif uang<total_harga :
                print("Mohon maaf saldo anda kurang ")
                sys.exit(0)
        
        elif pilihan == "3" :
            tas_dipilih = "Tas backpack"
            jumlah_tas = int(input("Berapa banyak tas yang ingin Anda beli? "))
            total_harga = harga[2]*jumlah_tas
            
            uang=int(input("masukkan uang kamu :"))
            if uang>=total_harga :
                print("==================================")
                print("\tStruk Penjualan Tas ")
                print("Model Tas  :", tas_dipilih)
                print("Jumlah     :", jumlah_tas)
                print("Total harga:", total_harga)
                kembalian=uang-total_harga
                print("Kembalian  :", kembalian)
                print("==================================")
                ulang=input("Apakah anda ingin mengulang lagi : ")
                if ulang =="y" or "Y" :
                    sda()
                if ulang== "t" or "T" :
                    break
                else :
                    input("Terima kasih telah berkunjung di toko kami")
                    sys.exit(0)
            elif uang<total_harga :
                print("Mohon maaf saldo anda kurang ")
                sys.exit(0)
                
        elif pilihan == "4" :
            tas_dipilih = "Koper 18 Inch"
            jumlah_tas = int(input("Berapa banyak tas yang ingin Anda beli? "))
            total_harga = harga[3]*jumlah_tas
            
            uang=int(input("masukkan uang kamu :"))
            if uang>=total_harga :
                print("==================================")
                print("\tStruk Penjualan Tas ")
                print("Model Tas  :", tas_dipilih)
                print("Jumlah     :", jumlah_tas)
                print("Total harga:", total_harga)
                kembalian=uang-total_harga
                print("Kembalian  :", kembalian)
                print("==================================")
                ulang=input("Apakah anda ingin mengulang lagi : ")
                if ulang =="y" or "Y" :
                    break
                if ulang== "t" or "T" :
                    break
                else :
                    input("Terima kasih telah berkunjung di toko kami")
                    exit(0)
            elif uang<total_harga :
                print("Mohon maaf saldo anda kurang ")
                exit(0)
                
        elif pilihan == "5" :
            tas_dipilih = "Tas backpack"
            jumlah_tas = int(input("Berapa banyak tas yang ingin Anda beli? "))
            total_harga = harga[4]*jumlah_tas
            
            uang=int(input("masukkan uang kamu :"))
            if uang>=total_harga :
                print("==================================")
                print("\tStruk Penjualan Tas ")
                print("Model Tas  :", tas_dipilih)
                print("Jumlah     :", jumlah_tas)
                print("Total harga:", total_harga)
                kembalian=uang-total_harga
                print("Kembalian  :", kembalian)
                print("==================================")
                ulang=input("Apakah anda ingin mengulang lagi : ")
                if ulang =="y" or "Y" :
                    sda()
                if ulang== "t" or "T" :
                    break
                else :
                    input("Terima kasih telah berkunjung di toko kami")
                    sys.exit(0)
            elif uang<total_harga :
                print("Mohon maaf saldo anda kurang ")
                sys.exit(0)
        
        else:
            print("Mohon masukkan nomor yang valid.")
            sda()
    
sda()