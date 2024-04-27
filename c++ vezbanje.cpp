#include <iostream>
#include <string.h>
#include <math.h>
#define MAX 100
#define PI 3.14
using namespace std;
enum Zanr{AKCIJA,DRAMA,KOMEDIJA};
enum FINANSIRANJE{BUDZET, SAMOFINANSIRANJE};
enum VrstaPica{BEZALKOHOLNO, ALKOHOLNO};
enum Vrsta{SLAN, SLAD, NEUT};
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
//1.
int main(){
	cout<<"hello world";
	return 0;
}
//2.
int main(){
	int n, m;
	cout<<"unesite dva broja"<<endl;
	cin>>n>>m;
	cout<<"zbir uneta dva broja je "<<n+m<<endl;
	return 0;
}

//3.
int prost(int n){
	int i=2;
	int prost=1; 
	while(prost!=0 && i<=(n/2))
	{
	  if(n%i==0) 
	  {
	   prost=0;
	   break;
	  }
	  i++;
	}
	return prost;
}
int main(){
	int i, n;
	cout<<"unesite broj za proveru"<<endl;
	cin>>n;
	for(i=3;i<=n;i++) 
 	if(prost(i+2) && prost(i))
    cout<<"("<<i<<" , "<<i+2<<" )";
}

//4.
class Tacka{
	private:
		int x;
		int y;
	public:
		void inicijalizacija(int x, int y){
			this->x=x;
			this->y=y;
		}
		void translacija(int dx, int dy){
			x+=dx;
			y+=dy;
		}
		void pozicija(){
			cout<<"tacke se nalaze na koordinatama x="<<x<<", y="<<y<<endl;
		}
};
int main(){
	Tacka t;
	t.inicijalizacija(3,5);
	t.translacija(2,2);
	t.pozicija();
	return 0;
}

//5.
class Post{
	private:
		char naslov[200];
		char opis[250];
		char vremedatumkreiranja[50];
		int rejting;
	public:
		void inicijalizacija(char *n, char *o, char *vdk){
			strcpy(naslov, n);
			strcpy(opis, o);
			strcpy(vremedatumkreiranja, vdk);
			rejting=0;
		}
		void inkrementiranje(){
			rejting++;
		}
		void dekrementiranje(){
			rejting--;
		}
		void ispis(){
			cout<<"naslov posta: "<<naslov<<endl;
			cout<<"opis posta: "<<opis<<endl;
			cout<<"vreme i datum kreiranja: "<<vremedatumkreiranja<<endl;
			cout<<"rejting: "<<rejting<<endl;
		}
};
int main(){
	Post p1, p2;
	p1.inicijalizacija("zadatak", "resiti zadati zadatak", "08.08.2023.");
	p2.inicijalizacija("trazi posao", "nauci da radis posao", "1.1.2025.");
	for(int i=0;i<5;i++){
		p1.inkrementiranje();
	}
	for(int i=0;i<7;i++){
		p2.inkrementiranje();
	}
	p1.dekrementiranje();
	p1.ispis();
	p2.ispis();
}

//6.
class Trougao{
	private:
		float x;
		float y;
		float z;
	public:
		void inicijalizacija(int x, int y, int z){
			this->x=x;
			this->y=y;
			this->z=z;
		}
		float obim(){
			return x+y+z;
		}
		float povrsina(){
			
			float s=poluobim();
			return sqrt(s*(s-x)*(s-y)*(s-z));
		}
		float poluobim(){
			return (x+y+z)/2;
		}
		bool provera(){
			if(x+y>z && x+z>y && y+z>x) return true;
			else return false;
		}
};
int main(){
	Trougao t;
	t.inicijalizacija(3,5,7);
	if(t.provera()==true){
		cout<<"obim zadatkog trouigla je: "<<t.obim()<<endl;
		cout<<"povrsina zadatkog trouigla je: "<<t.povrsina()<<endl;
	}
	else
		cout<<"od zadatih vrednosti ne moze se kreirati trougao"<<endl;
	return 0;
}

//7.
class Automobil{
	public:
		float rezervoar;
		float potrosnja;
		
		void inicijalizacija(float rezervoar, float potrosnja){
			this->rezervoar=rezervoar;
			this->potrosnja=potrosnja;
		}
		float predji(float km){
			if(rezervoar>=potrebnogoriva(km))
				rezervoar-=(km*potrosnja)/100;
			else
				cout<<"nemate dovoljno goriva za put"<<endl;
		}
		float potrebnogoriva(float km){
			return (km*potrosnja)/100;
		}
		void ispis(){
			cout<<"auto ima rezervoar od "<<rezervoar<<" litara i trosi "<<potrosnja<<
					"litara na 100km"<<endl;
		}
};
int main(){
	Automobil a;
	a.inicijalizacija(50, 5);
	a.predji(200);
	a.ispis();
	return 0;	
}

//8.
class Student{
	private:
		char ime[20];
		char prezime[20];
		int brIndeksa;
	public:
		void inicijalizacija(char *i, char *p, int brIndeksa){
			strcpy(ime, i);
			strcpy(prezime, p);
			this->brIndeksa=brIndeksa;
		}
		void ispis(){
			cout<<"ime studenta: "<<ime<<endl;
			cout<<"prezime studenta: "<<prezime<<endl;
			cout<<"broj indeksa: "<<brIndeksa<<endl;
		}
};
int main(){
	Student s1, s2;
	s1.inicijalizacija("Dzemil", "Manic", 13);
	s2.inicijalizacija("Ilhan", "Basic", 04);
	s1.ispis();
	s2.ispis();
}

//9.
class Tacka{
	private:
		int x;
		int y;
	public:
		Tacka(){
			x=5;
			y=3;
		}
		Tacka(int x, int y){
			this->x=x;
			this->y=y;
		}
		void ispis(){
			cout<<"x="<<x<<", y="<<y<<endl;
		}
};
int main(){
	Tacka t;
	t.ispis();
	return 0;
}

//10.
class Student{
	private:
		char ime[10];
		char prezime[10];
		char brIndeksa[10];
	public:
		Student(){
			strcpy(ime, "Dzemil");
			strcpy(prezime, "Manic");
			strcpy(brIndeksa, "036013");
			cout<<"pozvao se konstruktor bez argumenata"<<endl;
		}
		Student(char *i, char *p, char *bi){
			strcpy(ime, i);
			strcpy(prezime, p);
			strcpy(brIndeksa, bi);
			cout<<"pozvao se konstruktor sa argumentima"<<endl;
		}
		void ispis(){
			cout<<ime<<" "<<prezime<<" "<<brIndeksa<<endl;
		}
		~Student(){
			cout<<"pozvao se destruktor klase Student"<<endl;
		}
};
int main(){
	Student s1;
	Student s2("Ilhan", "Basic", "036048");
	s1.ispis();
	s2.ispis();
	return 0;
}

