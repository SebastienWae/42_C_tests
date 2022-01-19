#include <string.h>
#include <stdio.h>

char *ft_strcapitalize(char *str);

int	main(void)
{
	char	test1[] = "SFP-ChB Py&^&IQW?@UY6(GM`A8=";
	char	test2[] = "L#YG:QJn5(FPrH6Gj-TXbkPF6Ei?>@O1";
	char	test3[] = "?#Xkv#Ad]&8[1[";
	char	test4[] = "C88o*FOc3(}RX!%FfvF4sU(Fs`KsSk4c(YqI";
	char	test5[] = "/ 'Uvd##M&";
	char	test6[] = "27qtv#LI9X+VWtjRbDX[(.0`F9mrBq,";
	char	test7[] = "NJ~DkkCe*B,GP6|EoLi@5";
	char	test8[] = "$T@^/3{DF";
	char	test9[] = "KeYW@_Gw(Kv@7TI C|Af";
	char	test10[] = "NULL";
	char	test11[] = "";
	char	test12[] = "ReKt17+LOl MdR Mdr 4242l42";

	ft_strcapitalize(test1);
	if(strcmp(test1, "Sfp-Chb Py&^&Iqw?@Uy6(Gm`A8="))
		return (1);

	ft_strcapitalize(test2);
	if(strcmp(test2, "L#Yg:Qjn5(Fprh6gj-Txbkpf6ei?>@O1"))
		return (1);

	ft_strcapitalize(test3);
	if(strcmp(test3, "?#Xkv#Ad]&8[1["))
		return (1);

	ft_strcapitalize(test4);
	if(strcmp(test4, "C88o*Foc3(}Rx!%Ffvf4su(Fs`Kssk4c(Yqi"))
		return (1);

	ft_strcapitalize(test5);
	if(strcmp(test5, "/ 'Uvd##M&"))
		return (1);

	ft_strcapitalize(test6);
	if(strcmp(test6, "27qtv#Li9x+Vwtjrbdx[(.0`F9mrbq,"))
		return (1);

	ft_strcapitalize(test7);
	if(strcmp(test7, "Nj~Dkkce*B,Gp6|Eoli@5"))
		return (1);

	ft_strcapitalize(test8);
	if(strcmp(test8, "$T@^/3{Df"))
		return (1);

	ft_strcapitalize(test9);
	if(strcmp(test9, "Keyw@_Gw(Kv@7ti C|Af"))
		return (1);

	ft_strcapitalize(test10);
	if(strcmp(test10, "Null"))
		return (1);

	ft_strcapitalize(test11);
	if(strcmp(test11, ""))
		return (1);

	ft_strcapitalize(test12);
	if(strcmp(test12, "Rekt17+Lol Mdr Mdr 4242l42"))
		return (1);

	return (0);
}
