// exercises_all_in_one.cpp
// One-file starter pack: 20 C++ I/O & expressions exercises.
// Usage:
//   g++ -std=c++17 -O2 -pipe -Wall -Wextra -pedantic exercises_all_in_one.cpp -o exercises
//   ./exercises 7      # runs task 7
//   ./exercises --list # prints brief task specs
//
// Each task reads from stdin and writes to stdout EXACTLY as specified.
// Fill in the // TODO parts. Do not add extra prompts.

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <sstream>

using namespace std;

// --- Utility: list specs (concise, single line each) ---
void list_specs() {
    const vector<string> specs = {
        "1) ECHO — Input: one line; Output: \"You said: <line>\"",
        "2) Sum of two integers — Input: a b (int); Output: a+b=<sum>",
        "3) Average of three numbers — Input: three doubles; Output: avg (2 decimals)",
        "4) Celsius -> Fahrenheit — Input: C (double); Output: F=<value> (2 decimals)",
        "5) Rectangle O & S — Input: a b (double); Output: O=<...> S=<...> (2 decimals)",
        "6) Seconds->HH:MM:SS — Input: n (0<=n<86400); Output: zero-padded HH:MM:SS",
        "7) Swap variables — Input: a b (int); Output: a=<after> b=<after>",
        "8) Division & remainder — Input: a b (int, b>0); Output: q=<a/b> r=<a%b>",
        "9) Real average from ints — Input: a b (int); Output: average (1 decimal)",
        "10) Expression precedence — Input: x y z (int); Output: x + y*z - (x % z)",
        "11) Round to 2 decimals — Input: x (double); Output: rounded to 2 decimals",
        "12) Weighted average — Input: x w1 y w2 (double); Output: (3 decimals)",
        "13) Line y=kx+q — Input: x1 y1 x2 y2 (double, x1!=x2); Output: k= q= (2 decimals)",
        "14) Unit price — Input: price (double) pieces (int>0); Output: 4 decimals",
        "15) Coin change (EUR) — Input: cents (int>=0); Output: counts 2€,1€,50c,20c,10c,5c,2c,1c",
        "16) Fixed vs scientific — Input: x (double); Output: fixed(6) then scientific",
        "17) Multiplication table — Input: n (1..12); Output: aligned n×n grid",
        "18) Name & age — Input: <line name> then age (int); Output: Hello, <name> (<age>)",
        "19) Midpoint — Input: x1 y1 x2 y2 (double); Output: [mx, my] (2 decimals)",
        "20) BMI metric — Input: height_m weight_kg; Output: BMI (2 decimals)"
    };
    for (const auto& s : specs) cout << s << '\n';
}

// --- Tasks: skeletons with exact I/O contracts ---

void task01_echo() {
    // ECHO
    // Input: one line of text
    // Output: "You said: <line>\n"
    string line;
    // TODO: read whole line into `line` (use std::getline)
    // TODO: print: You said: <line>\n
}

void task02_sum_two_integers() {
    // Sum of two integers
    // Input: a b (integers)
    // Output: a+b=<sum>\n
    long long a, b;
    // TODO: read a and b
    // TODO: print "a+b=" << (a+b) << '\n'
}

void task03_average_of_three() {
    // Average of three numbers
    // Input: three doubles
    // Output: average with 2 decimals (fixed)
    double a, b, c;
    // TODO: read
    // TODO: compute avg and print with fixed << setprecision(2)
}

void task04_celsius_to_fahrenheit() {
    // Celsius -> Fahrenheit
    // Input: C (double)
    // Output: F=<value> with 2 decimals
    double C;
    // TODO: read C
    // double F = 9.0/5 * C + 32;
    // TODO: print "F=" << fixed << setprecision(2) << F << '\n'
}

void task05_rectangle_perimeter_area() {
    // Rectangle perimeter and area
    // Input: a b (double)
    // Output: O=<perimeter> S=<area> (2 decimals), same line
    double a, b;
    // TODO
}

void task06_seconds_to_hhmmss() {
    // Seconds to HH:MM:SS (00..23:59:59)
    // Input: n (0 <= n < 86400)
    // Output: HH:MM:SS with leading zeros
    int n;
    // TODO: read n
    // int h = n/3600, m = (n%3600)/60, s = n%60;
    // cout << setw(2) << setfill('0') << h << ":" << setw(2) << m << ":" << setw(2) << s << '\n';
}

void task07_swap_variables() {
    // Swap two variables
    // Input: a b (int)
    // Output: a=<after> b=<after>\n
    int a, b;
    // TODO: read a, b
    // TODO: swap using a temp; no arithmetic tricks
    // TODO: print spec
}

void task08_division_and_remainder() {
    // Integer division and remainder
    // Input: a b (positive ints, b>0)
    // Output: q=<a/b> r=<a%b>\n
    int a, b;
    // TODO
    // Beware: integer division truncates; don't use double for q.
}

void task09_real_average_from_ints() {
    // Real average from ints
    // Input: a b (int)
    // Output: average with 1 decimal
    int a, b;
    // TODO: read
    // double avg = (static_cast<double>(a) + b) / 2.0;
    // cout << fixed << setprecision(1) << avg << '\n';
}

void task10_expression_precedence() {
    // Expression with precedence
    // Input: x y z (int)
    // Compute: x + y * z - (x % z)
    // Output: result as integer + '\n'
    int x, y, z;
    // TODO
}