//11.
class Odeljenje{
	private:
		int brUcenika;
		float *uspeh;
	public:
		Odeljenje(int br=10){
			brUcenika=br;
			uspeh=new float[br];
			cout<<"unesite proseke ucenika"<<endl;
			for(int i=0;i<br;i++){
				cin>>uspeh[i];
			}
		}
		Odeljenje(int brUcenika, float prosek){
			this->brUcenika=brUcenika;
			
		}
		Odeljenje(const Odeljenje &o){
			brUcenika=o.brUcenika;
			for(int i=0;i<brUcenika;i++){
				uspeh[i]=o.uspeh[i];
			}
		}
		float prosek(){
			int s=0.0;
			for(int i=0;i<brUcenika;i++){
				s+=uspeh[i];
			}
			return s/(float)brUcenika;
		}
		int brOdlicnih5(){
			int brO=0;
			for(int i=0;i<brUcenika;i++){
				if(uspeh[i]==5.00)
					brO++;
			}
			return brO;
		}
		void ispis(){
			int brN=0, brD=0, brDo=0, brO=0;
			for(int i=0;i<brUcenika;i++){
				if(uspeh[i]<1.5) brN++;
				if(uspeh[i]<2.5 && uspeh[i]>1.5) brD++;
				if(uspeh[i]<3.5 && uspeh[i]>2.5) brDo++;
				if(uspeh[i]>4.5) brO++;
			}
			cout<<"broj nedovoljnih ucenika: "<<brN<<endl;
			cout<<"broj dovoljnih ucenika: "<<brD<<endl;
			cout<<"broj dobrih ucenika "<<brDo<<endl;
			cout<<"broj odlicnih ucenika: "<<brO<<endl;
		}
		void uspehUcenika(int i, double u){
			if(i<brUcenika && i>-1 && u<5.00)
				uspeh[i]=u;
		}
		void dodajUcenika(double u){
			uspeh[brUcenika]=u;
			brUcenika++;
		}
};
int main(){
	Odeljenje o1;
	o1.ispis();
	o1.prosek();
	o1.uspehUcenika(3,4.4);
}

//12.
class Prava{
	private:
		float x1;
		float y1;
		float x2;
		float y2;
		float d;
	public:
		Prava(){
			x1=2;
			y1=2;
			x2=5;
			y2=5;
		}
		Prva(float x1, float y1, float x2, float y2){
			this->x1=x1;
			this->y1=y1;
			this->x2=x2;
			this->y2=y2;
		}
		void racunajDuzinu(){
			d=sqrt((x2-x1,2)+(y2-y1,2));
		}
		void ispis(){
			cout<<"duzina duzi je: "<<d<<endl;
			cout<<"koordinate pocetne tacke su: "<<x1<<", "<<y1<<endl;
			cout<<"koordinate krajnje tacke su: "<<x2<<", "<<y2<<endl;
		}
		void setX1(float value){x1=value;}
		void setY1(float value){y1=value;}
		void setX2(float value){x2=value;}
		void setY2(float value){y2=value;}
		float getX1(){return x1;}
		float getY1(){return y1;}
		float getX2(){return x2;}
		float getY2(){return y1;}
		float getD(){return d;}
};
class Kvadrat{
	private:
		Prava vrh;
		Prava dno;
	public:
		Kvadrat(){
			dno.setY1(-1);
			dno.setY2(-1);
			vrh.racunajDuzinu();
			dno.racunajDuzinu();
		}
		Kvadrat(Prava v, Prava d){
			vrh.setX1(v.getX1());
			vrh.setY1(v.getY1());
			vrh.setX2(v.getX2());
			vrh.setY2(v.getY2());
			dno.setX1(v.getX1());
			dno.setY1(v.getY1());
			dno.setX2(v.getX2());
			dno.setY2(v.getY2());
			vrh.racunajDuzinu();
			dno.racunajDuzinu();
		}
		float Povrsina(){
			return pow(vrh.getD(),2);
		}
		float Obim(){
			return (4*vrh.getD());
		}
		void ispis(){
			cout<<"vrh kvadrata: "<<endl;
			vrh.ispis();
			cout<<"dno kvadrata: "<<endl;
			dno.ispis();
		}
};
int main(){
	Kvadrat k;
	Kvadrat();
	cout<<"povrsina kvadrata: "<<k.Povrsina()<<endl;
	cout<<"obim kvadrata: "<<k.Obim()<<endl;
	k.ispis();
	return 0;
}

//13.
class Ocena{
	private:
		char imePredmeta[30];
		int ocena;
		char datum[15];
	public:
		Ocena(){
			strcpy(imePredmeta, "OOP1");
			ocena=7;
			strcpy(datum, "25.08.");
		}
		Ocena(char *ip, int o, char *d){
			strcpy(imePredmeta, ip);
			ocena=o;
			strcpy(datum, d);
		}
		bool jeLiPolozio(){
			if(ocena>5) return true;
			return false;
		}
		void setIp(char *ip){strcpy(imePredmeta, ip);}
		void setO(int value){ocena=value;}
		void setD(char *d){strcpy(datum, d);}
		char *getIp(){return imePredmeta;}
		int getO(){return ocena;}
		char *getD(){return datum;}
		void ispis(){
      		cout<<"student je dobio ocenu "<<ocena<<", na predmetu "<<imePredmeta
			  <<"datuma "<<datum<<endl;
		}
};
class Student{
	private:
		char imePrezime[20];
		char brIndeksa[15];
		Ocena ocena1, ocena2, ocena3;
	public:
		Student(char *ip, char *bi, Ocena o1, Ocena o2, Ocena o3){
			strcpy(imePrezime, ip);
			strcpy(brIndeksa, bi);
			
			ocena1.setIp(o1.getIp());
			ocena1.setO(o1.getO());
			ocena1.setD(o1.getD());
			
			ocena2.setIp(o2.getIp());
        	ocena2.setO(o2.getO());
        	ocena2.setD(o2.getD());
       
        	ocena3.setIp(o3.getIp());
        	ocena3.setO(o3.getO());
        	ocena3.setD(o3.getD());
		}
		int ukupnoPolozenih(){
			int br=0;
			if(ocena1.jeLiPolozio()==true) br++;
			if(ocena2.jeLiPolozio()==true) br++;
			if(ocena3.jeLiPolozio()==true) br++;
			return br;
		}
		float prosek(){
			int s=0;
			if(ocena1.jeLiPolozio()==true)
				s+=ocena1.getO();
			if(ocena2.jeLiPolozio()==true)
				s+=ocena2.getO();
			if(ocena3.jeLiPolozio()==true)
				s+=ocena3.getO();
			return (float)s/ukupnoPolozenih();
		}
		void ispis(){
			cout<<"ime i prezime studenta i broj indeksa: "<<imePrezime<<", "<<brIndeksa<<endl;
			cout<<"ocene studenta: "<<endl;
			ocena1.ispis();
			ocena2.ispis();
			ocena3.ispis();
		}
};
int main(){
	Ocena o1, o2("OOP1", 7, "25.08."), o3("AiSP", 8, "15.07.");
	Student s("Dzemil Manic", "036013", o1, o2, o3);
	cout<<"studnet ima polozenih ispita: "<<s.ukupnoPolozenih()<<endl;
	cout<<"prosek: "<<s.prosek()<<endl;
	s.ispis();
	return 0;
}

