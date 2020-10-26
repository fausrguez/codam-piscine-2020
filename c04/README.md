## Results

**50%**

ex00: OK | ex01: OK | ex02: OK | ex03: KO | ex04: KO | ex05: Nothing turned in

= ex03 =========================================================================
$> /usr/bin/norminette -R CheckForbiddenSourceHeader ft_atoi.c | grep -E '^(Error|Warning)'

$> gcc -Wextra -Wall -Werror main.c ft_atoi.c -o user_exe 

= Test 1 ===================================================
$> ./hehazi7ljzgxcrpx8h45i8w4
$> diff -U 3 user_output_test1 test1.output | cat -e
--- user_output_test1	2020-08-29 13:18:57.000000000 +0000$
+++ test1.output	2020-08-29 13:18:56.000000000 +0000$
@@ -17,27 +17,27 @@$
 1$
 1325632167$
 -1325632167$
--1325632167$
+0$
 1325632$
 175074925$
 -2147483648$
 -2147483647$
 0$
+0$
+0$
+0$
+0$
 2$
-8$
-6$
-8215$
-2$
-2$
-9$
+0$
+0$
 0$
 3$
-3$
+0$
 3$
 0$
-9$
-64$
-10$
+0$
+0$
+0$
 1$
-6$
+0$
 2$

Diff KO :(
Grade: 0

= ex04 =========================================================================
$> /usr/bin/norminette -R CheckForbiddenSourceHeader ft_putnbr_base.c | grep -E '^(Error|Warning)'

$> gcc -Wextra -Wall -Werror main.c ft_putnbr_base.c -o user_exe 

= Test 1 ===================================================
$> ./a8gbset26pndtowew612ory3
$> diff -U 3 user_output_test1 test1.output | cat -e
--- user_output_test1	2020-08-29 13:18:58.000000000 +0000$
+++ test1.output	2020-08-29 13:18:58.000000000 +0000$
@@ -1,11 +1,11 @@$
--$
+-5478773672$
 -2147483647$
 19999999999$
 ai$
 ag$
 -20$
 2A$
-$
+0$
 $
 $
 -101010$

Diff KO :(
Grade: 0

= ex05 =========================================================================
Nothing turned in
Grade: 0

= Final grade: 50 ==============================================================
