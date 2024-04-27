#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void zamena(int &x, int &y){
	int pom;
	pom=x;
	x=y;
	y=pom;
}

bool prost(int n){
	int i;
	for(i=2;i<n/2;i++){
		if(n%i==0){
			return false;														//kolokvijum
		}
	}
	return true;
}
class Tacka{
	//atributi
	public:
		int x;
		int y;
	//prototipi metoda
	void inicijalizacija(int a, int b);
	void translacija(int dx, int dy);
	void pozicija();
	
};
//implementacija metoda
void Tacka::inicijalizacija(int a, int b){
	x=a;
	y=b;
}
void Tacka::translacija(int dx, int dy){
	x=x+dx;
	y=y+dy;
}
void Tacka::pozicija(){
	cout<<"tacka se nalazi u "<<x<<","<<y<<endl;
}
class Post{
	private: 
		char naslov;
		char opis;
		char datum;
		int rejting;
	void inicijalizacija(char naslov, char opis, char datum, int rejting);
	void inkrementiranje();
	void dekrementiranje();
	void ispis();
};
void Post::inicijalizacija()
int main(int argc, char** argv) {
	//zbir dva broja
	/* int a=5, b=10;
	cout<<"zbir brojeva "<<a<<"i"<<b<< " iznosi "<<(a+b)<<"\n"; */
	//zbir dva broja preko unosa
/*	int a, b;
	cout<<"unesite dva broja\n";				//ispis
	
	
	cin>>a>>b;									//ucitavanje brojeva
	cout<<"zbir brojeva "<<a<<" i "<<b<< " iznosi "<<(a+b)<<"\n";
 */
/*	int a, b;
	cout<<"unesite dva broja\n";				//ispis
	cin>>a>>b;									//ucitavanje brojeva
	cout<<"zbir brojeva "<<a<<" i "<<b<< " iznosi "<<(a+b)<<"\n";
	cout<<"razlika brojeva "<<a<<" i "<<b<< " iznosi "<<(a-b)<<"\n";
	cout<<"proizvod brojeva "<<a<<" i "<<b<< " iznosi "<<(a*b)<<"\n";
	cout<<"kolicnik brojeva "<<a<<" i "<<b<< " iznosi "<<(a/b)<<"\n";
	cout<<"ostatak pri celobrojnom deljenjnu brojeva "<<a<<" i "<<b<< " iznosi "<<(a%b)<<"\n";

	float a, b, c, x1, x2, d;
	cout<<"unesite koeficijente";
	cin>>a>>b>>c;
	d=b*b-4*a*c;
	(d=0)?() 		
	int dan, mesec, godina;
	cout<<"unesite mesec i godinu";
	cin>>mesec>>godina;
	switch(mesec){
		case 1: cout<<"31 dan"; break;
		case 2: if(godina%4==0 && godina/100!=0 || godina%400==0)
					cout<<"29 dana";
				else cout<<"28 dana";
				break;
		case 3: cout<<"31 dan"; break;
		case 4: cout<<"30 dana"; break;
		case 5: cout<<"31 dan"; break;
		case 6: cout<<"30 dana"; break;
		case 7: cout<<"31 dan"; break;
		case 8: cout<<"31 dan"; break;
		case 9: cout<<"30 dana"; break;
		case 10: cout<<"31 dan"; break;
		case 11: cout<<"30 dana"; break;
		case 12: cout<<"31 dan"; break;
		default: cout<<"pogresan broj"; break;
	}

	char ot, on;
	int otb, onb;
	cout<<"unesite oznaku pocetne pozicije topa";
	cin>>ot>>otb;
	cout<<"unesite oznaku pozicije na koju zeli da napadne top";
	cin>>on>>onb;
	if(ot==on || otb==onb)
		cout<<"moze da napadne";
	else 
		cout<<"ne moze da napadne";
	return 0;
}
//ya skakaca, za strelca, pijuna za domaci- sah;
 

	/////////////////////////////////////////////////
	// faktorijel broja n
	int n, fakt=1, i;
	cout<<"unesite n"<<endl;
	cin>>n;
	for(i=1;i<=n;i++){
		fakt*=i;
	}
	cout<<"faktorijel broja "<<n<<" je  "<<fakt;
	

	///////////////////////////////////////////////////
	//koriscenjem while naredbe stampati sva velika slova engleskog alfabeta osim c;
	char slovo = 'A';
	while(slovo <='Z'){
		if(slovo=='C'){
			slovo++;
			continue;
		}
		cout<<slovo<< " ";
		slovo++;
	}
	////////////////////////////////////////////////////////
	//kreirati f-ju za zamenu vrednosti 2 cela broja;
	
	int x, y;
	cout<<"unesite x i y"<<endl;
	cin>>x>>y;
	cout<<"pre zamene: x="<<x<<" y="<<y;
	zamena(x,y);
	cout<<"posle zamene: x="<<x<<" y="<<y;
	
	//////////////////////////////////////////////////////
	int i, n;
	cout<<"unesite n";
	cin>>n;
	for(i=3;i<=n;i+=2){															//kolokvijum
		if(prost(i)==true && prost(i-2)==true){
			cout<<"blizanci su:"<< i<< " "<< (i-2)<< endl;
		}
	}
	
	////////////////////////////////////////////////////////
	/*napisati program koji ucitava celobrojni niz A od n el. (n<=20). na osnovu niza A se formira niz B.
	elementi niza b su indeksi elemenata niza , tako da kada bi elemente niza A smestili u niz C redom po 
	indeksima iz niza B, niz C bi bio sortiran u opadajucem redosledu*/
/*	int nizA[100],i, n, j, pom;
	int nizB[100];
	cout<<"unesite broj elemenata niza";
	cin>>n;
	cout<<"unesite elemente niza";
	for(i=0;i<n;i++){
		cin>>nizA[i];
		
	}
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
			if(nizA[nizB[i]]< nizA[nizB[j]]){
				pom=nizB[i];
				nizB[i]=nizB[j];
				nizB[j]=pom;
			}
	cout<<"elementi niza A su:"<<endl;
	for(i=0;i<n;i++)
		cout<<nizA[i]<<" ";
	cout<<"elementi niza A po indeksima iz niza B su:"<<endl;
	for(i=0;i<n;i++)
		cout<<nizA[nizB[i]]<<" ";
	

//alociranje matrice
int
*/
////////////////////////////////////////////////////////////////////////
//3. cas
	/* realizovati klasu tacka sa javnim atributima x i y. metode: inicijalizacija(a,b) koja postavlja
	vrednosti atributa na vrednosti koje dolaze kao argumenti, translacija (dx, dy) koja translira
	tacku za vrednosti dx po x, dy po y, pozicija() ispisuje trenutnu poziciju tacke u koordinatnom sistemu
	(njene x i y koordinate)*/
	Tacka t;
	t.inicijalizacija(2, 3);
	t.pozicija();
	t.translacija(3, -5);
	t.pozicija();
	t.x=15;
	t.y=19;
	t.pozicija();
	return 0;
}
/* kreirati klasu post koja ima atribute naslov, opis, vremedatumkreiranja, rejting. metode inicijalizacija, 
inkrementiranje, dekrementiranje, ispis.post treba da ilustruje post na stackoverflow portalu*/
