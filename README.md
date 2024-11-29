# PENGENALAN GIT DAN GITHUB
|Nama|Divisi|Sub-Divisi|
|----|------|----------|
|Muhammad Gian Yudha Prawira| ELC | Microcontroller|

## Cara Menggunakan Git dan Github
### 1. Unduh dan pasang Git pada PC/Laptop
    https://git-scm.com/downloads
### 2. Buat Akun Github
    https://github.com/join
### 3. Mengatur Git Bash atau Terminal
    git config --global user.name (masukkan username)
    git config --global user.email (masukkan email)
### 4. Membuat SSH Keys di GitHub
#### 1) Buka GitHub dan Masuk Ke Settings -> "SSH and GPG keys" -> "New SSH Key"
#### 2) Untuk Membuat Kunci, Buka Git Bash dan Masukkan Perintah Berikut:
     ssh-keygen -t ed25519 -C (masukkan email)
     >> Kemudian tekan enter 2 kali
#### 3) Salin SSH key yang Telah Dibuat dengan Perintah Berikut:
     clip < ~/.ssh/id_ed25519.pub
#### 4) Tempelkan Untuk Memasukkan Kunci Yang Telah Disalin ke Bagian Key di Pengaturan New SSH Key di GitHub

    
## Membuat Repositori
### 1. Buka Laman Github
    https://github.com
    Lakukan Log-in dengan akun yang telah dibuat
### 2. Isikan Nama Repositori yang Diinginkan Lalu Pilih "Public" Setelah Itu Pilih "Create Repository"
    Lakukan centang pada "Add a README file"
### 3. Pilih Menu "Code" Lalu Pilih "SSH" Setelah Itu Salin Link SSH
    Contoh Link : git@github.com:(namapengguna)/(namarepositori).git


## Push File dari Lokal ke Github
### 1. Buat Folder dengan Nama yang Sama dengan Nama Repositori lalu Buka Folder yang telah dibuat
### 2. Buat File Baru untuk Diunggah ke Github
### 3. Klik Kanan pada Mouse Lalu Pilih "Open Git Bash here"
### 4. Lalu Masukkan Command Berikut pada Git Bash
    git init
   	git remote add origin (link SSH yang telah di salin)
   	git branch -M main
    (Untuk memastikan folder lokal sama dengan folder di github maka ketik : git pull origin (branch yang ingin didownload))
### 5. Untuk Mengunggah File pada Folder Lokal, Masukkan Command Berikut pada Git Bash
    git add .
    git commit -m "(deskripsi bebas)"
    git push origin (branch yang akan ingin diunggah)

## Membuat Branch Baru Menggunakan Git 
### 1. Buka Git Bash pada File yang Terhubung dengan Repositori
### 2. Masukkan Command Berikut Pada Git Bash
    git checkout -B (nama branch yang diinginkan)
### 3. Untuk Pindah Branch Dapat Memasukkan Command Berikut
    git branch -d (nama branch yang ingin dihapus)

## Menghapus Branch Menggunakan Git
### 1. Lakukan Pindah Branch dengan Command Berikut
    git checkout (nama branch yang diinginkan)
### 2. Hapus Branch yang Diinginkan dengan Command Berikut
    git branch -d (nama branch yang ingin dihapus)

## Menggabungkan Brench
### 1. Pindah ke branch yang ingin digabung:
    git checkout (nama branch)
### 2. Gabungkan branch lain ke branch saat ini:
    git merge nama-branch-lain

## Kloning Repositori
### 1. Masuk ke Git Bash pada Folder yang diinginkan
### 2. Masukkan Command Berikut:
    git clone https://github.com/(namapengguna)/(namarepositori).git

## Melihat riwayat Commit
### 1. Masuk ke Git Bash pada Folder yang diinginkan
### 2. Untuk melihat riwayat commit dalam repository:
    git log



























|Nama|Divisi|Sub-Divisi|
|----|------|----------|
|Muhammad Gian Yudha Prawira| ELC | Microcontroller|


