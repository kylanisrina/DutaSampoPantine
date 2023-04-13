#include <iostream>
#include <cstring>

using namespace std;
//class Siswa {
//public:
//    char nama[50];
//    int id;
//    int kelas;
//    double* nilai;
//
//    Siswa() {
//        nilai = NULL;
//    }
//
//    ~Siswa() {
//        if (nilai != NULL) {
//            delete[] nilai;
//        }
//    }
//};
//
//void inisialisasiSiswa(Siswa* siswa, const char* nama, int id, int kelas, int n) {
//    strcpy(siswa->nama, nama);
//    siswa->id = id;
//    siswa->kelas = kelas;
//    siswa->nilai = new double[n];
//}
//
//void inputNilai(Siswa* siswa, int n) {
//    cout << "Masukkan nilai siswa " << siswa->nama << ":" << endl;
//    for (int i = 0; i < n; i++) {
//        cout << "Nilai Mata Pelajaran " << i + 1 << ": ";
//        cin >> siswa->nilai[i];
//    }
//}
//
//double rataRataNilai(Siswa* siswa, int n) {
//    double totalNilai = 0;
//    for (int i = 0; i < n; i++) {
//        totalNilai += siswa->nilai[i];
//    }
//    return totalNilai / n;
//}
//
//void tampilSiswa(Siswa* siswa, int n) {
//    cout << "Data Siswa:" << endl;
//    cout << "Nama: " << siswa->nama << endl;
//    cout << "ID: " << siswa->id << endl;
//    cout << "Kelas :" <<siswa->kelas<<endl;
//	cout << "Nilai: ";
//	for (int i = 0; i < n; i++) {
//	cout << siswa->nilai[i] << " ";
//	}
//	cout << endl;
//	}
//	
//	int main() {
//	int n;
//	cout << "Masukkan jumlah mata pelajaran: ";
//	cin >> n;
//	Siswa siswa;
//	inisialisasiSiswa(&siswa, "John Doe", 12345, 10, n);
//	inputNilai(&siswa, n);
//	tampilSiswa(&siswa, n );
//	cout << "Rata-rata nilai: " << rataRataNilai(&siswa, n) << endl;
//	
//	return 0;
//
//}


//int hasil[1000][10000];
//int jumlah;
//int main(){
//	int n,y,k,l;
//	cin>>n>>y;
//	int mat1[n][y];
//	for(int f=0;f<n;f++){
//		for(int j=0;j<y;j++){
//			cin>>mat1[f][j];
//		}
//	}
//	cin>>k>>l;
//int mat2[k][l];
//	for(int f=0;f<k;f++){
//		for(int j=0;j<l;j++){
//			cin>>mat2[f][j];
//		}
//	}
//	if(y==k){
//	for(int i=0;i<n;i++){
//		for(int j=0;j<l;j++){
//		    hasil[i][j]=0;
//			for(int f=0;f<y;f++){
//		hasil[i][j]+=mat1[i][f]*mat2[f][j];
//		}
//	}
//		
//}
//	for(int f=0;f<n;f++){
//		for(int j=0;j<l;j++){
//			cout<<hasil[f][j]<<" ";
//		}
//		cout<<endl;
//	}
//}
//else{
//	cout<<"Perkalian matriks tidak dapat dilakukan";
//}
//}


//void deret(int a, int d, int n) {
//    int has = (n*(2 * a + (n - 1) * d))/2;
//    cout<<has;
//}
//
//void baris(int a, int d, int n) {
//    int temp = 0;
//    for (int i = 1; i <= n; i++) {
//        temp = a + (i-1) * d;
//        if(temp>=0){
//        cout << temp << " ";
//        }
//        else{
//        cout<<"Not Found";
//        exit(0);
//        }
//    }
//    cout << endl;
//}



//float jarak(float x[]){
//	return sqrt(pow(x[3]-x[0],2) + pow(x[1]-x[2],2));
//}
//
//int main(){
//	float arr[4];
//	
//	for(int i=0; i<4; i++){
//		cin>>arr[i];
//	}
//	
//	cout<<jarak(arr);
//}



//void update(int *a,int *b) {
//   int sum=*a+*b;
//   int diff;
//   if(*a>*b){
//       diff=*a-*b;
//   }
//   else{
//       diff=*b-*a;
//   }
//   *a=sum;
//   *b=diff;   
//}
//
//int main() {
//    int a, b;
//    int *pa = &a, *pb = &b;
//    scanf("%d %d", &a, &b);
//    update(pa, pb);
//    printf("%d\n%d", a, b);
//
//    return 0;
//}


//void vPtr(void* p, char type)
//{
//    if (type == 'i')
//    {
//        for (int i = 0; i < *(int *)p;i++) {
//            cout << "ing" << endl;
//        }
//    }
//    else if (type == 'c')
//    {
//        cout << "ceng " << *(char*)p << endl;
//    }
//}