//14.
class Poklon{
	float cena;
	int id;
	public:
		static int brojac;
		Poklon(float cena){
			this->cena=cena;
			brojac++;
			id=brojac;
		}
		Poklon(const Poklon &p){
			cena=p.cena;
			brojac++;
			id=brojac;
		}
		void ispis(){
			cout<<"cena: "<<cena<<endl;
		}
};
int Poklon::brojac=0;
int main(){
	Poklon p1(500), p2(1000);
	Poklon p3(p1);
	p1.ispis();
	p2.ispis();
	p3.ispis();
	cout<<"broj kreiranih objekata: "<<Poklon::brojac<<endl;
	return 0;
}

//15.
class Izvodjac{
	private:
		string naziv;
		Zanr zanr;
		string nadjiZanr(){
			switch(zanr){
				case 0: return "POP"; break;
				case 1: return "REP"; break;
				case 2: return "ROK"; break;
				default: return "greska"; break; 
			}
		}
	public:
		Izvodjac(){
			naziv="Ceca";
			zanr=POP;
		}
		Izvodjac(string naz, Zanr z){
			naziv=naz;
			zanr=z;			
		}
		Zanr getZ(){return zanr;}
		void ispis(){
			cout<<naziv<<"("<<nadjiZanr(zanr)<<")"<<endl;
		}
};
class Pesma{
	private:
		string naziv;
		int min, sek;
		Izvodjac *izv;
		int br, kap;
	public:
		Pesma(string naz, int m, int s, int k): naziv(naz), min(m), sek(s){
			kap=k;
			izv=new Izvodjac[kap];
			br=0;
		}
		int getMin(){return min;}
		int getSek(){return sek;}
		friend bool duze(const Pesma &p1, const Pesma &p2){
			if(p1.min>p2.min || p1.min==p2.min && p1.sek>p2.sek) return true;
			else return false;
		}
		void dodaj(Izvodjac *i){
			if(br<kap){
				izv[br++]=*i;
			}
		}
		void ispis(){
			cout<<"P("<<naziv<<"-"<<min<<":"<<sek<<")"<<endl;
			cout<<"izvodjaci: "<<endl;
			for(int i=0;i<br;i++)
				izv[i].ispis();
		}
};
int main(){
	Izvodjac iz1("Lukas", POP), iz2("Merlin", ROK), iz3("Juice", REP);
	Pesma p1("Pesma1", 3, 25, 2), p2("Pesma2", 2, 55, 1), p3("Pesma3", 3, 14, 1);
	iz1.ispis();
	iz2.ispis();
	iz3.ispis();
	p1.dodaj(&iz1);
	p1.dodaj(&iz2);
	p2.dodaj(&iz3);
	p3.dodaj(&iz1);
	p1.ispis();
	p2.ispis();
	p3.ispis();
	return 0;
}

//16.
class Student{
	private:
		string ime;
		int indeks;
		float prosek;
		FINANSIRANJE finansiranje;
		string nadjiFin(){
			switch(finansiranje){
				case 0: return "BUDZET";
				case 1: return "SAMOFINANSIRANJE";
			}
			//default: return "greska";
		}
		public:
		Student(){
			ime="Dzemil";
			finansiranje=BUDZET;
			prosek=0;
		}
		Student(string i, FINANSIRANJE f){
			ime=i;
			finansiranje=f;
			prosek=0;
		}
		string getIme(){return ime;}
		int getIndeks(){return indeks;}
		float getProsek(){return prosek;}
		FINANSIRANJE getFinans(){return finansiranje;}
		void setIndeks(int value){indeks=value;}
		void DodajO(int ocena){
			if(ocena>5 && ocena<=10){
				prosek=(prosek!=0)?(prosek+ocena)/2:ocena;
			}
			else
				cout<<"ocena nije validna";
		}
		void ispis(){
			cout<<ime<<"-"<<indeks<<"("<<finansiranje<<")"<<endl;
		}
};
class StudijskiProgram{
	string naziv;
	int max;
	Student *studenti;
	int br;
	float getProsekSP(){
		float s=0;
		for(int i=0;i<br;i++)
			s+=studenti[i].getProsek();
		return s/br;
	}
	public:
		StudijskiProgram(string n, int m){
			naziv=n;
			max=m;
			studenti=new Student[MAX];
			br=0;
		}
		StudijskiProgram(){
			naziv="SI";
			max=60;
		}
		void dodajStudenta(Student *s){
			if(br<max){
				int brojIndeksa=(br>0) ? studenti[br-1].getIndeks()+1: 1;
				studenti[br]=*s;
				studenti[br].setIndeks(brojIndeksa);
				br++;
			}
			else
				cout<<"nema mesta za novog studenta"<<endl;
		}
		void brisiStudenta(){
			if(br>0)
				br--;
		}
		friend bool bolji(const StudijskiProgram &sp1, const StudijskiProgram &sp2){
			if(sp1.getProsekSP()>sp2.getProsekSP()) 
				return true;
			else
				return false;
		} 
		void ispis(){
			cout<<naziv<<endl;
			for(int i=0;i<br;i++)
				studenti[i].ispis();
			cout<<"na SP "<<naziv<<" ima "<<br<<"studenata i prosek SP je "<<getProsekSP()<<endl;
		}
};
int main(){
	Student s1, s2("Samir", BUDZET), s3("Hamza", SAMOFINANSIRANJE);
	s1.ispis();
	s2.ispis();
	s3.ispis();
	s1.DodajO(10);
	s1.DodajO(9);
	s2.DodajO(8);
	s3.DodajO(8);
	StudijskiProgram sp1, sp2("RT", 50);
	sp1.dodajStudenta(&s1);
	sp1.dodajStudenta(&s2);
	sp2.dodajStudenta(&s3);
	sp1.ispis();
	sp2.ispis();
	return 0;
}