![ELC_M  Gian Yudha P](https://github.com/user-attachments/assets/bc6b860d-ad89-4af8-835d-fdc78d17cc00)

# ERC
Komponen power dari sistem ini adalah baterai LiPo 7.4V dengan kapasitas 2200mAh. Baterai ini dipilih karena menyesuaikan regulasi pada lomba ERC 2024. Penggunaan baterai Li-Po karena kewetan dari baterai itu sendiri. Untuk sistem utamanya menggunakan mikrokontroler STM32H7. Cara kerjanya seperti komputer kecil yang mengatur semua gerakan kapal. Mikrokontroler ini menerima perintah dari pengendali jarak jauh (remote control) melalui modul LoRa yang bekerja di frekuensi 2.4GHz dimana sistem komunikasi ini bisa mengirim dan menerima perintah sampai jarak yang jauh. Untuk menggerakkan kapal, digunakan  motor DC yang berkaitan dengan mikrokontroler. Saat remote control ditekan maju, sinyal diterima oleh modul LoRa, kemudian diproses oleh mikrokontroler, dan akhirnya driver motor bergerak. Terdapat servo rudder yang terhubung ke STM32H7 untuk menggerakan manuver kapal. Sistem ini juga dilengkapi dengan fitur keselamatan berupa tombol darurat (emergency stop) yang bisa langsung mematikan seluruh sistem jika terjadi hal yang tidak diinginkan. 

# FERC
Sistem ini menggunakan baterai kering 12V/7Ah sebagai sumber listrik utama. Baterai ini seperti aki motor pada umumnya, yang fungsinya menyuplai listrik ke semua komponen elektronik di kapal. Bedanya dengan ERC, baterai di sini tidak untuk menggerakkan kapal, tapi untuk menghidupkan sistem elektronik dan starter mesin. Otak dari sistem ini ada pada CPU, yang bertugas mengatur semua perintah dan mengontrol berbagai komponen. Komponen ini terhubung dengan berbagai sensor penting: sensor RPM yang mengukur kecepatan putaran mesin, sensor temperatur yang memantau panas mesin, dan sensor tekanan oli yang memastikan pelumasan mesin berjalan baik. Untuk sistem kendali jarak jauh, digunakan modul Lora yang bekerja di frekuensi 2.4GHz, lalu remote control mengirim sinyal ke penerima di kapal, kemudian CPU memproses perintah tersebut untuk mengatur kecepatan mesin melalui servo yang mengontrol throttle (gas). Sistem keamanan juga lebih kompleks. Ada tombol emergency stop yang bisa langsung mematikan mesin dalam keadaan darurat. Sensor-sensor yang terpasang terus memantau kondisi mesin.


|Nama|Divisi|Sub-Divisi|
|----|------|----------|
|Muhammad Gian Yudha Prawira| ELC | Microcontroller|

# BAHASA C
Bahasa C adalah bahasa pemrograman yang dikembangkan oleh Dennis Ritchie pada awal 1970-an di Bell Labs.
Bahasa ini sangat populer dan digunakan secara luas dalam pengembangan perangkat lunak sistem dan aplikasi.

# TIPE DATA
## Tipe data menentukan ukuran dan jenis informasi yang akan disimpan oleh variabel.
    Contoh :
    > int (integer), size : 2 or 4 bytes, exp :  2 
    > float, size : 4 bytes, exp : 2.89 (dapat menampung 6-7 digit desimal)
    > double, size : 8 bytes, exp : 1.99 (dapat menanmpung 15 digit desimal)
    > char, size : 1 bytes, exp : 'B'

## Yang memiliki format specifier
    > %d or %i untuk int
    > %u untuk integer unsigned (tidak memiliki value negatif)
    > %f untuk float
    > %lf, %ld, %lu untuk double
    > %c untuk char
    > %s untuk string
### Size of memory dalam tipe data sangat berguna dalam kasus tertentu terutama yang melibatkan penggunaan memori dalam jumlah terbatas. 

## Konversi Bilangan:
    Representasi bilangan dalam basis 2, 8, 10, dan 16.
    > 1001 (basis 2) = 11 (basis 8) = 9 (basis 10) = 9 (basis 16) F (basis 16) = 1111 (basis 2) = 15 (basis 10)
## Pengaplikasiannya :
    //Membuat variabel dengan berbagai tipe data
    int jumlah_barang = 50;
    float harga_per_barang = 9.99;
    float total_harga = jumlah_barang * harga_per_barang;
    char mata_uang = '$';

    //Mencetak variabel
    printf("Jumlah barang: %d\n", jumlah_barang);
    printf("Harga per barang: %.2f %c\n", harga_per_barang, mata_uang);
    printf("Total harga = %.2f %c\n", total_harga, mata_uang);


# Array di C:
    > Array adalah kumpulan data dengan tipe yang sama
    > Deklarasi: data_type array_name[length]
    > Indeks dimulai dari 0
    > Array multidimensi dideklarasikan seperti: int arr[baris][kolom]
    > Ukuran array bisa didapat dengan sizeof(array)/sizeof(array[0])
## Pengaplikasian
    int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};
    float avg, sum = 0;
    int i;

    int length = sizeof(ages) / sizeof(ages[0]);

    for (i = 0; i < length; i++) {
      sum += ages[i];
     }

    avg = sum / length;

    printf("The average age is: %.2f", avg);

