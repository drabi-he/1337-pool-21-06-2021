/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdrabi <hdrabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 11:29:18 by hdrabi            #+#    #+#             */
/*   Updated: 2021/07/05 19:24:44 by hdrabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_find_next_prime(int nb)
{
	int i;

	if (nb <= 2)
		return (2);
	if (nb % 2 == 0)
		nb++;
	i = 2;
	while (i <= nb / 2)
	{
		if (nb % i == 0)
		{
			i = 1;
			nb += 2;
		}
		i++;
	}
	return (nb);
}

int main()
{
	/**************************************/
	printf("%d -> %d\n", -375, ft_find_next_prime(-375));
	printf("%d -> %d\n", 0, ft_find_next_prime(0));
	printf("%d -> %d\n", 1, ft_find_next_prime(1));
	printf("%d -> %d\n", 2, ft_find_next_prime(2));
	printf("%d -> %d\n", 7853, ft_find_next_prime(7853));
	printf("%d -> %d\n", 78989, ft_find_next_prime(78989));
	printf("%d -> %d\n", 2147483643, ft_find_next_prime(2147483643));
	printf("%d -> %d\n", 2147483645, ft_find_next_prime(2147483645));
	printf("%d -> %d\n", 2147483646, ft_find_next_prime(2147483646));
	printf("%d -> %d\n", 2147483647, ft_find_next_prime(2147483647));
	printf("%d -> %d\n", 191490, ft_find_next_prime(191490));
	printf("%d -> %d\n", 240650, ft_find_next_prime(240650));
	printf("%d -> %d\n", 338957, ft_find_next_prime(338957));
	printf("%d -> %d\n", 388627, ft_find_next_prime(388627));
	printf("%d -> %d\n", 103445, ft_find_next_prime(103445));
	printf("%d -> %d\n", 115746, ft_find_next_prime(115746));
	printf("%d -> %d\n", 348714, ft_find_next_prime(348714));
	printf("%d -> %d\n", 274476, ft_find_next_prime(274476));
	printf("%d -> %d\n", 288349, ft_find_next_prime(288349));
	printf("%d -> %d\n", 95798, ft_find_next_prime(95798));
	printf("%d -> %d\n", 244792, ft_find_next_prime(244792));
	printf("%d -> %d\n", 275978, ft_find_next_prime(275978));
	printf("%d -> %d\n", 31295, ft_find_next_prime(31295));
	printf("%d -> %d\n", 178244, ft_find_next_prime(178244));
	printf("%d -> %d\n", 15542, ft_find_next_prime(15542));
	printf("%d -> %d\n", 397068, ft_find_next_prime(397068));
	printf("%d -> %d\n", 151119, ft_find_next_prime(151119));
	printf("%d -> %d\n", 347221, ft_find_next_prime(347221));
	printf("%d -> %d\n", 415831, ft_find_next_prime(415831));
	printf("%d -> %d\n", 352861, ft_find_next_prime(352861));
	printf("%d -> %d\n", 143974, ft_find_next_prime(143974));
	printf("%d -> %d\n", 388721, ft_find_next_prime(388721));
	printf("%d -> %d\n", 265918, ft_find_next_prime(265918));
	printf("%d -> %d\n", 158328, ft_find_next_prime(158328));
	printf("%d -> %d\n", 273531, ft_find_next_prime(273531));
	printf("%d -> %d\n", 206357, ft_find_next_prime(206357));
	printf("%d -> %d\n", 258177, ft_find_next_prime(258177));
	printf("%d -> %d\n", 140425, ft_find_next_prime(140425));
	printf("%d -> %d\n", 351371, ft_find_next_prime(351371));
	printf("%d -> %d\n", 157847, ft_find_next_prime(157847));
	printf("%d -> %d\n", 347291, ft_find_next_prime(347291));
	printf("%d -> %d\n", 359601, ft_find_next_prime(359601));
	printf("%d -> %d\n", 135350, ft_find_next_prime(135350));
	printf("%d -> %d\n", 236732, ft_find_next_prime(236732));
	printf("%d -> %d\n", 267454, ft_find_next_prime(267454));
	printf("%d -> %d\n", 367809, ft_find_next_prime(367809));
	printf("%d -> %d\n", 101570, ft_find_next_prime(101570));
	printf("%d -> %d\n", 387852, ft_find_next_prime(387852));
	printf("%d -> %d\n", 61127, ft_find_next_prime(61127));
	printf("%d -> %d\n", 362700, ft_find_next_prime(362700));
	printf("%d -> %d\n", 20175, ft_find_next_prime(20175));
	printf("%d -> %d\n", 279761, ft_find_next_prime(279761));
	printf("%d -> %d\n", 376447, ft_find_next_prime(376447));
	printf("%d -> %d\n", 5863, ft_find_next_prime(5863));
	printf("%d -> %d\n", 165096, ft_find_next_prime(165096));
	printf("%d -> %d\n", 237289, ft_find_next_prime(237289));
	printf("%d -> %d\n", 243442, ft_find_next_prime(243442));
	printf("%d -> %d\n", 217331, ft_find_next_prime(217331));
	printf("%d -> %d\n", 277748, ft_find_next_prime(277748));
	printf("%d -> %d\n", 372351, ft_find_next_prime(372351));
	printf("%d -> %d\n", 131370, ft_find_next_prime(131370));
	printf("%d -> %d\n", 214279, ft_find_next_prime(214279));
	printf("%d -> %d\n", 163084, ft_find_next_prime(163084));
	printf("%d -> %d\n", 103694, ft_find_next_prime(103694));
	printf("%d -> %d\n", 163602, ft_find_next_prime(163602));
	printf("%d -> %d\n", 163094, ft_find_next_prime(163094));
	printf("%d -> %d\n", 298266, ft_find_next_prime(298266));
	printf("%d -> %d\n", 332063, ft_find_next_prime(332063));
	printf("%d -> %d\n", 334117, ft_find_next_prime(334117));
	printf("%d -> %d\n", 42794, ft_find_next_prime(42794));
	printf("%d -> %d\n", 306997, ft_find_next_prime(306997));
	printf("%d -> %d\n", 256828, ft_find_next_prime(256828));
	printf("%d -> %d\n", 313669, ft_find_next_prime(313669));
	printf("%d -> %d\n", 244040, ft_find_next_prime(244040));
	printf("%d -> %d\n", 58936, ft_find_next_prime(58936));
	printf("%d -> %d\n", 326997, ft_find_next_prime(326997));
	printf("%d -> %d\n", 317270, ft_find_next_prime(317270));
	printf("%d -> %d\n", 89950, ft_find_next_prime(89950));
	printf("%d -> %d\n", 257375, ft_find_next_prime(257375));
	printf("%d -> %d\n", 168289, ft_find_next_prime(168289));
	printf("%d -> %d\n", 291814, ft_find_next_prime(291814));
	printf("%d -> %d\n", 318312, ft_find_next_prime(318312));
	printf("%d -> %d\n", 327533, ft_find_next_prime(327533));
	printf("%d -> %d\n", 257390, ft_find_next_prime(257390));
	printf("%d -> %d\n", 124136, ft_find_next_prime(124136));
	printf("%d -> %d\n", 322422, ft_find_next_prime(322422));
	printf("%d -> %d\n", 206209, ft_find_next_prime(206209));
	printf("%d -> %d\n", 199046, ft_find_next_prime(199046));
	printf("%d -> %d\n", 227722, ft_find_next_prime(227722));
	printf("%d -> %d\n", 345488, ft_find_next_prime(345488));
	printf("%d -> %d\n", 241052, ft_find_next_prime(241052));
	printf("%d -> %d\n", 20897, ft_find_next_prime(20897));
	printf("%d -> %d\n", 342447, ft_find_next_prime(342447));
	printf("%d -> %d\n", 2480, ft_find_next_prime(2480));
	printf("%d -> %d\n", 155060, ft_find_next_prime(155060));
	printf("%d -> %d\n", 207800, ft_find_next_prime(207800));
	printf("%d -> %d\n", 242108, ft_find_next_prime(242108));
	printf("%d -> %d\n", 76743, ft_find_next_prime(76743));
	printf("%d -> %d\n", 118218, ft_find_next_prime(118218));
	printf("%d -> %d\n", 154068, ft_find_next_prime(154068));
	printf("%d -> %d\n", 368086, ft_find_next_prime(368086));
	printf("%d -> %d\n", 267224, ft_find_next_prime(267224));
	printf("%d -> %d\n", 198618, ft_find_next_prime(198618));
	printf("%d -> %d\n", 292837, ft_find_next_prime(292837));
	printf("%d -> %d\n", 276454, ft_find_next_prime(276454));
	printf("%d -> %d\n", 240103, ft_find_next_prime(240103));
	printf("%d -> %d\n", 228331, ft_find_next_prime(228331));
	printf("%d -> %d\n", 356845, ft_find_next_prime(356845));
	printf("%d -> %d\n", 50671, ft_find_next_prime(50671));
	printf("%d -> %d\n", 15870, ft_find_next_prime(15870));
	/*********************************************/
	return 0;
}
