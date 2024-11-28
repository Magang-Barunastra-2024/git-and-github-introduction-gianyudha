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
# SCHEMATIC BOOST CONVERTER
![WhatsApp Image 2024-11-29 at 03 13 18_0f5a33bd](https://github.com/user-attachments/assets/d49b9ce8-fcf4-4861-b15d-9012530ff3df)
# PCB BOOST CONVERTER
![WhatsApp Image 2024-11-29 at 04 10 10_7e0c1b47](https://github.com/user-attachments/assets/9bba6d67-8231-4b0a-b4b8-b10db21b2472)
# 3D VIEWER
![WhatsApp Image 2024-11-29 at 04 10 40_b58df6dc](https://github.com/user-attachments/assets/81b0efbc-adf8-4529-bea5-2290c783e21d)