# Loop (Perulangan):
    > For loop: Digunakan ketika jumlah iterasi diketahui
         for(inisialisasi; kondisi; update) {
        // kode
       }

    > While loop: Dijalankan selama kondisi true
         while(kondisi) {
        // kode
       }

    > Do-while: Minimal dijalankan sekali
         do {
       // kode
       } while(kondisi);

## Pengaplikasian
    int countdown = 3;
    while (countdown > 0) {
       printf("%d\n", countdown);
    countdown--;
     }
    printf("Happy New Year!!\n");



# Function (Fungsi):
  ## Fungsi dapat mengembalikan nilai (dengan return) atau void
    > Struktur dasar:
      tipe_data nama_fungsi(parameter) {
          // kode
      return nilai;
      } 
    //Parameter bisa kosong atau lebih dari satu

## Pengaplikasian:
    // Variabel global x
    int x = 5;
    void myfunc() {
    // Kita bisa menggunakan x di sini
    printf("%d", x);
    }
    int main() {
       myfunc();

    // Kita juga bisa menggunakan x di sini
    printf("%d", x);
    return 0;
    }


# If-Else & Switch:
    > Operator perbandingan: ==, !=, <, <=, >, >=
    > Operator logika: && (AND), || (OR), ! (NOT)
    > If-else struktur:
      if(kondisi) {
        // kode
      } else if(kondisi2) {
      // kode
      } else {
      // kode
      }
    //Switch case untuk multiple kondisi dengan nilai tetap
## Pengaplikasian
    int kodePintu = 1337;

    if (kodePintu == 1337) {
     printf("Kode benar.\nPintu sekarang terbuka.");
    } else {
    printf("Kode salah.\nPintu tetap tertutup.");
    }

# Operator:
    > Aritmatika: +, -, *, /, % (modulus)
    > Increment/decrement:
    > ++a (pre-increment): tambah dulu, pakai nilai
    > a++ (post-increment): pakai nilai, tambah kemudian
    > Assignment: =, +=, -=, *=, /=, %=
## Contoh
    int sum1 = 100 + 50;        // 150 (100 + 50)
    int sum2 = sum1 + 250;      // 400 (150 + 250)
    int sum3 = sum2 + sum2;     // 800 (400 + 400)

# Yang belum dipahami : Terkait materi fungsi 


















