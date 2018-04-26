
#include <stdio.h>
#include <stdlib.h>

int main (){
	int pilihan=1; int pilihan1; int jumtiket[7000]; int harga[7000]; int hargavip[7000];
	int kelas,tujuan; int reg=0; int vip=0; int buktikelas[7000]; int buktitujuan[7000];
	int a=1;
	int b;
	int c=0;
	int d=0;
	int e=1;
	int f=0;
	int g=0;
	int h=1;
	int jumlah=0; int jumlahbersih=0;
	int pajak; int diskon=0;
	int totalbersih; int total;
	int tikets=1000; int hargas=800000;
	int tiketm=1000; int hargam=700000;
	int tiketf=1000; int hargaf=750000;
	int tikett=1000; int hargat=700000;
	int tiketa=1000; int hargaa=1000000;
	int tiketb=1000; int hargab=850000;
	int tiketmy=1000; int hargamy=900000;
	
	while (pilihan!=5){
		while (pilihan==1){
		system ("cls");
	    printf ("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
		printf ("::                                                                      ::\n");
		printf ("::                  ELKOM AIR TICKETING APPLICATION                     ::\n");
		printf ("::                                                                      ::\n");
		printf ("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
		printf ("==========================================================================\n");
		printf ("||                                                                      ||\n");
		printf ("|| 1. Pemesanan Tiket                                                   ||\n");
		printf ("|| 2. Lihat Daftar Tiket                                                ||\n");
		printf ("|| 3. Kuitansi Pembayaran Tiket                                         ||\n");
		printf ("|| 4. Bantuan                                                           ||\n");
		printf ("|| 5. Keluar                                                            ||\n");
		printf ("||                                                                      ||\n");
		printf ("||                                                                      ||\n");
		printf ("==========================================================================\n");
		printf ("Masukkan Pilihan Anda: "); scanf("%d",&pilihan);
		printf ("\n");
		
		if (pilihan<1||pilihan>5){
			while (pilihan!=1){
					printf("\nMaaf input anda tidak dikenali\n");
					printf("Silahkan tekan angka 1 untuk kembali."); 
					scanf ("%d",&pilihan);
				}
			} else break;
		};
		system ("cls");
		
		switch (pilihan){
			case 1: {
				do {
				printf ("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
				printf ("::                                                                      ::\n");
				printf ("::                           Pemesanan Tiket                            ::\n");
				printf ("::                                                                      ::\n");
				printf ("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
				printf ("==========================================================================\n");
				kelas=1; tujuan=1;
				while (kelas==1){
						printf ("||                                                                      ||\n");
						printf ("|| Silahkan Memilih Jenis Kelas:                                        ||\n");
						printf ("||                                                                      ||\n");
						printf ("|| 1. Kelas Reguler                                                     ||\n");		
						printf ("|| 2. Kelas VIP                                                         ||\n");		
						printf ("||                                                                      ||\n");
						printf ("==========================================================================\n");
						printf ("                                                                          \n");
						printf ("Silahkan Masukkan Kelas Pilihan Anda:\n"); scanf ("%d", &kelas);
						if (kelas==1){
							buktikelas[a]=kelas;
							reg++;
							break;
						} else if (kelas==2){
							buktikelas[a]=kelas;
							vip++;
							break;
						} else {while (kelas!=1){
						printf("\nMaaf input anda tidak dikenali\n");
						printf ("Silahkan tekan angka 1 untuk kembali."); scanf ("%d",&kelas);
						}
						
						}
				}
				while (tujuan==1){
					printf ("\n\n\n");
					printf ("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
					printf ("::                                                                      ::\n");
					printf ("::               Silahkan Memilih Rute Penerbangan Anda                 ::\n");
					printf ("::                                                                      ::\n");
					printf ("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
					printf ("1. Indonesia - Singapura \n");
					printf ("2. Indonesia - Malaysia \n");
					printf ("3. Indonesia - Filipina \n");
					printf ("4. Indonesia - Thailand \n");
					printf ("5. Indonesia - Australia \n");
					printf ("6. Indonesia - Brunei \n");
					printf ("7. Indonesia - Myanmar \n\n");
					printf ("Masukkan Rute Penerbangan Anda\t\t: "); scanf("%d",&tujuan);
					if (tujuan<1||tujuan>7){
						while (tujuan!=1){
								printf("\nMaaf input anda tidak dikenali\n");
								printf("Silahkan tekan angka 1 untuk kembali."); scanf ("%d",&tujuan);
						}
					} else break;
				}
				buktitujuan[a]=tujuan;
				
				printf("Jumlah Tiket Yang Anda Pesan\t: ");scanf("%d",&jumtiket[a]);
				while (jumtiket[a]<0){
					printf("Maaf, jumlah tiket yang akan dipesan tidak boleh kurang dari 1\n:");
					printf("Jumlah Tiket Yang Anda Pesan\t: ");scanf("%d",jumtiket[a]);
				}
				printf("Total Harga\t\t\t: Rp. ");
				switch (buktitujuan[a]){
					case 1: {
						harga[a]=jumtiket[a]*hargas;
						tikets=tikets-jumtiket[a];
						hargavip[a]=harga[a]+(0.1*harga[a]);
						if (buktikelas[a]==1){
							printf ("%d\n\n", harga[a]);
						}	else printf ("%d\n\n", hargavip[a]);
					break;
					}
					case 2: {
						harga[a]=jumtiket[a]*hargam;
						tiketm=tiketm-jumtiket[a];
						hargavip[a]=harga[a]+(0.1*harga[a]);
						if (buktikelas[a]==1){
							printf ("%d\n\n", harga[a]);
						}	else printf ("%d\n\n", hargavip[a]);
					break;
					}
					case 3: {
						harga[a]=jumtiket[a]*hargaf;
						tiketm=tiketm-jumtiket[a];
						hargavip[a]=harga[a]+(0.1*harga[a]);
						if (buktikelas[a]==1){
							printf ("%d\n\n", harga[a]);
						}	else printf ("%d\n\n", hargavip[a]);
					break;
					}
					case 4: {
						harga[a]=jumtiket[a]*hargat;
						tikett=tikett-jumtiket[a];
						hargavip[a]=harga[a]+(0.1*harga[a]);
						if (buktikelas[a]==1){
							printf ("%d\n\n", harga[a]);
						}	else printf ("%d\n\n", hargavip[a]);
					break;
					}
					case 5: {
						harga[a]=jumtiket[a]*hargaa;
						tiketa=tiketa-jumtiket[a];
						hargavip[a]=harga[a]+(0.1*harga[a]);
						if (buktikelas[a]==1){
							printf ("%d\n\n", harga[a]);
						}	else printf ("%d\n\n", hargavip[a]);
					break;
					}
					case 6: {
						harga[a]=jumtiket[a]*hargab;
						tiketb=tiketb-jumtiket[a];
						hargavip[a]=harga[a]+(0.1*harga[a]);
						if (buktikelas[a]==1){
							printf ("%d\n\n", harga[a]);
						}	else printf ("%d\n\n", hargavip[a]);
					break;
					}
					case 7: {
						harga[a]=jumtiket[a]*hargamy;
						tiketmy=tiketmy-jumtiket[a];
						hargavip[a]=harga[a]+(0.1*harga[a]);
						if (buktikelas[a]==1){
							printf ("%d\n\n", harga[a]);
						}	else printf ("%d\n\n", hargavip[a]);
					break;
					}
				}
				printf ("*Harga Yang Tertera Tidak Termasuk Pajak\n");
				printf ("*Data Transaksi Anda Ada Pada Menu Kuitansi Pembayaran Tiket\n\n");
				
				a++;
				printf ("Pilihan\t: \n");
				printf ("1. Menu Utama\n");
				printf ("2. Pesan Lagi\n");
				printf ("Masukkan Pilihan\t: ");scanf ("%d",&pilihan1);
				while (pilihan1<1||pilihan1>2){
						printf("\nMaaf input anda tidak dikenali\n ");
						printf("Silahkan Masukkan Kembali Pilihan Anda\t: ");scanf ("%d",&pilihan1);
					}
				if (pilihan1==1) {
					system ("cls");
					break;
					}
					system ("cls");
				} while (pilihan1==2);
				break;
			} 
			case 2: {
				printf ("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
				printf ("::                                                                      ::\n");
				printf ("::                  Daftar Ketersediaan Tiket Pesawat                   ::\n");
				printf ("::                                                                      ::\n");
				printf ("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
				printf ("Kode Tiket\t: S001002 \n"); 
				printf ("Harga Tiket\t: 800.000\n");
				printf ("Jumlah Tiket\t: %d\n",tikets);
				printf ("Tujuan\t\t: Indonesia Singapura\n\n");
				printf ("Kode Tiket\t: M001002\n");		
				printf ("Harga Tiket\t: 700.000\n");
				printf ("Jumlah Tiket\t: %d\n",tiketm);
				printf ("Tujuan\t\t: Indonesia - Malaysia\n\n");
				printf ("Kode Tiket\t: F001002\n");
				printf ("Harga Tiket\t: 750.000\n");
				printf ("Jumlah Tiket\t: %d\n",tiketf);
				printf ("Tujuan\t\t: Indonesia - Filipina\n\n");
				printf ("Kode Tiket\t: T001002\n");
				printf ("Harga Tiket\t: 700.000\n");
				printf ("Jumlah Tiket\t:\n");
				printf ("Tujuan\t\t: Indonesia - Thailand\n\n");			
				printf ("Kode Tiket\t: A001002\n");
				printf ("Harga Tiket\t: 1.000.000\n");
				printf ("Jumlah Tiket\t: %d\n",tiketa);
				printf ("Tujuan\t\t: Indonesia - Australia\n\n");				
				printf ("Kode Tiket\t: B001002\n");
				printf ("Harga Tiket\t: 850.000\n");
				printf ("Jumlah Tiket\t: %d\n",tiketb);
				printf ("Tujuan\t\t: Indonesia - Brunei\n\n");
				printf ("Kode Tiket\t: M101202\n");
				printf ("Harga Tiket\t: 900.000\n");
				printf ("Jumlah Tiket\t: %d\n",tiketmy);
				printf ("Tujuan\t\t: Indonesia - Myanmar\n\n");
				
				printf ("Tekan 1 untuk kembali. "); scanf ("%d",&pilihan);
				while (pilihan!=1){
					printf("\nMaaf input anda tidak dikenali\n");
					printf ("Silahkan tekan angka 1 untuk kembali."); scanf ("%d",&pilihan);
				}
				system ("cls");
				break;
			}
			case 3: {
				printf ("@===============================================================@\n");
				printf ("|                                                               |\n");
				printf ("|                  Kuitansi Pembayaran Tiket                    |\n");
				printf ("|_______________________________________________________________|\n");
				printf ("|                                                               |\n");
				printf ("|Pemesanan Tiket Melalui Aplikasi                               |\n");
				printf ("|ELKOM AIR                                                      |\n");
				
				if (reg>0){
					
				printf ("|                                                               |\n");
				printf ("|Kelas\t: REGULER                                               |\n");
				printf ("|                                                               |\n");
				printf ("| Kode Transaksi\tKode Tiket\tJumlah Tiket\tHarga\t|\n");
				for (b=1;b<a;b++){
					if (buktikelas[b]%2==1){
						printf ("|\tR%d%d%d\t\t  ",c,d,e);
						if (e==9){
							e=-1;
							d++;
							if (d==10){
								d=0;
								c++;
							}
						}
						e++;
						switch (buktitujuan[b]){
							case 1:{
								printf ("S001002\t");
								break;
							}
							case 2:{
								printf ("M001002\t");
								break;
							}
							case 3:{
								printf ("F001002\t");
								break;
							}
							case 4:{
								printf ("T001002\t");
								break;
							}
							case 5:{
								printf ("A001002\t");
								break;
							}
							case 6:{
								printf ("B001002\t");
								break;
							}
							case 7:{
								printf ("M101002\t");
								break;
							}
						}
						if (jumtiket[b]<10){
							printf ("      ");
						} else if (jumtiket[b]<100){
							printf ("     ");
						} else if (jumtiket[b]<1000){
							printf ("    ");
						} else printf ("   ");
						printf ("%d",jumtiket[b]);
						if (harga[b]<1000000){
							printf ("         ");
						} else if (harga[b]<10000000){
							printf ("        ");
						} else if (harga[b]<100000000){
							printf ("       ");
						} else printf ("      ");
						jumlah=jumlah+harga[b];
						jumlahbersih=jumlahbersih+harga[b];
						printf ("%d\t|\n", harga[b]);
					}          
					
				}
			}
				if (vip>0){
				printf ("|                                                               |\n");
				printf ("|Kelas\t: VIP                                                   |\n");
				printf ("|                                                               |\n");
				printf ("| Kode Transaksi\tKode Tiket\tJumlah Tiket\tHarga\t|\n");
				for (b=1;b<a;b++){
					if (buktikelas[b]%2==0){
						printf ("|\tV%d%d%d\t\t  ",f,g,h);
						if (h==9){
							h=-1;
							g++;
							if (g==10){
								g=0;
								f++;
							}
						}
						h++;
						switch (buktitujuan[b]){
							case 1:{
								printf ("S001002\t");
								break;
							}
							case 2:{
								printf ("M001002\t");
								break;
							}
							case 3:{
								printf ("F001002\t");
								break;
							}
							case 4:{
								printf ("T001002\t");
								break;
							}
							case 5:{
								printf ("A001002\t");
								break;
							}
							case 6:{
								printf ("B001002\t");
								break;
							}
							case 7:{
								printf ("M101002\t");
								break;
							}
						}
						if (jumtiket[b]<10){
							printf ("      ");
						} else if (jumtiket[b]<100){
							printf ("     ");
						} else if (jumtiket[b]<1000){
							printf ("    ");
						} else printf ("   ");
						printf ("%d",jumtiket[b]);
						if (hargavip[b]<1000000){
							printf ("         ");
						} else if (hargavip[b]<10000000){
							printf ("        ");
						} else if (hargavip[b]<100000000){
							printf ("       ");
						} else printf ("      ");
						jumlah=jumlah+hargavip[b];
						jumlahbersih=jumlahbersih+harga[b];
						printf ("%d\t|\n", hargavip[b]);
					}          
				}
				}
				printf ("|---------------------------------------------------------------|\n");
				printf ("|Jumlah\t\t\t\t\t\t");
				if (jumlah<1000000){
							printf ("        ");
						} else if (jumlah<10000000){
							printf ("       ");
						} else if (jumlah<100000000){
							printf ("      ");
						} else if (jumlah<1000000000){
							printf ("     ");
						} else printf ("    ");
						
				printf ("%d\t|\n", jumlah);
				printf ("|                                                               |\n");
				
				printf ("|Pajak\t\t\t\t\t\t");
				pajak=jumlahbersih*0.1;
					if (pajak<1000000){
							printf ("        ");
						} else if (pajak<10000000){
							printf ("       ");
						} else if (pajak<100000000){
							printf ("      ");
						} else if (pajak<1000000000){
							printf ("     ");
						} else printf ("    ");
				printf ("%d\t|\n", pajak);
				printf ("|                                                               |\n");
				
				totalbersih=jumlah+pajak;
				if 	(totalbersih>=4000000){
					printf ("|Discount\t\t\t\t\t");
					diskon=totalbersih*0.15;
					if (diskon<1000000){
							printf ("        ");
						} else if (diskon<10000000){
							printf ("       ");
						} else if (diskon<100000000){
							printf ("      ");
						} else if (diskon<1000000000){
							printf ("     ");
						} else printf ("    ");
					printf ("%d\t|\n", diskon);
					printf ("|                                                               |\n");
				}
				printf ("|---------------------------------------------------------------|\n");
				printf ("|Total\t\t\t\t\t\t");
				total=totalbersih-diskon;
				if (total<1000000){
							printf ("        ");
						} else if (total<10000000){
							printf ("       ");
						} else if (total<100000000){
							printf ("      ");
						} else if (total<1000000000){
							printf ("     ");
						} else printf ("    ");
				printf ("%d\t|\n", total);
				printf ("|                                                               |\n");
				printf ("@===============================================================@\n");
				
				
				printf ("Tekan 1 untuk kembali. "); scanf ("%d",&pilihan);
				while (pilihan!=1){
					printf("\nMaaf input anda tidak dikenali\n");
					printf ("Silahkan tekan angka 1 untuk kembali."); scanf ("%d",&pilihan);
				}
				break;
				
			}
			case 4: {
			printf ("===============================================================================\n");
			printf ("||                                                                           ||\n");
			printf ("||                              [PENJELASAN]                                 ||\n");
			printf ("||                                                                           ||\n");
			printf ("|| # Aplikasi ini digunakan untuk pemesanan tiket pesawat.                   ||\n");
			printf ("|| # Ada 2 kelas yang tersedia yaitu kelas VIP dan Reguler.                  ||\n");
			printf ("|| # Kelas VIP akan dikenakan biaya tambahan sebesar 10%% dari harga normal.  ||\n");
			printf ("|| # Untuk pembelian diatas 4.000.000 akan mendapat discount sebesar 15%%.    ||\n");
			printf ("|| # Harap memperhatikan ketersediaan tiket sebelum melakukan pembelian.     ||\n");
			printf ("|| # Kerugian pelanggan akibat kesalahan penggunaan aplikasi ticketing       ||\n");
			printf ("||   berada diluar tanggung jawab pihak ELKOM AIR                            ||\n");
			printf ("||                                                                           ||\n");
			printf ("||---------------------------------------------------------------------------||\n");
			printf ("||                                                                           ||\n");
			printf ("||                                [ABOUT]                                    ||\n");
			printf ("||                                                                           ||\n");
			printf ("|| Program ini adalah simulasi aplikasi pemesanan tiket pesawat. Program ini ||\n");
			printf ("|| dibuat oleh David Raditya, Mochamad Fahmi Fajrin dan Naiza Astri sebagai  ||\n");
			printf ("|| proyek akhir Praktikum Pengantar Teknik Komputer                          ||\n");
			printf ("||                                                                           ||\n");
			printf ("||                                                                           ||\n");
			printf ("||                                                                           ||\n");
			printf ("||                                                            13 April 2016  ||\n");
			printf ("||                                                                           ||\n");
			printf ("||---------------------------------------------------------------------------||\n");
			printf ("||                                                                           ||\n");
			printf ("||                             [CONCTACT US]                                 ||\n");
			printf ("||                                                                           ||\n");
			printf ("|| # David Raditya                                                           ||\n");
			printf ("||   HP     : 081315011683                                                   ||\n");
			printf ("||   e-mail : davidraditya.nvidia_corp@yahoo.com                             ||\n");
			printf ("||                                                                           ||\n");
			printf ("|| # Mochamad Fahmi Fajrin                                                   ||\n");
			printf ("||   HP     : 085786734754                                                   ||\n");
			printf ("||   e-mail : mochamadfahmi.fajrin7@gmail.com                                ||\n");
			printf ("||                                                                           ||\n");
			printf ("|| # Naiza Astri                                                             ||\n");
			printf ("||   HP     : 085776400712                                                   ||\n");
			printf ("||   e-mail : naiza9233@gmail.com                                            ||\n");
			printf ("||                                                                           ||\n");
			printf ("===============================================================================\n");
			
			printf ("Silahkan tekan angka 1 untuk kembali Ke Menu Utama.\n "); scanf ("%d",&pilihan);
				while (pilihan!=1){
					printf("\nMaaf input anda tidak dikenali\n");
					printf ("Silahkan tekan angka 1 untuk kembali Ke Menu Utama.");
					scanf ("%d",&pilihan);
					
				}
			break;
			}
			case 5:{
				printf ("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
				printf ("::                                                                      ::\n");
				printf ("::                  Terima Kasih Telah Bertransaksi                     ::\n");
				printf ("::                                                                      ::\n");
				printf ("::                    Have a safe flight with us!                       ::\n");
				printf ("::                                                                      ::\n");
				printf ("::   _-_-_-_-_-_-_-_-_-_-_-_-_-ELKOM AIR-_-_-_-_-_-_-_-_-_-_-_-_-_-_-   ::\n");
				printf ("::                                                                      ::\n");
				printf ("::                            since 2016                                ::\n");
				printf ("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
				break;
			}
		}
	}
	}
