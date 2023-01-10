#include <iostream>
#include <string>
#include <conio.h>
#include <math.h>
using namespace std;

int main () {

    float n;
    float r;
    float x[5];
    float y[5];
    float xy[5];
    float x2[5];
    float y2[5];
    float sigmax;
    float sigmay;
    float sigmaxy;
    float sigmax2;
    float sigmay2;
    float determinasi;

    cout << "Masukkan Banyak Data: "; cin >> n;
    cout << endl;
     for (int i = 1; i <= n; i++) {
        do {
            cout << "Data X " << i << ": "; cin >> x[i];
            x2[i] = x[i]*x[i];
            sigmax = sigmax + x[i];
        
        } while (x[i] < 0);
        
        do {
            cout << "Data Y " << i << ": "; cin >> y[i];
            y2[i] = y[i]*y[i];
            sigmay = sigmay + y[i];
            
        } while (y[i] < 0);

        xy[i] = x[i]*y[i];
        sigmaxy = sigmaxy + xy[i];
        sigmax2 = sigmax2 + x2[i];
        sigmay2 = sigmay2 + y2[i];
     }
     cout << endl;
     cout << "Sigma X: " << sigmax << endl;
     cout << "Sigma Y: " << sigmay << endl;
     cout << "Sigma XY: " << sigmaxy << endl;
     cout << "Sigma X^2: " << sigmax2 << endl;
     cout << "Sigma Y^2: " << sigmay2 << endl;
     cout << endl;

     /*==Nilai Korelasi==*/
     r = ((n * sigmaxy) - (sigmax * sigmay)) / ((sqrt(n * sigmax2 - (sigmax * sigmax))) *  (sqrt (n * sigmay2 - (sigmay * sigmay))));
     cout << "Nilai Korelasi : " << r << endl;
     cout << "\n";

     /*==Nilai Koefisien Determinasi==*/
     determinasi = (r * r) * 100/100;
     cout << "Nilai Koefisien Determinasi: " << determinasi << endl;
     cout << endl;
     
     /*==Nilai Kekuatan Hubungan Korelasi*/
    if ((r >= 0.00) & (r <= 0.09)){
		cout << "Kekuatan Hubungan korelasi diabaikan \n";
	}
	else if ((r >= 0.10) & (r <= 0.29)){
		cout << "Kekuatan Hubungan korelasi rendah \n";
	}
	else if ((r >= 0.30) & (r <= 0,49)){
		cout << "Kekuatan Hubungan korelasi moderat \n";
	}
	else if ((r >= 0.50) & (r <= 0.79)){
		cout << "Kekuatan Hubungan korelasi sedang \n";
	}
	else if (r > 0.70){
		cout << "Kekuatan Hubungan korelasi sangat kuat \n";
	}
	else if (r < 0.00){
		cout << "Kekuatan Hubungan tidak terdefinisi \n";
	}

     /*==Nilai Hubungan Korelasi==*/
    if (r > 0) {
        cout << "Hubungan antara variable X dan Y adalah positif \n";
     }
    else if (r < 0) {
        cout << "Hubungan antara variable X dan Y adalah negatif \n";
     }
    else if (r = 0){
        cout << "Tidak ada hubungan antara variable X dan Y \n";
     }

return 0;
}
