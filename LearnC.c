/*
|Nama|Divisi|Sub-Divisi|
|Muhammad Gian Yudha Prawira| ELC | Microcontroller|
*/

//BAHASA C
/*
Bahasa C adalah bahasa pemrograman yang dikembangkan oleh Dennis Ritchie pada awal 1970-an di Bell Labs.
Bahasa ini sangat populer dan digunakan secara luas dalam pengembangan perangkat lunak sistem dan aplikasi.
*/



//TIPE DATA
/*
Tipe data menentukan ukuran dan jenis informasi yang akan disimpan oleh variabel.
Contoh :
> int (integer), size : 2 or 4 bytes, exp :  2 
> float, size : 4 bytes, exp : 2.89 (dapat menampung 6-7 digit desimal)
> double, size : 8 bytes, exp : 1.99 (dapat menanmpung 15 digit desimal)
> char, size : 1 bytes, exp : 'B'

Yang memiliki format specifier
> %d or %i untuk int
> %u untuk integer unsigned (tidak memiliki value negatif)
> %f untuk float
> %lf, %ld, %lu untuk double
> %c untuk char
> %s untuk string

Size of memory dalam tipe data sangat berguna dalam kasus tertentu terutama yang melibatkan penggunaan memori 
dalam jumlah terbatas. 

Konversi Bilangan:
Representasi bilangan dalam basis 2, 8, 10, dan 16.
> 1001 (basis 2) = 11 (basis 8) = 9 (basis 10) = 9 (basis 16) F (basis 16) = 1111 (basis 2) = 15 (basis 10)
*/

/*Pengaplikasiannya :
// Membuat variabel dengan berbagai tipe data
int jumlah_barang = 50;
float harga_per_barang = 9.99;
float total_harga = jumlah_barang * harga_per_barang;
char mata_uang = '$';



// Mencetak variabel
printf("Jumlah barang: %d\n", jumlah_barang);
printf("Harga per barang: %.2f %c\n", harga_per_barang, mata_uang);
printf("Total harga = %.2f %c\n", total_harga, mata_uang);
*/



//Array di C:
/*
> Array adalah kumpulan data dengan tipe yang sama
> Deklarasi: data_type array_name[length]
> Indeks dimulai dari 0
> Array multidimensi dideklarasikan seperti: int arr[baris][kolom]
> Ukuran array bisa didapat dengan sizeof(array)/sizeof(array[0])
*/
// Pengaplikasian
/*
int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};
float avg, sum = 0;
int i;

int length = sizeof(ages) / sizeof(ages[0]);

for (i = 0; i < length; i++) {
  sum += ages[i];
}

avg = sum / length;

printf("The average age is: %.2f", avg);
*/



//Loop (Perulangan):
/*
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
*/
//Pengaplikasian
/*
  int countdown = 3;
  while (countdown > 0) {
    printf("%d\n", countdown);
    countdown--;
  }
  printf("Happy New Year!!\n");
*/



//Function (Fungsi):
/*
> Fungsi dapat mengembalikan nilai (dengan return) atau void
> Struktur dasar:
  tipe_data nama_fungsi(parameter) {
      // kode
      return nilai;
  }
> Parameter bisa kosong atau lebih dari satu
*/
//Pengaplikasian:
/*
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
*/



//If-Else & Switch:
/*
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
> Switch case untuk multiple kondisi dengan nilai tetap
*/
/*
//Pengaplikasian
int kodePintu = 1337;

if (kodePintu == 1337) {
    printf("Kode benar.\nPintu sekarang terbuka.");
} else {
    printf("Kode salah.\nPintu tetap tertutup.");
}
*/



//Operator:
/*
> Aritmatika: +, -, *, /, % (modulus)
> Increment/decrement:
> ++a (pre-increment): tambah dulu, pakai nilai
> a++ (post-increment): pakai nilai, tambah kemudian
> Assignment: =, +=, -=, *=, /=, %=
*/
//Contoh
/*
int sum1 = 100 + 50;        // 150 (100 + 50)
int sum2 = sum1 + 250;      // 400 (150 + 250)
int sum3 = sum2 + sum2;     // 800 (400 + 400)
*/



// Yang belum dipahami : Terkait materi fungsi 





