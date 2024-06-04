class Mahasiswa:
    def __init__(self, nim, nilai):
        self.nim = nim
        self.nilai = nilai

class HashTable:
    def __init__(self):
        self.table = {}

    def tambah_data(self, nim, nilai):
        if nim in self.table:
            print(f"Mahasiswa dengan NIM {nim} sudah ada.")
        else:
            self.table[nim] = Mahasiswa(nim, nilai)
            print(f"Data mahasiswa dengan NIM {nim} dan nilai {nilai} berhasil ditambahkan.")

    def hapus_data(self, nim):
        if nim in self.table:
            del self.table[nim]
            print(f"Data mahasiswa dengan NIM {nim} berhasil dihapus.")
        else:
            print(f"Data mahasiswa dengan NIM {nim} tidak ditemukan.")

    def cari_data_nim(self, nim):
        if nim in self.table:
            mahasiswa = self.table[nim]
            print(f"Mahasiswa ditemukan: NIM = {mahasiswa.nim}, Nilai = {mahasiswa.nilai}")
        else:
            print(f"Mahasiswa dengan NIM {nim} tidak ditemukan.")

    def cari_data_nilai(self, nilai_min, nilai_max):
        found = False
        for mahasiswa in self.table.values():
            if nilai_min <= mahasiswa.nilai <= nilai_max:
                print(f"Mahasiswa ditemukan: NIM = {mahasiswa.nim}, Nilai = {mahasiswa.nilai}")
                found = True
        if not found:
            print(f"Tidak ada mahasiswa dengan nilai di antara {nilai_min} dan {nilai_max}.")

def main():
    hash_table = HashTable()
    while True:
        print("\nMenu:")
        print("1. Tambah Data Mahasiswa")
        print("2. Hapus Data Mahasiswa")
        print("3. Cari Data Berdasarkan NIM")
        print("4. Cari Data Berdasarkan Rentang Nilai (80-90)")
        print("5. Keluar")

        pilihan = input("Pilih menu (1-5): ")
        if pilihan == "1":
            nim = input("Masukkan NIM: ")
            nilai = int(input("Masukkan nilai: "))
            hash_table.tambah_data(nim, nilai)
        elif pilihan == "2":
            nim = input("Masukkan NIM: ")
            hash_table.hapus_data(nim)
        elif pilihan == "3":
            nim = input("Masukkan NIM: ")
            hash_table.cari_data_nim(nim)
        elif pilihan == "4":
            hash_table.cari_data_nilai(80, 90)
        elif pilihan == "5":
            break
        else:
            print("Pilihan tidak valid. Silakan coba lagi.")

if __name__ == "__main__":
    main()