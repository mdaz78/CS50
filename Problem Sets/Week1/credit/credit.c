// url -> https://docs.cs50.net/2018/x/psets/1/credit/credit.html
#include <cs50.h>
#include <stdio.h>

int sum_up_every_second_digit(long long int cc_number);

int main(void) {
  long long int cc_number;
  do
  {
    cc_number = get_long_long("Number: ");
  }
  while(cc_number < 0);

  int sum = sum_up_every_second_digit(cc_number);
  printf("%i\n", sum);
}


// code for summing up every second digit
int sum_up_every_second_digit(long long int temp_cc_number) {
  int sum = 0;
  while(temp_cc_number / 10 != 0)
  {
    int temp_sum = 0;
    int pair = temp_cc_number % 100;
    int second_digit_from_pair = pair / 10;
    int second_digit_from_pair_times_two = second_digit_from_pair * 2;
    if (second_digit_from_pair_times_two > 10) {
      int first_no = second_digit_from_pair_times_two % 10;
      int second_no = second_digit_from_pair_times_two / 10;
      temp_sum = first_no + second_no;
    } else {
      temp_sum = second_digit_from_pair_times_two;
    }
    temp_cc_number = temp_cc_number / 100;
    sum += temp_sum;
  }
  return sum;
}