//17.
class Vektor{
	private:
		int v[3];
	public:
		Vektor(int niz[3]){
			for(int i=0;i<3;i++){
				v[i]=niz[i];
			}
		}
		Vektor(){
			v[0]=1;
			v[1]=2;
			v[2]=3;
		}
		void setX(int value){v[0]=value;}
		void setY(int value){v[1]=value;}
		void setZ(int value){v[2]=value;}
		int getX(){return v[0];}
		int getY(){return v[1];}
		int getZ(){return v[2];}
		void ispis(){
			cout<<"elementi vektora v(";
			for(int i=0;i<3;i++)
				cout<<" "<<v[i];
			cout<<")"<<endl;
		}
		Vektor dodaj(const Vektor v2){
			Vektor v3=*this;
			for(int i=0;i<3;i++){
				v3.v[i]+=v2.v[i];
			}
			return v3;
		}
		Vektor pomnozi(int k){
			Vektor v3=*this;
			for(int i=0;i<3;i++){
				v3.v[i]*=k;			
			}
			return v3;
		}
		Vektor operator +(Vektor v2){
			Vektor v3=*this;
			for(int i=0;i<3;i++){
				v3.v[i]+=v2.v[i];
			}
			return v3;
		}
		Vektor operator *(int k){
			Vektor v3=*this;
			for(int i=0;i<3;i++){
				v3.v[i]*=k;
			}
			return v3;
		}
		Vektor operator ++(){
			Vektor v3=*this;
			for(int i=0;i<3;i++){
				v3.v[i]++;
			}
			return v3;
		}
		Vektor operator ++(int){
			Vektor v3=*this;
			for(int i=0;i<3;i++){
				v3.v[i]++;
			}
			return v3;
		}
		Vektor operator -(){
			Vektor v3=*this;
			for(int i=0;i<3;i++){
				v3.v[i]*=-1;
			}
		}
		const Vektor & operator =(const Vektor & v2){
			if(&v2==this)
				return *this;
			for(int i=0;i<3;i++){
				v[i]=v2.v[i];
			}
			return *this;
		}
		int & operator[](int i){
			return v[i];
		}
};
int main(){
	int vv2[3]={4, 5, 6}, vv3[3]={7, 8, 9};
	Vektor v1, v2(vv2), v3(vv3);
	v1.ispis();
	v2.ispis();
	v3.ispis();
	Vektor v4=v1+v2;
	v4.ispis();
	Vektor v5=v3++;
	v5.ispis();
	Vektor v6=v2*2;
	v6.ispis();
	return 0;
}

//18.
class Razlomak{
	private:
		int broj;
		int imen;
	public:
		Razlomak(int a, int b){
			broj=a;
			imen=b;
		}
		void setBroj(int value){broj=value;}
		void setImen(int value){imen=value;}
		int getBroj(){return broj;}
		int getImen(){return imen;}
		void ispis(){
			cout<<broj<<"/"<<imen<<endl;
		}
		Razlomak operator +(Razlomak r3){
			Razlomak r2(broj*r3.imen+imen*r3.broj, imen*r3.imen);
			return r2;
		}
		Razlomak operator *(int k){
			Razlomak r2(broj*k, imen);
			return r2;
		}
		Razlomak & operator =(const Razlomak &r3){
			if(&r3==this)
				return *this;
			broj=r3.broj;
			imen=r3.imen;
			return *this;
		}
		Razlomak operator ++(){
			broj++;
			imen++;
			return *this;
		}
		Razlomak operator ++(int){
			Razlomak r3=*this;
			r3.broj++;
			r3.imen++;
			return r3;
		}
		Razlomak operator -(){
			Razlomak r3=*this;
			r3.broj*=-1;
			return r3;
		}
		friend ostream & operator <<(ostream &out, Razlomak &r){
			out<<r.broj<<"/"<<r.imen<<endl;
			return out;
		}
		friend istream & operator >>(istream &in, Razlomak &r){
			cout<<"unesite brojilac i imenilac: "<<endl;
			in>>r.broj>>r.broj;
		}
};
int main(){
	Razlomak r1(1,2), r2(3,4), r3(5,6);
	cout<<r1;
	cout<<r2;
	cout<<r3;
	Razlomak r4=r1+r2;
	Razlomak r5=r2++;
	cout<<r4;
	cout<<r5;
	return 0;
}

//19.
class Kvadar{
	protected:
		int a;
		int b;
		int c;
	public:
		Kvadar(int a, int b, int c){
			this->a=a;
			this->b=b;
			this->c=c;
			cout<<"pozvao se konstruktor sa argumentima"<<endl;
		}
		Kvadar(){
			a=10;
			b=20;
			c=10;
			cout<<"pozvao se konstruktor bez argumenata"<<endl;
		}
		void ispis(){
			cout<<"dimenzije kvadra su: "<<a<<", "<<b<<", "<<c<<endl;
		}
};
class Bazen:Kvadar{
	protected:
		int d;
	public:
		Bazen(int d){
			this->d=d;
			cout<<"pozvao se konstruktor sa argumentima"<<endl;
		}
		Bazen(){
			d=3;
			cout<<"pozvao se konstruktor bez argumenata"<<endl;
		}
		void ispis(){
			Kvadar::ispis();
			cout<<"dubina bazena napunjenja vodom je "<<d<<endl;
		}
};
int main(){
	Bazen b;
	b.ispis();
}

//20.
class Datum{
	public:
		int dan, mesec, godina;
	public:
		Datum(int dan, int mesec, int godina){
			this->dan=dan;
			this->mesec=mesec;
			this->godina=godina;
		}
		Datum(){
			dan=01;
			mesec=02;
			godina=2023;
		}
		void ispis(){
			cout<<"danas je "<<dan<<"."<<mesec<<"."<<godina<<"."<<endl;
		}
		Datum uporedi(Datum d){
			Datum r;
			if(dan>d.dan){
				r.dan=dan-d.dan;
			}
			else{
				mesec--;
				switch(mesec){
					case 1: case 3: case 5: case 7: case 8: case 10: case 12:
						dan+=31; break;
					case 4: case 6: case 9: case 11:
						dan+=30; break;
					case 2: dan+=((godina%4==0 && godina%100!=0) || godina%400==0)?29:28;
							break;
				}
				r.dan=dan-d.dan;
			}
			if(mesec>d.mesec){
				r.mesec=mesec-d.mesec;
			}
			else{
				godina--;
				mesec+=12;
				r.mesec=mesec-d.mesec;
			}
			if(godina>d.godina){
				r.godina=godina-d.godina;
			}
			else{
				cout<<"drugi datum je veci od prvog i ne moze se izmeriti razlika"<<endl;
			}
			return r;
		}
};
class Rodjendan: public Datum{
	public:
		string ime, prezime;
	public:
		Rodjendan(string ime, string prezime){
			this->ime=ime;
			this->prezime=prezime;
		}
		Rodjendan(): Datum(24,5,2004){
			ime="Dzemil";
			prezime="Manic";
		}
		bool daLiJe(Datum dt){
			Datum razlika=uporedi(dt);
			if(razlika.dan==0 && razlika.mesec==0)
				return true;
			return false;
		}
		void ispisSlavljenika(Datum dat){
			if(daLiJe(dat)==true)
				cout<<ime<<" "<<prezime<<"danas slavi rodjendan"<<endl;
			else{
				Datum razlika=uporedi(dat);
			   cout<<"do rodjendana ima jos "<<razlika.dan<<"dana i "<<razlika.mesec<<"meseci"<<endl;
			}
		}
		int godine(Datum dat){
			Datum razlika=uporedi(dat);
			return razlika.godina;
		}
};
int main(){
	Rodjendan r;
	r.ispis();
}

