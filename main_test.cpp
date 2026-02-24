#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "problem_a.hpp"

TEST_CASE("apakah merupakan substring dari text", "[case_1]")
{
  REQUIRE(is_substr("informatika", "forma") == true);
  REQUIRE(is_substr("pembunuh", "mati") == false);
  REQUIRE(is_substr("beliung", "angin") == false);
  REQUIRE(is_substr("skoliosis", "kolio") == true);
  REQUIRE(is_substr("tumbuhan", "mbuh") == true);
  REQUIRE(is_substr("algoritma", "gotma") == false);
  REQUIRE(is_substr("pengembangan", "bang") == true);
  REQUIRE(is_substr("pemrograman", "ogram") == true);
}

TEST_CASE("hasil kombinatorial terhitung", "[case_2]")
{
  REQUIRE(combinatorial(15, 9) == 5005);
  REQUIRE(combinatorial(17, 12) == 6188);
  REQUIRE(combinatorial(20, 18) == 190);
  REQUIRE(combinatorial(19, 10) == 92378);
  REQUIRE(combinatorial(25, 15) == 3268760);
  REQUIRE(combinatorial(10, 5) == 252);
  REQUIRE(combinatorial(6, 2) == 15);
}

TEST_CASE("integer array di-sort ascending secara in-place", "[case_3]")
{
  int arr1[]{3, 5, 3, 2, 1};
  const int arr1_sorted[]{1, 2, 3, 3, 5};
  inplace_sort(5, arr1);
  for (size_t i = 0; i < 5; ++i)
  {
    REQUIRE(arr1[i] == arr1_sorted[i]);
  }

  int arr2[]{0, 0, -1, 0};
  const int arr2_sorted[]{-1, 0, 0, 0};
  inplace_sort(4, arr2);
  for (size_t i = 0; i < 4; ++i)
  {
    REQUIRE(arr2[i] == arr2_sorted[i]);
  }
}

TEST_CASE("string terbalik secara in-place", "[case_4]")
{
  std::string str;

  str = "John Doe";
  inplace_reverse_str(str);
  REQUIRE(str.compare("eoD nhoJ") == 0);

  str = "1234";
  inplace_reverse_str(str);
  REQUIRE(str.compare("4321") == 0);
}

TEST_CASE("apakah sebuah array merupakan subset", "[case_5]")
{
  int arr1[]{3, 4, 5, 6, 7};
  int sub1[]{4, 5, 6};
  REQUIRE(is_subset(arr1, sub1, 5, 3) == true);
}

TEST_CASE("Validasi struct Mahasiswa", "[case_6]")
{
  Mahasiswa mhs{"Alice", "123456", 3.75};
  REQUIRE(mhs.nama == "Alice");
  REQUIRE(mhs.nim == "123456");
  REQUIRE(mhs.ipk == Approx(3.75));
}

TEST_CASE("Input dan output struct Mahasiswa", "[case_7]")
{
  Mahasiswa data[3] = {
    {"Alice", "123456", 3.75},
    {"Bob", "654321", 3.40},
    {"Charlie", "987654", 3.90}
  };

  REQUIRE(data[0].nama == "Alice");
  REQUIRE(data[1].nim == "654321");
  REQUIRE(data[2].ipk == Approx(3.90));
}