void task11_round_to_two_decimals() {
    // Round to 2 decimals (mathematical rounding)
    // Input: x (double)
    // Output: value rounded to 2 decimals
    double x;
    // TODO: read x
    // double y = std::round(x * 100.0) / 100.0;
    // cout << fixed << setprecision(2) << y << '\n';
}

void task12_weighted_average() {
    // Weighted average
    // Input: x w1 y w2 (all doubles; assume w1+w2 != 0)
    // Output: result with 3 decimals
    double x, w1, y, w2;
    // TODO
}

void task13_line_equation() {
    // Line equation y = kx + q from two points (x1,y1), (x2,y2), assume x1 != x2
    // Input: x1 y1 x2 y2 (double)
    // Output: k=<...> q=<...> (2 decimals)
    double x1, y1, x2, y2;
    // TODO: read
    // double k = (y2 - y1) / (x2 - x1);
    // double q = y1 - k * x1;
    // cout << fixed << setprecision(2) << "k=" << k << " q=" << q << '\n';
}

void task14_unit_price() {
    // Unit price
    // Input: price (double) pieces (int>0)
    // Output: price_per_piece with 4 decimals
    double price; int pieces;
    // TODO
    // double unit = price / static_cast<double>(pieces);
    // cout << fixed << setprecision(4) << unit << '\n';
}

void task15_coin_change_greedy() {
    // Coin change (EUR): 2€, 1€, 50c, 20c, 10c, 5c, 2c, 1c
    // Input: amount in cents (int >= 0)
    // Output: single line:
    // 2€:<n2> 1€:<n1> 50c:<n50> 20c:<n20> 10c:<n10> 5c:<n5> 2c:<n2c> 1c:<n1c>\n
    int cents;
    // TODO: read cents
    // TODO: compute greedy counts using / and % in descending order
    // TODO: print exactly in the specified format
}

void task16_fixed_vs_scientific() {
    // Fixed vs scientific
    // Input: x (double)
    // Output (two lines):
    // <x in fixed with 6 decimals>\n
    // <x in scientific>\n
    double x;
    // TODO: read x
    // cout << fixed << setprecision(6) << x << '\n';
    // cout << scientific << x << '\n';
}

void task17_multiplication_table() {
    // Multiplication table (1..n)
    // Input: n (1..12)
    // Output: n x n grid, columns aligned to width of (n*n)
    int n;
    // TODO: read n
    // int width = static_cast<int>(to_string(n * n).size());
    // for i=1..n: for j=1..n: print setw(width) << i*j, with spaces; newline per row
}

void task18_name_and_age() {
    // Read name (with spaces) and age
    // Input: <line with name> then age (int)
    // Output: Hello, <name> (<age>)\n
    string name; int age;
    // TODO: read full line for name using std::getline
    // TODO: read age (from next token/line)
    // cout << "Hello, " << name << " (" << age << ")\n";
}

void task19_midpoint() {
    // Midpoint of two coordinates
    // Input: x1 y1 x2 y2 (double)
    // Output: [mx, my] with 2 decimals, exactly like: [12.34, 56.78]\n
    double x1, y1, x2, y2;
    // TODO
    // double mx = (x1 + x2) / 2.0;
    // double my = (y1 + y2) / 2.0;
    // cout << fixed << setprecision(2) << "[" << mx << ", " << my << "]\n";
}

void task20_bmi_metric() {
    // BMI (metric)
    // Input: height_m (double) weight_kg (double)
    // Output: BMI with 2 decimals (no categorization)
    double h, w;
    // TODO: read h, w
    // double bmi = w / (h*h);
    // cout << fixed << setprecision(2) << bmi << '\n';
}

// --- Dispatcher ---
int main(int argc, char** argv) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    if (argc < 2) {
        // No chatter; minimal guidance to keep judge-friendly behavior.
        // Print list to stderr to avoid polluting expected stdout for tasks.
        cerr << "Usage: " << argv[0] << " <task-number 1-20> | --list\n";
        return 1;
    }
    string arg = argv[1];
    if (arg == "--list") {
        list_specs();
        return 0;
    }
    // Parse integer task id
    char* endptr = nullptr;
    long id = strtol(arg.c_str(), &endptr, 10);
    if (*endptr != '\0' || id < 1 || id > 20) {
        cerr << "Invalid task id. Use 1..20 or --list.\n";
        return 2;
    }

    switch (id) {
        case 1:  task01_echo(); break;
        case 2:  task02_sum_two_integers(); break;
        case 3:  task03_average_of_three(); break;
        case 4:  task04_celsius_to_fahrenheit(); break;
        case 5:  task05_rectangle_perimeter_area(); break;
        case 6:  task06_seconds_to_hhmmss(); break;
        case 7:  task07_swap_variables(); break;
        case 8:  task08_division_and_remainder(); break;
        case 9:  task09_real_average_from_ints(); break;
        case 10: task10_expression_precedence(); break;
        case 11: task11_round_to_two_decimals(); break;
        case 12: task12_weighted_average(); break;
        case 13: task13_line_equation(); break;
        case 14: task14_unit_price(); break;
        case 15: task15_coin_change_greedy(); break;
        case 16: task16_fixed_vs_scientific(); break;
        case 17: task17_multiplication_table(); break;
        case 18: task18_name_and_age(); break;
        case 19: task19_midpoint(); break;
        case 20: task20_bmi_metric(); break;
        default: return 3;
    }
    return 0;
}