//21.
class Proizvod{
	protected:
		int barKod;
		float cena;
		int kolicina;
	public:
		Proizvod(int barKod, float cena, int kolicina){
			this->barKod=barKod;
			this->cena=cena;
			this->kolicina=kolicina;
		}
		Proizvod(){
			barKod=100;
			cena=550;
			kolicina=30;
		}
		void ispis(){
			cout<<"podaci o proizvodu: "<<endl;
			cout<<"barKod, cena, kolicina"<<endl;
			cout<<barKod<<", "<<cena<<", "<<kolicina;
		}
};
class Radnik{
	protected:
		string ime;
		string prezime;
	public:
		Radnik(string ime, string prezime){
			this->ime=ime;
			this->prezime=prezime;
		}
		Radnik(){
			ime="Nazim";
			prezime="Manic";
		}
		void ispis(){
			cout<<"podaci o radniku: "<<endl;
			cout<<ime<<prezime<<endl;
		}
};
class Prodavnica: public Proizvod, public Radnik{
	public:
		int brRadnihSati;
		int cenaPoSatu;
	public:
		Prodavnica(){
			barKod=555;
			cena=300;
			kolicina=10;
			ime="Ilhan";
			prezime="Basic";
			brRadnihSati=180;
			cenaPoSatu=1800;
		}
		Prodavnica(int brRadnihSati, int cenaPoSatu): Radnik(),Proizvod(){
			this->brRadnihSati=brRadnihSati;
			this->cenaPoSatu=cenaPoSatu;
		}
		void ispis(){
			cout<<"sati rada: "<<brRadnihSati<<endl;
			cout<<"cena po satu: "<<cenaPoSatu<<endl;
		}
		int plata(){
			return brRadnihSati*cenaPoSatu;
		}
		int prodaj(int kolicina){
			this->kolicina-=kolicina;
		}
};
int main(){
	Prodavnica p1, p2(150,1000);
	p1.ispis();
	p2.ispis();
}

//22.
class Dosije{
	protected:
		string ime;
		string prezime;
		int indeks;
	public:
		Dosije(){
			ime="Dzemil";
			prezime="Manic";
			indeks=036013;
		}
		Dosije(string i, string p, int ind){
			ime=i;
			prezime=p;
			indeks=ind;
		}
		void predstaviSe(){
			cout<<"ja sam "<<ime<<" "<<prezime<<", broj indeksa "<<indeks<<endl;
		}
};
class Predmet{
	protected:
		string imeProf;
		string prezimeProf;
		string nazivPredmeta;
	public:
		Predmet(){
			imeProf="Bratislav";
			prezimeProf="Miric";
			nazivPredmeta="OOP1";
		}
		Predmet(string ip, string pp, string np){
			imeProf=ip;
			prezimeProf=pp;
			nazivPredmeta=np;
		}
		void opisPredmeta(){
			cout<<"predmet "<<nazivPredmeta<<"drzi prof. "<<imeProf<<" "<<prezimeProf<<endl;
		}
};
class Ispit: protected Dosije, protected Predmet{
	private:
		int ocena;
		string datum;
	public:
		Ispit(string i, string p, int ind, string ip, string pp, string np, int o, string d):
			Dosije(i,p,ind), Predmet(ip,pp,np){
				ocena=o;
				datum=d;
			}
		Ispit(): Dosije(), Predmet(){
			ocena=10;
			datum="25.08.2023.";
		}
		void ispis(){
			cout<<"ocena na ispitu: "<<ocena<<endl;
			cout<<"datum polaganja: "<<datum<<endl;
		}
		bool jeLiPolozio(){
			if(ocena>5 && ocena<=10) return true;
			return false;
		}
};
int main(){
	Ispit i1;
    Ispit i2("Ilhan", "Basic", 030444, "Bratislav", "Miric", "OOP1", 8, "1.2.2022.");
    i1.ispis();
    i2.ispis();
    if(i1.jeLiPolozio())
        cout<<"prvi student je polozio"<<endl;
    if(i2.jeLiPolozio())
        cout<<"drugi student je polozio"<<endl;
    return 0;
}

//23.
class Linearna{
	protected:
		float b;
		float c;
	public:
		Linearna(){
			b=2;
			c=4;
		}
		Linearna(float b, float c){
			this->b=b;
			this->c=c;
		}
		virtual void Resenja(){
			if(b!=0){
				float x=-c/b;
				cout<<"resenje linearne jednacine je: "<<x<<endl;
			}
			else
				cout<<"linearna jednacina nema resenja"<<endl;
		}
		virtual void ispis(){
			cout<<"linearna jednacina ima oblik: "<<endl;
			cout<<b<<"x+"<<c<<"=0"<<endl;
		}
};
class Kvadratna: protected Linearna{
	protected:
		float a;
	public:
		Kvadratna():Linearna(){
			a=3;
		}
		Kvadratna(float a, float b, float c):Linearna(b,c){
			this->a=a;
		}
		void Resenja(){
			float d=b*b-4*a*c;
			if(d<0)
				cout<<"kvadratna jednacina nema realnih resenja"<<endl;
			if(d==0){
				float x=-b/2*a;
				cout<<"kvadratna jednacina ima jedno resenje i to je "<<x<<endl;
			}
			if(d>0){
				float x1=(-b+sqrt(b*b-4*a*c));
				float x2=(-b-sqrt(b*b-4*a*c));
				cout<<"kv. jednacina ima dva resenja i to x1="<<x1<<", x2="<<x2<<endl;
			}
		}
		void ispis(){
			cout<<"kvadratna jednacina ima oblik: "<<endl;
			cout<<a<<"x2+"<<b<<"x+"<<c<<"=0"<<endl;
		}
};
int main(){
	Linearna l(2, 5);
    Kvadratna k(3,10,4);
    l.ispis();
    k.ispis();
    l.Resenja();
    k.Resenja();
    return 0;
}

//24.
class Izraz1{
	protected:
		char op1;
		int operand1;
		int operand2;
		double vrednostIzraza(int operand1, int operand2, char op1){
			switch(op1){
				case '+': return operand1+operand2;
				case '-': return operand1-operand2;
				case '*': return operand1*operand2;
				case '/': return (operand2!=0)?operand1/operand2 : 0; 
			}
			return 0;
		}
	public:
		Izraz1(){
			op1='+';
			operand1=2;
			operand2=5;
		}
		Izraz1(int o1, int o2, int op1){
			operand1=o1;
			operand2=o2;
			this->op1=op1;
		}
		void setOp1(char value){op1=value;}
		void setOperand1(int value){operand1=value;}
		void setOperand2(int value){operand2=value;}
		char getOp1(){return op1;}
		int getOperand1(){return operand1;}
		int getOperand2(){return operand2;}
		virtual double Izracunaj(){
			return vrednostIzraza(operand1,operand2,op1);
		}
		virtual void ispis(){
			cout<<"operandi su: "<<operand1<<" i "<<operand2<<". operator "<<op1<<endl;
		}
};
class Izraz2: Izraz1{
	private:
		char op2;
		int operand3;
	public:
		Izraz2():Izraz1(){
			op2='*';
			operand3=5;
		}
		Izraz2(int operand1, int operand2, char op1, int operand3, char op2)
			:Izraz1(operand1, operand2, op1){
				this->operand3=operand3;
				this->op2=op2;
		}
		void setOperand3(int value){operand3=value;}
		void setOp2(char value){op2=value;}
		int getOperand3(){return operand3;}
		char getOp2(){return op2;}
		virtual double izracunaj(){
			if(op1=='*' || op1=='/'){
				double r1=vrednostIzraza(operand1, operand2, op1);
				return vrednostIzraza(r1, operand3, op2);
			}
			if(op2=='*' || op2=='/'){
				double r1=vrednostIzraza(operand2, operand3, op2);
				return vrednostIzraza(operand1, r1, op1);
			}
			else{
				double r1=vrednostIzraza(operand1, operand2, op1);
				return vrednostIzraza(r1, operand3, op2);
			}
		}
		void ispis(){
			cout<<operand1<<op1<<operand2<<op2<<operand3<<"="<<izracunaj()<<endl;
		}
};
int main(){
	Izraz1 i1;
	Izraz2 i2;
	i1.ispis();
	i2.ispis();
}

