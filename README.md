# PENGENALAN GIT DAN GITHUB
|Nama|Divisi|Sub-Divisi|
|----|------|----------|
|Muhammad Gian Yudha Prawira| ELC | Microcontroller|

## Cara Menggunakan Git dan Github
### 1. Unduh dan pasang Git pada PC/Laptop
    https://git-scm.com/downloads
![WhatsApp Image 2024-11-22 at 16 19 20_f1b47bc9](https://github.com/user-attachments/assets/68f92b5a-44b5-4429-b148-b7e03d68d819)
### 2. Buat Akun Github
    https://github.com/join
![WhatsApp Image 2024-11-22 at 16 25 20_5d9fb2cf](https://github.com/user-attachments/assets/2729827c-b0ae-422b-a4e4-b86069cccec3)
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
![WhatsApp Image 2024-11-22 at 16 27 07_ca54a307](https://github.com/user-attachments/assets/a5b9310b-e0b3-48ff-b122-1753119886c8)
### 2. Isikan Nama Repositori yang Diinginkan Lalu Pilih "Public" Setelah Itu Pilih "Create Repository"
    Lakukan centang pada "Add a README file"
![WhatsApp Image 2024-11-22 at 16 32 38_9353a73f](https://github.com/user-attachments/assets/5a1ec751-a1c5-4fb1-abea-aa8e3461d074)
### 3. Pilih Menu "Code" Lalu Pilih "SSH" Setelah Itu Salin Link SSH
    Contoh Link : git@github.com:(namapengguna)/(namarepositori).git
![image](https://github.com/user-attachments/assets/6f19f36a-4ff3-4c47-9fdf-e95fae38ca09)

## Push File dari Lokal ke Github
### 1. Buat Folder dengan Nama yang Sama dengan Nama Repositori lalu Buka Folder yang telah dibuat
![WhatsApp Image 2024-11-22 at 13 50 00_0656633c](https://github.com/user-attachments/assets/d43b4aa9-efca-49d8-91c4-30d74a50ae71)
### 2. Buat File Baru untuk Diunggah ke Github
![image](https://github.com/user-attachments/assets/1d85792f-ccee-4c9d-b486-59e729a90d49)
### 3. Klik Kanan pada Mouse Lalu Pilih "Open Git Bash here"
![image](https://github.com/user-attachments/assets/1067f6b0-e158-46f1-a6d1-db174eca6205)
### 4. Lalu Masukkan Command Berikut pada Git Bash
    git init
   	git remote add origin (link SSH yang telah di salin)
   	git branch -M main
    (Untuk memastikan folder lokal sama dengan folder di github maka ketik : git pull origin (branch yang ingin didownload))
![image](https://github.com/user-attachments/assets/c7a4e643-344b-459f-b353-fd304388d809)
### 5. Untuk Mengunggah File pada Folder Lokal, Masukkan Command Berikut pada Git Bash
    git add .
    git commit -m "(deskripsi bebas)"
    git push origin (branch yang akan ingin diunggah)
![image](https://github.com/user-attachments/assets/68ea33da-265f-4fe8-b76d-07174c5eff37)

## Membuat Branch Baru Menggunakan Git 
### 1. Buka Git Bash pada File yang Terhubung dengan Repositori
### 2. Masukkan Command Berikut Pada Git Bash
    git branch (nama-branch-baru)
![image](https://github.com/user-attachments/assets/bf4baeb8-29fc-4b17-bac4-acbd6f96978a)
### 3. Masukkan Command Berikut untuk Pindah ke Branch Baru
    git checkout (nama-branch-baru)
![image](https://github.com/user-attachments/assets/f0a50047-a6dc-43d6-aabd-b874fdda491e)

## Menghapus Branch Menggunakan Git
### 1. Lakukan Pindah Branch dengan Command Berikut
    git checkout (nama branch yang diinginkan)
### 2. Hapus Branch yang Diinginkan dengan Command Berikut
    git branch -d (nama branch yang ingin dihapus)
![image](https://github.com/user-attachments/assets/abf481e3-c727-4faf-8970-e6e87fd0d8d7)

## Menggabungkan Brench
### 1. Pindah ke branch yang ingin digabung:
    git checkout (nama branch)
### 2. Gabungkan branch lain ke branch saat ini:
    git merge nama-branch-lain

## Kloning Repositori
### 1. Masuk ke Git Bash pada Folder yang diinginkan
### 2. Masukkan Command Berikut:
    git clone https://github.com/(namapengguna)/(namarepositori).git
![image](https://github.com/user-attachments/assets/b0352687-0408-4829-8bb3-1351d3f93c09)


## Melihat riwayat Commit
### 1. Masuk ke Git Bash pada Folder yang diinginkan
### 2. Untuk melihat riwayat commit dalam repository:
    git log
![image](https://github.com/user-attachments/assets/bb59eb5c-2159-402d-83ee-d5703546607a)

    
