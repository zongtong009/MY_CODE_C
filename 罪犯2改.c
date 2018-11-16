#include <stdio.h>
#include <stdlib.h>
/****************************************************************/
int main(int argc, char *argv[]) {
	for(int ja=1; ja<=5; ja++) {
		for(int yi=1; yi<=5; yi++) {
			for(int bing=1; bing<=5; bing++) {
				for(int ding=1; ding<=5; ding++) {
					for(int wu=1; wu<=5; wu++) {
						int a[5]= {ja,yi,bing,ding,wu,};
						for(int i = 0; i < 4 ; i++) {
							for(int j = i+1; j < 5 ; j++)
								if(a[i] == a[j])  goto tiao;
						}
//						printf("%d %d %d %d %d\n",ja,yi,bing,ding,wu);
						if( 3==(ja!=5 )+(bing==3)+(ja>wu)+(wu==2)+(ding!=1) ) {
							int cheat_man = 0;
							if ((ja != 5) ==0 && ja <= 2) 	cheat_man += 1;
							if ((bing == 3) ==0 && yi <= 2)	cheat_man += 1;
							if ((ja > wu) ==0 && bing <= 2)	cheat_man += 1;
							if ((wu == 2) ==0 && ding <= 2)	cheat_man += 1;
							if ((ding != 1) ==0&& wu <= 2)	cheat_man += 1;
							if (cheat_man == 2)
								printf("甲是第%d名\n"
								"乙是第%d名\n"
								"丙是第%d名\n"
								"丁是第%d名\n"
								"戊是第%d名\n",ja,yi,bing,ding,wu);
						}
tiao:
						continue;
					}

				}

			}

		}
	}

	return 0;
}