//25.
class Krug{
	protected:
		float r;
	public:
		Krug(){
			r=3;
		}
		Krug(float r){
			this->r=r;
		}
		virtual float povrsina(){
			float p=r*r*PI;
			cout<<"povrsina kruga precnika "<<r<<" je "<<p<<endl;
		}
		void setPp(float value){r=value;}
		float getPp(){return r;}
};
class KruzniIsecak: protected Krug{
	protected:
		int alfa;
	public:
		KruzniIsecak(float r, int alfa):Krug(r){
			this->alfa=alfa;
		}
		KruzniIsecak(){
			alfa=90;
			r=3;
		}
		float Povrsina(){
			return Krug::povrsina()*alfa/360;
		}
};
class KruzniPrsten: protected Krug{
	Krug *unutrasnji;
    public:
    KruzniPrsten(float ppu,float pps):Krug(pps){
        unutrasnji=new Krug(ppu);
    }
    float Povrsina(){
        return Krug::povrsina()-unutrasnji->povrsina();
    }
};
int main()
{
    Krug k(2);
    KruzniPrsten ki(2,180);
    KruzniPrsten kp(2,5);
    cout<<"povrsina kruga je "<<k.povrsina()<<endl;
    cout<<"povrsina kruznog isecka  je "<<ki.Povrsina()<<endl;
    cout<<"povrsina kruznog stepena je "<<kp.Povrsina()<<endl;
    return 0;
}

//26.
template <class T>
void razmena(T &a, T &b){
	T pom;
	pom=a;
	a=b;
	b=pom;
}
int main(){
	int a, b;
	char c, d;
	cout<<"unesite dva broja, a i b"<<endl;
	cin>>a>>b;
	razmena(a,b);
	cout<<"brojevi nakon razmene: "<<a<<" "<<b<<endl;
	cout<<"unesite dva karaktera: "<<endl;
	cin>>c>>d;
	razmena(c,d);
	cout<<"karakteri posle razmene: "<<c<<" "<<d<<endl;
}

//27.
template <class T1>
void unos(T1 *niz, int n){
	cout<<"unesite elemente niza: "<<endl;
	for(int i=0;i<n;i++)
		cin>>niz[i];
}
template <class T2>
void ispis(T2 *niz, int n){
	cout<<"elementi niza su: "<<endl;
	for(int i=0;i<n;i++)
		cout<<niz[i];
}
template <class T3>
double srednjaVrednost(T3 *niz, int n){
	T3 suma=0;
	for(int i=0;i<n;i++)
		suma+=niz[i];
	return suma/n;
}
int main(){
	int *niz, n;
	cout<<"unesite broj elemenata niza"<<endl;
	cin>>n;
	unos(niz,n);
	cout<<"srednja vrednost niza je "<<srednjaVrednost(niz,n)<<endl;
}
//28.

class Radnik{
	public:
		string ime;
		string prezime;
		int plata;
	public:
		Radnik(){
			ime="Dzemil";
			prezime="Manic";
			plata=250000;
		}
		Radnik(string ime, string prezime, int plata){
			this->ime=ime;
			this->prezime=prezime;
			this->plata=plata;
		}
		void ispis(){
			cout<<"podaci o radniku: "<<endl;
			cout<<"ime radnika: "<<ime<<endl;
			cout<<"prezime radnika: "<<prezime<<endl;
			cout<<"plata radnika: "<<plata<<endl;
		}
};
class Sef{
	public:
		string ime;
		string prezime;
		int plata;
	public:
		Sef(){
			ime="Nazim";
			prezime="Manic";
			plata=400000;
		}
		Sef(string ime, string prezime, int plata){
			this->ime=ime;
			this->prezime=prezime;
			this->plata=plata;
		}
		void ispis(){
			cout<<"podaci o sefu: "<<endl;
			cout<<"ime sefa: "<<ime<<endl;
			cout<<"prezime sefa: "<<prezime<<endl;
			cout<<"plata sefa: "<<plata<<endl;
		}
};
template<class E, int k=10>
class Firma{
	public:
		E *niz;
		int brRadnika;
	public:
		Firma(){
			brRadnika=k;
			niz=new E[k];
			for(int i=0;i<brRadnika;i++)
				niz[i]=new Radnik();
		}
		void plate(){
			for(int i=0;i<brRadnika;i++){
				niz[i]->ispis();
				cout<<endl;
			}
		}
};
int main(){
	Radnik *r;
	Sef *s;
	r=new Radnik();
	s=new Sef();
	Firma<Radnik, 3> f;
	f.niz[1]=r;
	f.niz[2]=r;
	f.plate();
}

//29.
class Odgovor{
	string tekst;
	bool tacan;
	double procenat;
	public:
		Odgovor(string tekst="", bool tacan=false, double procenat=0){
			this->tekst=tekst;
			this->tacan=tacan;
			this->procenat=procenat;
		}
		Odgovor(const Odgovor &o){
			tekst=o.tekst;
			tacan=o.tacan;
			procenat=o.procenat;
		}
		void setTacan(bool value){tacan=value;}
		void setProcenat(double value){if(procenat>=-100 && procenat<=100) procenat=value;}
		
