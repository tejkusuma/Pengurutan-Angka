#include <stdio.h>

int main()
{
	//inisialiasasi
    int i,j,n,t, A[100];
    
    printf("-------------------------------- \n");
	printf("|   Program Mengurutkan Angka   | \n");
    printf("-------------------------------- \n\n");
    
    //memasukkan jumlah data oleh pengguna
    printf("Masukkan banyak data : "); scanf("%d", &n);
	
	//memasukkan angka oleh pengguna
    for(i=1; i<=n; i++)
    {
        printf("Data %d = ", i); scanf("%d", &A[i]);
    }
	
	//proses mengurutkan data
    for(i=1; i<=(n-1); i++)
    {
        for(j=n; j>=(i+1); j--)
        {
            if(A[j-1]>A[j])
            {
                t=A[j-1];
                A[j-1] = A[j];
                A[j] = t;
            }
        }
    }
	
	//menampilkan angka yang sudah terurut
    printf("\nUrutannya adalah : ");
    for(i=1; i<=n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
    return 0;
}
