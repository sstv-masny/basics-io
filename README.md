## Usage

- **Input:** only from `stdin`.  
- **Output:** only to `stdout` (no interactive prompts).  
- **Formatting:** use `std::fixed`, `std::setprecision`, `std::setw`, `std::setfill` exactly where specified.  
- **Strings:** when spaces are possible, read with `std::getline`.  
- **Locale:** assume `.` as decimal separator.

---

## Task Contracts (EN + SK)   

> Implementations are stubs `taskXX_*()` inside `basics.cpp`. Keep output format **exact**.

1) **ECHO**  
   - **EN:** Input: one line. Output: `You saidc: <line>`  
   - **SK:** Vstup: jeden riadok. Výstup: `You said: <riadok>`

2) **Sum of two integers / Súčet dvoch čísel**  
   - **EN:** Input: `a b` (int). Output: `a+b=<sum>`  
   - **SK:** Vstup: `a b` (int). Výstup: `a+b=<súčet>`

3) **Average of three numbers / Priemer troch čísel**  
   - **EN:** Input: three `double`. Output: average with **2 decimals**.  
   - **SK:** Vstup: tri `double`. Výstup: priemer s **2 des. miestami**.

4) **Celsius → Fahrenheit**  
   - **EN:** Input: `C` (double). Output: `F=<value>` (2 decimals). Formula `9.0/5*C+32`.  
   - **SK:** Vstup: `C` (double). Výstup: `F=<hodnota>` (2 des.).

5) **Rectangle perimeter & area / Obvod a obsah**  
   - **EN:** Input: `a b` (double). Output: `O=<perim> S=<area>` (2 decimals).  
   - **SK:** Vstup: `a b` (double). Výstup: `O=<obvod> S=<obsah>` (2 des.).

6) **Seconds → HH:MM:SS**  
   - **EN:** Input: `n` (0 ≤ n < 86400). Output: zero-padded `HH:MM:SS`.  
   - **SK:** Vstup: `n` (0 ≤ n < 86400). Výstup: `HH:MM:SS` s nulami vľavo.

7) **Swap variables / Zámena premenných**  
   - **EN:** Input: `a b` (int). Output: `a=<after> b=<after>`.  
   - **SK:** Vstup: `a b` (int). Výstup: `a=<po> b=<po>`.

8) **Integer division & remainder / Celočíselné delenie a zvyšok**  
   - **EN:** Input: `a b` (b>0). Output: `q=<a/b> r=<a%b>`.  
   - **SK:** Vstup: `a b` (b>0). Výstup: `q=<a/b> r=<a%b>`.

9) **Real average from ints / Reálny priemer z int**  
   - **EN:** Input: `a b` (int). Output: average with **1 decimal**.  
   - **SK:** Vstup: `a b` (int). Výstup: priemer s **1 des. miestom**.

10) **Expression precedence / Precedencia výrazu**  
   - **EN:** Input: `x y z` (int). Output: value of `x + y*z - (x % z)`.  
   - **SK:** Vstup: `x y z` (int). Výstup: hodnota `x + y*z - (x % z)`.

11) **Round to 2 decimals / Zaokrúhlenie na 2 des.**  
   - **EN:** Input: `x` (double). Output: `round(x*100)/100` (2 decimals).  
   - **SK:** Vstup: `x` (double). Výstup: `round(x*100)/100` (2 des.).

12) **Weighted average / Vážený priemer**  
   - **EN:** Input: `x w1 y w2` (double). Output: **3 decimals**.  
   - **SK:** Vstup: `x w1 y w2` (double). Výstup: **3 des. miesta**.

13) **Line equation / Rovnica priamky**  
   - **EN:** Input: `x1 y1 x2 y2` (`x1!=x2`). Output: `k=<..> q=<..>` (2 decimals).  
   - **SK:** Vstup: `x1 y1 x2 y2` (`x1!=x2`). Výstup: `k=<..> q=<..>` (2 des.).

14) **Unit price / Jednotková cena**  
   - **EN:** Input: `price` (double) `pieces` (int>0). Output: **4 decimals**.  
   - **SK:** Vstup: `cena` (double) `kusy` (int>0). Výstup: **4 des. miesta**.

15) **Coin change (EUR) / Rozklad na mince (EUR)**  
   - **EN:** Input: cents (int≥0). One line:  
     `2€:<n2> 1€:<n1> 50c:<n50> 20c:<n20> 10c:<n10> 5c:<n5> 2c:<n2c> 1c:<n1c>`  
   - **SK:** Vstup: centy (int≥0). Jeden riadok v rovnakom formáte.

16) **Fixed vs scientific / Fixné vs vedecké**  
   - **EN:** Input: `x` (double). Two lines: `fixed(6)` then `scientific`.  
   - **SK:** Vstup: `x` (double). Dva riadky: `fixed(6)` a potom `scientific`.

17) **Multiplication table / Násobilka**  
   - **EN:** Input: `n` (1..12). Output: aligned `n×n` grid; column width = width of `n*n`.  
   - **SK:** Vstup: `n` (1..12). Výstup: zarovnaná `n×n` tabuľka; šírka stĺpca = šírka `n*n`.

18) **Name & age / Meno a vek**  
   - **EN:** Input: `<line with name>`, then `age` (int). Output: `Hello, <name> (<age>)`.  
   - **SK:** Vstup: `<riadok s menom>`, potom `vek` (int). Výstup: `Hello, <name> (<age>)`.

19) **Midpoint / Súradnicový stred**  
   - **EN:** Input: `x1 y1 x2 y2` (double). Output: `[mx, my]` (2 decimals).  
   - **SK:** Vstup: `x1 y1 x2 y2` (double). Výstup: `[mx, my]` (2 des.).

20) **BMI (metric)**  
   - **EN:** Input: `height_m` `weight_kg` (double). Output: BMI with **2 decimals**.  
   - **SK:** Vstup: `výška_m` `hmotnosť_kg` (double). Výstup: BMI s **2 des. miestami**.

---

## Examples

```
# Task 2
IN : 7 5
OUT: a+b=12

# Task 6
IN : 3723
OUT: 01:02:03

# Task 11
IN : 2.345
OUT: 2.35

# Task 15
IN : 287
OUT: 2€:1 1€:0 50c:1 20c:1 10c:1 5c:1 2c:1 1c:0
```

---