		string getTekst(){return tekst;}
		bool getTacan(){return tacan;}
		double getProcenat(){return procenat;}
		friend ostream & operator <<(ostream& os, Odgovor& o){
        	os<<o.tekst<<": "<<o.procenat<<"%"<<endl;
        	return os;
    	}
    	Odgovor& operator =(const Odgovor &o){
        	if(this==&o)
          	  return *this;
        	tekst=o.tekst;
        	tacan=o.tacan;
        	procenat=o.procenat;
        	return *this;
    	}
};
class Pitanje{
	public:
		string tekst;
		double poeni;
		int brOdgovora;
		Odgovor* ponudjeni;
		int trenutnoOdgovora;
	public:
		Pitanje(int brOdgovora=5, string tekst="", double poeni=0){
			this->brOdgovora=brOdgovora;
			ponudjeni= new Odgovor[brOdgovora];
			trenutnoOdgovora=0;
			this->tekst=tekst;
			this->poeni=poeni;
		}
		Pitanje(const Pitanje &p){
			brOdgovora=p.brOdgovora;
			ponudjeni= new Odgovor[brOdgovora];
			trenutnoOdgovora=p.trenutnoOdgovora;
			tekst=p.tekst;
			poeni=p.poeni;
			for(int i=0;i<trenutnoOdgovora;i++)
				ponudjeni[i]=p.ponudjeni[i];
		}
		Pitanje operator +=(const Odgovor &o){
			if(trenutnoOdgovora<brOdgovora){
				ponudjeni[trenutnoOdgovora]=o;
				trenutnoOdgovora++;
				double proc=100;
				int brTacnih=0;
				for(int i=0;i<trenutnoOdgovora;i++){
					if(ponudjeni[i].getTacan())
						brTacnih++;
				}
				proc=brTacnih>0 ? (double)100/brTacnih : 100;
				for(int i=0;i<trenutnoOdgovora;i++){
					if(ponudjeni[i].getTacan()==true)
						ponudjeni[i].setProcenat(proc);
					else
						ponudjeni[i].setProcenat(-100);
				}
			}
		}
		double Odgovori(int niz[], int n){
			double p=0;
			for(int i=0;i<n;i++){
				if(ponudjeni[niz[i-1]].getTacan()==false)
					return 0;
				p++;
			}
			double proc=0;
			for(int i=0;i<n;i++){
				if(ponudjeni[i].getTacan()==true)
					proc=ponudjeni[i].getProcenat();
					break;
			}
			return (p*proc/100)*poeni;
		}
		friend ostream& operator <<(ostream& os, Pitanje& p){
			os<<p.tekst<<":"<<p.poeni<<endl;
			for(int i=0;i<p.trenutnoOdgovora;i++)
				os<<p.ponudjeni[i];
			return os;
		}
};
int main(){
	
	return 0;
}

//30.	JUL 2023
class Glumac{
	private:
		string ime;
		Zanr zanr;
		string nadjiZanr(Zanr zanr){
			switch(zanr){
				case 0: return "AKCIJA"; break;
				case 1: return "DRAMA"; break;
				case 2: return "KOMEDIJA"; break;
				default: return "GRESKA"; break;
			}
		}
	public:
		Glumac(string ime, Zanr zanr){
			this->ime=ime;
			this->zanr=zanr;
		}
		Glumac(){
			ime="Stalone";
			zanr=AKCIJA;
		}
		Zanr getZanr(){return zanr;}
		void ispis(){
			cout<<ime<<"("<<zanr<<")"<<endl;
		}
};
class Film{
	private:
		string naziv;
		int min, sek;
		int max, br;
		Glumac *gl;
	public:
		Film(){
			naziv="Transporter";
			min=120;
			sek=45;
			max=15;
			br=0;
		}
		int getMin(){return min;}
		int getSek(){return sek;}
		friend bool duzi(const Film &f1, const Film &f2){
			if(f1.min>f2.min || f1.min==f2.min && f1.sek>f2.sek) return true;
			return false;
		}
		void dodaj(Glumac *g){
			if(br<max)
				gl[br++]=*g;
		}
		void ispis(){
			cout<<"F("<<naziv<<"-"<<min<<":"<<sek<<")"<<endl;
			for(int i=0;i<br;i++){
				gl[i].ispis();
			}
		}
};
class FilmskiRepertoar{
	private:
		int umin, usek, brf;
		Film *f;
	public:
		FilmskiRepertoar(){
			umin=0;
			usek=0;
			brf=0;
		}
		friend void dodaj(Film *fi){
			f[brf++]=*fi;
			umin+=fi.getMin();
			usek+=fi.getSek();
			umin+=usek/60;
			usek%=60;
		}
		void sortiraj(){
			for(int i=0;i<brf;i++){
				for(int j=0;j<brf-i-1;j++){
					if(f[j].duzi(f[j+1])){
						swap(f[j], f[j+1]);
					}
				}
			}
		}
};
int main(){

	return 0;
}

//31.   JUL 2023
class Entitet{
	protected:
		string ime;
    	double precnik;
		double gravitacija;
	public:
		Entitet(string ime, double precnik, double gravitacija){
			this->ime=ime;
			this->precnik=precnik;
			this->gravitacija=gravitacija;
		}
		virtual void prikaziInformacije(){
			cout<<"podaci o entitetu: "<<endl;
			cout<<"ime: "<<ime<<endl;
			cout<<"precnik: "<<precnik<<endl;
			cout<<"gravitacija: "<<gravitacija<<endl;
		}
};
class Planeta: public Entitet{
	protected:
		int brStanovnika;
	public:
		Planeta(string ime, double precnik, double gravitacija):Entitet(ime,precnik,gravitacija){
			brStanovnika=150000;
		}
		void prikaziInformacije() override{
			Entitet::prikaziInformacije();
			cout<<"broj stanovnika: "<<brStanovnika<<endl;
		}
};
class Sunce: public Entitet{
	public:
		Sunce(string n, double p, double g):Entitet(n,p,g){}
		void prikaziInformacije() override{
			Entitet::prikaziInformacije();
		}
};
class SuncevSistem{
	private:
		Sunce sunce;
		Planeta planeta[10];
		int brp;
	public:
		SuncevSistem(Sunce &s): sunce(s), brp(0){}
		void dodaj(Planeta *p){
			if(brp<10){
				planeta[brp++]=p;
			}
		}
		Planeta* operator [](int indeks){
			if(indeks>=0 && indeks<brp)
				return planeta[indeks];
		}
		SuncevSistem operator +(Planeta *p){
			dodaj(p);
			return *this;
		}
		friend void prikaziInformacije(){
			Entitet::prikaziInformacije();
		}
};
int main(){
	
	return 0;
}

//32. 	FEBRUAR 2021
class Artikal{
	private:
		string naziv;
		float cena;
		int popust;
	public:
		Artikal(){
			naziv="napolitanke";
			cena=120;
			popust=0;
		}
		Artikal(string n, float c, int p){
			naziv=n;
			cena=c;
			popust=p;
		}
		void ispis1(){
			cout<<"naziv artikla: "<<naziv<<endl;
			cout<<"cena artikla: "<<cena<<endl;
			cout<<"popust na artiklu: "<<popust<<endl;
		}
		void ispis2(){
			float cenaSaPopustom=cena-popust;
			cout<<naziv<<"("<<cenaSaPopustom<<")"<<endl;
		}
		float getCena(){return cena-popust;}
		string getNaziv(){return naziv;}
};
class Stavka{
	private:
		Artikal *a;
		int kolicina;
		int redniBroj;
	public:
		Stavka(){
			kolicina=5;
			redniBroj=1;
		}
		float iznos(){
			return a->getCena()*kolicina;
		}
		Stavka(const Stavka &s){
			kolicina=s.kolicina;
			redniBroj=s.redniBroj;
		}
		void ispis(){
			cout<<"s "<<redniBroj<<"("<<a->getNaziv()<<"):"<<kolicina<<"|"<<iznos<<endl;
		}
};
int main(){
	Stavka s1(), s2(2,2);
}

