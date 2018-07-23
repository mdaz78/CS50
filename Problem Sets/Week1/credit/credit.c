#include <cs50.h>
#include <stdio.h>

int get_sum(long long int cc_number);
string get_company_name(long long int cc_number);

int main(void) {
  string result;
  long long int cc_number;
  do
  {
    cc_number = get_long_long("Number: ");
  }
  while(cc_number < 0);
  int sum = get_sum(cc_number);

  if (sum % 10 == 0) {
    result = get_company_name(cc_number);
  } else {
    result = "INVALID";
  }
  printf("%s\n", result);
}


// code for summing up every second digit
int get_sum(long long int temp_cc_number) {
  int sum = 0;
  int second_digits_sum = 0;
  int first_digits_sum = 0;
  while(temp_cc_number > 0 || temp_cc_number / 10 != 0)
  {
    int temp_sum = 0;
    int pair = temp_cc_number % 100;

    int first_digit_from_pair = pair / 10;
    int second_digit_from_pair = pair % 10;

    second_digits_sum += second_digit_from_pair;

    int first_digit_from_pair_times_two = first_digit_from_pair * 2;
    if (first_digit_from_pair_times_two > 10) {
      int first_no = first_digit_from_pair_times_two % 10;
      int second_no = first_digit_from_pair_times_two / 10;
      temp_sum = first_no + second_no;
    } else {
      temp_sum = first_digit_from_pair_times_two;
    }
    temp_cc_number = temp_cc_number / 100;
    first_digits_sum += temp_sum;
  }
  sum = first_digits_sum + second_digits_sum;
  return sum;
}

string get_company_name(long long int cc_number) {
  
}