|Nama|Divisi|Sub-Divisi|
|----|------|----------|
|Muhammad Gian Yudha Prawira| ELC | Microcontroller|
# BOOST CONVERTER
Boost converter adalah perangkat elektronika daya yang berfungsi untuk menaikkan tegangan DC (Direct Current) ke level yang lebih tinggi. Perangkat ini termasuk dalam kategori DC-DC converter yang mengubah tegangan masukan DC menjadi tegangan keluaran DC yang lebih besar. Boost converter umumnya digunakan oleh teknisi, insinyur, dan industri yang membutuhkan peningkatan tegangan DC. Perangkat ini juga dimanfaatkan oleh pengguna umum dalam berbagai aplikasi elektronik sehari-hari. Boost converter dapat ditemukan dalam berbagai peralatan elektronik seperti laptop, smartphone, panel surya, sistem pencahayaan LED, dan kendaraan listrik. Perangkat ini juga banyak digunakan di laboratorium elektronika dan lingkungan industri. Boost converter digunakan ketika diperlukan peningkatan tegangan DC, terutama saat tegangan sumber lebih rendah dari tegangan yang dibutuhkan beban. Boost converter diperlukan karena beberapa alasan seperti menyesuaikan level tegangan dari sumber dengan kebutuhan beban, untuk mengoptimalkan efisiensi transfer, untuk memaksimalkan penggunaan sumber daya dengan tegangan rendah, dan lain sebagainya. Boost converter bekerja dengan prinsip switching dan penyimpanan energi. Prosesnya melibatkan beberapa komponen utama seperti induktor, kapasitor, dioda, dan switch (biasanya MOSFET). Saat switch ON, arus mengalir melalui induktor dan menyimpan energi dalam bentuk medan magnet. Ketika switch OFF, energi yang tersimpan dalam induktor dilepaskan ke beban bersama dengan tegangan sumber, menghasilkan tegangan keluaran yang lebih tinggi.
## SCHEMATIC BOOST CONVERTER
![WhatsApp Image 2024-11-29 at 03 13 18_0f5a33bd](https://github.com/user-attachments/assets/d49b9ce8-fcf4-4861-b15d-9012530ff3df)
### Cara Kerja Boost Converter
    1. Ketika switch pada VSW on, Arus akan mengalir melewati Induktor, Akibatnya induktor menyimpan Energi berupa medan magnet yang polaritasnya + ke -.
    2. Ketika switch pada VSW off, Arus akan terputus dan menyebabkan Energi pada Induktor mengalami fase discharge sehingga polaritasnya berbalik jadi - ke positif.
    3. Tegangan total pada node 4 menjadi Vtotal = Vin + Vinduktor. (Besarnya Vtotal juga dipengaruhi oleh rangkaian feedback)
    4. Saat arus mengalir dan di tampung pada Kapasitor C3, diharapkan Arus dibuang ke Vout atau beban sehingga diberikanlah Dioda pada rangkaian tersebut. Karena jika tidak arus akan mengarah kembali ke switch ketika dalam keadaan on dan akan mengarah ke Ground.
    5. Perubahan tegangan Vin ke Vout dengan Vin >= Vout membuat dinamakan step up.
### Langkah-langkah pembuatan schematic hingga printing
Cari referensi mengenai alur dari boost converter di internet atau lainnya. Baca datasheet terhadap komponen yang digunkan. Download software untuk membuat schematic seperti KiCad. Download bahan (Symbol, Footprint, dan 3D Model) dari komponen yang digunakan pada website Snapeda.com serta pastikan download dengan versi yang sesuai dengan sofftware yang digunakan. Tambahkan bahan pada Library, Assign footprint, dan lainnya agar dapat menampilkan komponen yang diiginkan. Mulai desain alur boost converter dan sesuaikan nilai dari masing-masing elemen (agar terlihat tertata beri plot pada menu rectangle). Setelah selesai masuk ke menu PCB Editor dan tekan Update PCB from Schematic. Untuk mengkofigurasi, bisa pilih menu Board SetUp. Mulai Routing dengan memperhatikan hal berikut : 1. Letakkan komponen yang paling banyak terhubung di tengah-tengah layout, 2. Sebisa mungkin untuk menggunakan jalur terpendek, 3. Letakkan komponen yang sejenis pada satu wilayah, 4. Gunakan sudut yang tidak terlalu tajam pada jalur. Setelah routing selesai bisa di check apakah ada warning atau error pada pcb di menu Design Rule Checker dan Update PCB from Schematics dan coba selesaikan sehingga tidak ada warning maupun Error. Jangan lupa untuk mengcek apakah ada komponen yang ketika dalam menu 3D Viewer memiliki arah yang kurang benar dengan mengklik komponen dan pilih Properties. Jika sudah selesai maka lakukan Print dengan menekan CTRL + P dan lakukan konfigurasi untuk Print bagian depan atau Blekang PCB (Untuk belakang jangan lupa lakukan mirroring).
![image](https://github.com/user-attachments/assets/0f4d211c-2ed3-4b97-a298-43f6abb809db)

## PCB BOOST CONVERTER
![WhatsApp Image 2024-11-29 at 04 10 10_7e0c1b47](https://github.com/user-attachments/assets/9bba6d67-8231-4b0a-b4b8-b10db21b2472)
## 3D VIEWER
![WhatsApp Image 2024-11-29 at 04 10 40_b58df6dc](https://github.com/user-attachments/assets/81b0efbc-adf8-4529-bea5-2290c783e21d)