//33.
class Nalepnica{
	private:
		string naziv;
		int id;
		static int brojac;
	public:
		Nalepnica(string naziv){
			this->naziv=naziv;
			brojac++;
			id=brojac;
		}
		void ispis(){
			cout<<"naziv i id: "<<naziv<<", "<<id<<endl;
		}
		string getNaziv(){return naziv;}
};
int Nalepnica::brojac=0;
class Flasa: public Nalepnica{
	private:
		Nalepnica *n;
		int cenaBezKaucije;
		float zapremina;
		VrstaPica vrstaPica;
		string nadjiPice(){
			switch(vrstaPica){
				case 0: return "BEZALKOHOLNO";
				case 1: return "ALKOHOLNO";
			}
		}
	public:
		Flasa(){
			cenaBezKaucije=42;
			zapremina=0.33;
			vrstaPica=BEZALKOHOLNO;
		}
		Flasa(int cenaBezKaucije, float zapremina, VrstaPica vrstaPica){
			this->cenaBezKaucije=cenaBezKaucije;
			this->zapremina=zapremina;
			this->vrstaPica=vrstaPica;
		}
		void setCena(int value){cenaBezKaucije=value;}
		void ispis(){
			cout<<"cena bez kaucije: "<<cenaBezKaucije<<endl;
			cout<<"zapremina: "<<zapremina<<"l"<<endl;
		}
		float cenaFlase(){
			return       
		}
		bool provera(Flasa &f1, Flasa &f2){
			if(f1.getNaziv()==f2.getNaziv() && f1.vrstaPica==f2.vrstaPica && f1.cSk==f2.cSk)
				return true;
			return false;
		}
};

//34. 	SEPTEMBAR 2020
class Sastojak{
	private:
		string ime;
		int cenaKg;
		Vrsta vrsta;
		string nadjiVrstu(Vrsta vrsta){
			switch(vrsta){
				case 0: return "SLAN";
				case 1: return "SLAD";
				case 2: return "NEUT";
			}
		}
	public:
		Sastojak(){
			ime="Krompir";
			cenaKg=100;
		}
		string getVrsta(){
		//	return vrsta;
		}
		float cenaGr(float grama){
			float s=cenaKg*(grama/1000);
			return s;
		}
		void ispis(){
			cout<<ime<<"-"<<cenaKg<<"/kg"<<endl;
		}
};
class Jelo{
	private:
		string ime;
		Sastojak *s;
		int kolicinaGr;
		int kapacitet;
		double postoPromene;
		int satCijene;
	public:
		Jelo(){
			ime="Pire";
			kolicinaGr=300;
			kapacitet=5;
			s=new Sastojak[kapacitet];
			
		}
		void dodajSastojak(Sastojak &sast, int kolicina){
			if(br==kapacitet){
				cout<<"pun kapacitet"<<endl;
			}
			s[br++]=sast;
			kolicinaGr+=kolicina;
		}
		double cijenaJela(){
			double uk=0;
			for(int i=0;i<kapacitet;i++)
				uk=s[i].cenaGr(kolicinaGr);
			
		}
		
};
*/
//35.
class Proizvod{
	protected:
		string barKod;
		double cena;
		int kolicina;
	public:
		Proizvod(){
			barKod="012ABD";
			cena=1000;
			kolicina=1;
		}
		Proizvod(string bk, double c, int k){
			barKod=bk;
			cena=c;
			kolicina=k;
		}
		virtual bool provera() const=0;
		virtual void ispisiProizvod(ostream& os)const{
			os<<"Bar kod: "<<barKod<<endl;
			os<<"cena: "<<cena<<endl;
			os<<"kolcina: "<<kolicina<<endl;
		}
		friend ostream& operator <<(ostream& os, const Proizvod& p){
			p.ispisiProizvod(os);
			return os;
		}
		string getBarKod(){return barKod;}
};
class Kondenzator: public Proizvod{
	protected:
		double kapacitativnost;
	public:
		Kondenzator(double kap, string bk, double c, int k):Proizvod(bk,c,k){
			kapacitativnost=kap;
		}
		bool provera() const override{
			return (kapacitativnost==0);
		}
		void ispisiProizvod(ostream& os) const override{
			os<<"kondenzator: "<<endl;
			Proizvod::ispisiProizvod(os);
			os<<"kapacitativnost: "<<kapacitativnost<<endl;
			if(provera())
				os<<"proizvod je defektan"<<endl;
			else
				os<<"proizvod nije defektan"<<endl;
		}
		friend ostream& operator <<(ostream& os, const Kondenzator& k){
			k.ispisiProizvod(os);
			return os;
		}
};
class Otpornik: public Proizvod{
	private:
		double otpornost;
		double minOperTemp;
		double maxOperTemp;
	public:
		Otpornik(double ot, double min, double max, string bk, double c, int k):Proizvod(bk,c,k){
			otpornost=otpornost;
			minOperTemp=min;
			maxOperTemp=max;
		}
		bool provera() const override{
			return (otpornost==0 || otpornost==numeric_limits<double>::infinity());
		}
		void ispisiProizvod(ostream& os) const override{
			os<<"otpornik: "<<endl;
			Proizvod::ispisiProizvod(os);
			os<<"otpornost: "<<otpornost<<endll
			os<<"min operativna temp: "<<minOperTemp<<endl;
			os<<"max operativna temp: "<<maxOperTemp<<endl;
			if(provera())
				os<<"proizvod je defektan"<<endl;
			else
				os<<"proizvod nije defektan"<<endl;
		}
		friend ostream& operator<<(ostream& os, const Otpornik& o){
			o.ispisiProizvod(os);
			return os;
		}
};
template <typename T>
class Traka{
	private:
		t* *proizvodi;
		int maxProizvoda;
		int trenProizvoda;
		string *dodatniNiz;
		int maxDodatni;
		int trenDodatni;
	public:
		Traka(int mp, int md){
			maxProizvoda=mp;
			proizvodi= new T*[maxProizvoda];
			trenProizvoda=0;
			maxDodatni=md;
			dodatniNiz=new string[maxDodatni];
			trenDodatni=0;
		}
		void dodaj(T* p){
			if(trenProizvoda>=maxProizvoda)
				maxProizvoda*=2;
			proizvodi[trenProizvoda++]=p;
		}
		T* brisi(){
			if(trenProizvoda==0){
				cout<<"traka je prazna"<<endl;
				return (*prizvodi[i]);
			}
			else{
				T* temp=proizvodi[trenProizvoda-1];
				for(int i=0;i<trenProizvoda;i++)
					(*proizvodi[i])=(*proizvodi[i+1]);
				dodatniNiz[trenDodatni++]=temp->getBarKod();
				return temp;
			}
		}
};

