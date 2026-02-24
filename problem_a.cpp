#include "problem_a.hpp"
#include <iostream>

bool is_substr(std::string text, std::string substr)
{
    int textLength = text.length();
    int substrLength = substr.length();
    if (substrLength == 0){
        return true;
    }    

    if (substrLength > textLength){
        return false;
    }

    int pos = 0;
    for (int i = 0; i < textLength; i++){
        if (text[i] == substr[pos]){
            pos++;
            if (pos == substrLength){
                return true;
            }
        }
        else {
            pos = 0;
        }
    }
    return false;
}

unsigned int combinatorial (unsigned int n, unsigned int r){
    unsigned int result = 1;

    if (r > n){
        return 0;
    }

    if (r > n-r){
        r = n-r;
    }

    for (unsigned i=1; i<=r; i++){
        result *= (n-r+i);
        result /=i;
    }

    return result;
}

void inplace_sort(size_t n, int arr[]){
    int temp;
    for (size_t i = 0; i<n; i++){
        for (size_t j = 0; j < n-i-1; j++){
            if (arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void inplace_reverse_str(std::string &str){
    int left = 0;
    int right = str.length()-1;

    while (left < right){
        char temp = str[left];
        str[left] = str [right];
        str[right] = temp;

        left++;
        right--;
    }
}

bool is_subset(const int arr[], int sub[], const int arr_size, const int sub_size){
    if (sub[sub_size] <= 0){
        return true;
    }

    if (sub_size > arr_size){
        return false;
    }

    int pos = 0;
    for (int i = 0; i < arr_size; i++){
        if (arr[i] == sub[pos]){
            pos++;
            if (pos == sub_size){
                return true;
            }
        }
        else {
            pos = 0;
        }
    }
    return false;
}
