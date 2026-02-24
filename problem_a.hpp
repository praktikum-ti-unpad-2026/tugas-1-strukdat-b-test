#pragma once

#include <string>

/**
 * @brief Definisi struct untuk menyimpan data mahasiswa
 * @note
 * Struct ini digunakan untuk menyimpan informasi dasar mahasiswa,
 * yaitu nama, NIM, dan IPK.
 * @example
 *    Mahasiswa mhs = {"Alice", "123456", 3.75};
 *    std::cout << mhs.nama; // Alice
 */
struct Mahasiswa{ // UBAH ISI STRUCT INI SAJA
    std::string nama;
    std::string nim;
    double ipk;
};

/**
 * @brief Cek apakah sebuah string merupakan substring dari sebuah text
 * @note
 * Misal:
 *    menteri => kementerian -> substring
 *    fajar => serangan -> bukan substring
 *    mineral => air -> bukan substring
 * @example
 *    is_substr("kementerian", "menteri"); // true
 *    is_substr("perpustakaan", "mandi") // false
 *
 * @param text     kata utuh
 * @param substr   string yang akan dipakai untuk cek substring dari kata
 * @return    apakah string merupakan substring dari teks atau tidak
 */
bool is_substr(std::string text, std::string substr);

/**
 * @brief Menghitung kombinatorial dari dua buah bilangan bulat positif.
 * @note
 * Misal:
 *    C(5, 3) == 10 
 *    C(10, 5) == 252
 * @example
 *    val1 = combinatorial(5, 3);
 *    // val1 == 10
 *    val2 = combinatorial(10, 5);
 *    // val2 == 252
 *
 * @param n   bilangan bulat positif 
 * @param r   bilangan bulat positif
 * @return    kombinatorial dari `n`
 */
unsigned int combinatorial(unsigned int n, unsigned int r);

/**
 * @brief Melakukan sort pada integer array secara ascending dan in-place.
 * @note
 * Misal:
 *    5, 2, 3, 1 -> 1, 2, 3, 5
 * @example
 *    arr = {5, 2, 3, 1};
 *    inplace_sort(4, arr)
 *    // val == {1, 2, 3, 5}
 *
 * @param n   ukuran array
 * @param arr array yang akan di-sort
 */
void inplace_sort(size_t n, int arr[]);

/**
 * @brief Membalik sebuah string secara in-place.
 * @note
 * Misal:
 *    "John Doe" -> "eoD nhoJ"
 *    "1234" -> "4321"
 * @example
 *    std::string s1 = "1234";
 *    inplace_reverse_str(s1);
 *    // s1 == "4321"
 *
 * @param str   string yang akan dibalik secara in-place
 */
void inplace_reverse_str(std::string &str);

/**
 * @brief Cek apakah sebuah array merupakan subset dari array 
 * @note
 * Misal:
 *    1, 2, 3 => 1, 2, 3, 4, 5 -> subset
 *    5, 6, 8 => 4, 5 -> bukan subset
 * @example
 *    arr = {2, 3, 4, 5}
 *    sub = {3, 4}
 *    val1 = is_subset(arr, sub)
 *    // val1 = true
 *
 * @param arr       array yang akan dicek
 * @param sub       array yang akan menjadi checker
 * @param arr_size  ukuran array
 * @param sub_size  ukuran sub_array
 * @return      apakah merupakan subset atau tidak
 */
bool is_subset(const int arr[], int sub[], const int arr_size, const int sub_size);
