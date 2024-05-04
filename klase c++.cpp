#include <iostream>
#include <string.h>
#include <stdbool.h>
enum ZANR {POP, REP, ROK}; //enumerator vraca indeks a ne rec, to resevamo pomocu pomocne metode, 
//nadjiZanr ili static zanrovi
#define MAX 100
enum FINANSIRANJE {SAMOFINANSIRANJE, BUDZET};
#include <math.h>
using namespace std;
//1.
/*class Tacka{
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

int main(int argc, char** argv) {
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
//kreirati klasu post koja ima atribute naslov, opis, vremedatumkreiranja, rejting. metode inicijalizacija, 
//inkrementiranje, dekrementiranje, ispis.post treba da ilustruje post na stackoverflow portalu
//2. 
class Post{
	public:
		char naslov[200];
		char opis[255];
		char vremedatumkreiranja[25];
	private: 
		int rejting;
	public:
	void inicijalizacija(char *n, char *o, char *vd){
		strcpy(naslov,n);
		strcpy(opis,o);
		strcpy(vremedatumkreiranja,vd);
		rejting=0;
	}
	void inkrementiranje(){
		rejting++;
	}
	void dekrementiranje(){
		rejting--;
	}
	void ispis(){
		cout<<"naslov posta je "<<naslov<<endl;
		cout<<"opis posta je "<<opis<<endl;
		cout<<"vreme datum kreiranja posta je "<<vremedatumkreiranja<<endl;
		cout<<"rejting posta je "<<rejting<<endl;
	}
};
int main(){
	Post p1, p2;
	p1.inicijalizacija("kako printati poruku u c++"," korisit iostream biblioteku", " 15.03.2023 9:02");
	p2.inicijalizacija("kako poloziti ispit"," vezbaj 2-3 sata dnevno", " 04.03.2023 6:02");
	for(int i=1;i<=10;i++)
		p1.inkrementiranje();
	for(int i=1;i<=3;i++)
		p1.dekrementiranje();
	for(int i=1;i<=10;i++)
		p2.inkrementiranje();
	for(int i=1;i<=64;i++)
		p2.dekrementiranje();
	p1.ispis();
	p2.ispis();
}
//3.
class Trougao{
	private: 
		float a;
		float b;
		float c;
	public:
	void inicijalizacija(float a, float b, float c){
		this->a=a;
		this->b=b;
		this->c=c;
	}
	void pisi(){
		cout<<"podaci za a, b, c: "<<a<<b<<b<<endl;
	}
	float p(){
		float s=poluobim();
		return sqrt(s*(s-a)*(s-b)*(s-c));
	}
	float o(){
		return a+b+c;
	}
	bool provera(){
		if(a+b>c && a+c>b && b+c>a){
			return true;
		}
		return false;
	}
	private: 
	float poluobim(){
		return (a+b+c)/2;
	}
};
int main(){
	Trougao t;
	float a, b, c;
	while(1){
	cout<<"unesite stranice trougla"<<endl;
	cin>>a>>b>>c;
	t.inicijalizacija(a, b, c);
	if(t.provera() == true){
		cout<<"obim trougla je "<<t.o()<<endl;
		cout<<"povrsina trougla je "<<t.p()<<endl;
		break;
	}
	else
		cout<<"od unetih stranica nije moguce kreirati trougao"<<endl;
	}
	return 0;
}
//4.
class Auto{
	public:
	float rezervoar;
	float potrosnja;
	public:
		void inicijalizacija(float rezervoar, float potrosnja){
			this->rezervoar=rezervoar;
			this->potrosnja=potrosnja;
		}
		void predji(float km){
			if(rezervoar>=potrebnogoriva(km))
			rezervoar-=km*potrosnja/100;
			else
			cout<<"nemate dovoljno goriva za ovaj put"<<endl;
		}
		void ispis(){
			cout<<"nas auto ima "<<rezervoar<<"goriva u sebi, a trosi "<<potrosnja<<" litara na 100km"<<endl;
		}
		void adresa(){
			cout<<"nas objekat se nalazi na adresi "<<this<<endl;
		}
		private:
			float potrebnogoriva(float km){
				return km*potrosnja/100;
			}
};
int main(){
	Auto a;
	a.inicijalizacija(20.74, 7.5);
	a.ispis();
	a.predji(56);
	a.ispis();
	a.predji(60);
	a.ispis();
	a.predji(300);
	a.ispis();
	return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//konstuktori i destruktori
//1.
class Tacka{
	public:
		int x;
		int y;
	public:
		Tacka(){
			x=2;
			y=5;
			cout<<"pozvao se konstruktor klase tacka"<<endl;
		}
		void ispis(){
			cout<<"x="<<x<<" y="<<y<<endl;
		}
};
int main(){
	Tacka t, t1;
	t1.ispis();
	t.ispis();
	return 0;
}
*/
//2.
/* realizovati klasu student koja ima privatne atribute ime, prezime i broj indeksa. metode: konstruktor 
bez argumenata, konstruktor sa 3 argumenta, ispis koja ispisuje vrednosti atributa.destruktor koji ispisuje
da se pozvao destruktor.*/
/*
class Student{
	private:
		char ime[20];
		char prezime[20];
		char brindeksa[10];
	public:
		Student(){
			strcpy(ime,"Hamza");
			strcpy(prezime,"Gorcevic");
			strcpy(brindeksa,"036116/22");
			cout<<"pozvao se konstruktor bez argumenata klase student"<<endl;
		}
		Student(char *i, char *p, char *bi){
			strcpy(ime,i);
			strcpy(prezime,p);
			strcpy(brindeksa,bi);
			cout<<"pozvao se konstruktor sa argumentima klase student"<<endl;
		}
		void ispis(){
			cout<<"podaci o studentu su: "<<ime<<" "<<prezime<<" "<<brindeksa<<endl;
		}
		~Student(){
			cout<<"pozvao se destruktor klase student"<<endl;
		}
};
int main(){
	Student s1;	//pozvace konstruktor bez argumenata
	Student s2("Kaid","Avdic", "036016"); ////pozvace konstruktor sa argumentima
	s1.ispis();
	s2.ispis(); 
	return 0;
}

//3.
class Stack{
	private:
		char *s;
		int max_len;
		int top;
	public:
		Stack(int duzina=10){
			max_len=duzina;
			s= new char[max_len];
			top=-1;
		}
		Stack(const char niz[], int duzina){ //const da smo sigurni da nam se taj broj nece promeniti
			max_len=duzina;
			s= new char[max_len];
			for(int i=0;i<duzina;i++)
				s[i]=niz[i];
			top=max_len-1;
		}
		Stack(const Stack &st){
			max_len=st.max_len;
			s= new char(max_len);					//konstruktor kopiranja
			for(int i=0;i<st.max_len;i++)
				s[i]=st.s[i];
			top=st.top;	
		}
		void reset(){
			top=-1;
		}
		void push(char c){
			if(top<max_len-1){
			top++;
			s[top]=c;
			}
			else 
				cout<<"stek je pun, ne mozete dodavati nove elemente"<<endl;
		}
		char pop(){
			if(top>-1){
			char c=s[top];
			top--;
			return c;
			}
			return ' ';
		}
		char top_of(){
			if(top>-1){
			char c=s[top];
			return c;
			}
			return ' ';
		}
		bool empty(){
			if(top==-1)
				return true;
			return false;
		}
		bool full(){
			if(top==max_len-1)
				return true;
			return false;
		}
		~Stack
};
int main(){
	Stack s1(5), s2("ABCD", 4);
	for(int i=0;i<4;i++){
		cout<<"unesite elemnt koji zelite da dodate u prvi stek"<<endl;
		char c;
		cin>>c;
		s1.push(c);
	}
	cout<<"na vrhu prvog steka nalazi se "<<s1.top_of()<<endl;
	cout<<"na vrhu drugog steka nalazi se "<<s2.top_of()<<endl;
	if(s1.full()){
		cout<<"prvi stek je pun"<<endl;
	}
	else
		cout<<"prvi stek nije pun"<<endl;
	while(!s1.empty()){
		cout<<"element iz prvog steka je: "<<s1.pop()<<endl;
	}
	
	return 0;
}

//4.
class Fibonaci{
	public:
		int n;
		int *niz;
	public: 
		Fibonaci(){
			n=10;
			postavi();
		}
		Fibonaci(int n){
			this->n=n;
			postavi();
		}
		Fibonaci(const Fibonaci &f){
			n=f.n;
			for(int i=0;i<n;i++)
				niz[i]=f.niz[i];
		}
		int suma(){
			int s=0;
			for(int i=0;i<n;i++)
				s+=niz[i];
			return s;
		}
		int vrednost(int i){
			if(i>-1 && i<n)
			return niz[i];
			else cout<<"ne postoji element na "<<i<<" indeksu"<<endl;
			return 0;
		}
		void prosiri(int x){
			n=x;
			delete [] niz;
			postavi();
		}
		void ispis(){
			cout<<"prvih"<<n<<"elemenata fibonacijevog niza su"<<endl;
			for(int i=0;i<n;i++)
				cout<<niz[i]<<" ";
			cout<<endl;
		}
		~Fibonaci(){
			delete [] niz;
		}
		private:
			void postavi(){
				niz=new int[n];
				niz[0]=1;
				niz[1]=1;
				for(int i=2;i<n;i++)
					niz[i]=niz[i-1]+niz[i-2];
			}
};
int main(){
	Fibonaci f1,f2(10);
	cout<<"suma elemenata prvog fibonacijevog niza iznosi "<<f1.suma()<<endl;
	f1.prosiri(15);
	Fibonaci f3(f1); //pozivanje kopi konstruktora
	f3.ispis();
	f1.ispis();
	f2.ispis();
	return 0;
}

class Odeljenje{
	private:
		int brucenika;
		float *uspeh;
	public: 
		
		Odeljenje(int br=10){
		brucenika=br;
		uspeh=new float[br];
		cout<<"unesite uspehe ucenika"<<endl;
		for(int i=0;i<br;i++)
			cin>>uspeh[i];	
		}
		Odeljenje(const Odeljenje &o){
			brucenika=o.brucenika
			for(int i=0;i<brucenika;i++)
				uspeh[i]=o.uspeh[i];
		}
		float prosek(){
			float s=0;
			for(int i=0;i<brucenika;i++)
				s+=uspeh[i];
			return s/brucenika;
		}
		int brodlican5(){
			int br=0;
			for(int i=0;i<brucenika;i++){
				if(uspeh[i]==5.00)
				br++;
			}
			return br;
		}
		void ispis(){
			int brn=0, brd=0, brdo=0, bro=0;
			for(int i=0;i<brucenika;i++){
				brn+=(uspeh[i]<1.5)? 1 : 0;
				brd+=(uspeh[i]>=1.5 && uspeh[i]<2.5)? 1 : 0;
				brdo+=(uspeh[i]>=2.5 && uspeh[i]<3.5)? 1 : 0;
				bro+=(uspeh>=4.5)? 1 : 0;
			}
			cout<<"broj nedovoljnih je "<<brn<<endl;
			cout<<"broj dovoljnih je "<<brd<<endl;
			cout<<"broj dobrih je "<<brdo<<endl;
			cout<<"broj odlicnih je "<<bro<<endl;
			cout<<"prosek odeljenja je"<<prosek()<<endl;
		}
		void uspehucenika(int i, float u){
			if(i<brucenika && i>-1){
				uspeh[i]=u;
			}
		}
		void dodajucenika(float u){
			float *p;
			p=new float [brucenika];
			for(int i=0;i<n;i++)
			p[i]=uspeh[i];
			delete [] uspeh;
			brucenika++
			uspeh=new float[brucenika];
			for(i=0;i<brucenika-1;i++)
			uspeh[i]=p[i];
			uspeh[brucenika-1]=u;
			delete [] p;
		}
		//desturktor
};
int main(){
	
}

class Prava{
    float x1, y1, x2, y2, d;
    public:
    Prava(){
        x1=2; y1=2; x2=5; y2=2;
    }
    Prava(float x1, float y1, float x2, float y2){
        this->x1=x1; this->y1=y1; this->x2=x2; this->y2=y2;
    }
    void racunajDuzinu(){
        d=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    }
    void ispis(){
        cout<<"duzina je "<<d<<endl;
        cout<<"koordinate pocetne tacke su "<<x1<<", "<<y1<<endl;
        cout<<"koordinate krajnje tacke su "<<x2<<", "<<y2<<endl;
    }
    void setX1(float v){x1=v;}
    void setY1(float v){y1=v;}
    void setX2(float v){x2=v;}
    void setY2(float v){y2=v;}
    float getX1(){return x1;}
    float getY1(){return y1;}
    float getX2(){return x2;}
    float getY2(){return y2;}
    float getD(){return d;}
};  
class Kvadrat{
    public:
    Prava vrh, dno;
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
        dno.setX1(d.getX1());
        dno.setY1(d.getY1());
        dno.setX2(d.getX2());
        dno.setY2(d.getY2());
        vrh.racunajDuzinu();
        dno.racunajDuzinu();
    }
   
    float Povrsina(){
        return pow(vrh.getD(),2);
    }
    float Obim(){
        return  (4*vrh.getD());
    }
    void Ispis(){
        cout<<"vrh kvadrata "<<endl;
        vrh.ispis();
        cout<<"dno kvadrata "<<endl;
        dno.ispis();
    }
};
int main()
{
    Kvadrat k;
    cout<<"povrsina kvadarata iznosi "<<k.Povrsina()<<endl;
    cout<<"obim kvadarata iznosi "<<k.Obim()<<endl;
    k.Ispis();
    return 0;
}

class Ocena{
  char ime_predmeta[20];
  int ocena;
  char datum[15];
  public:
  Ocena(){
      strcpy(ime_predmeta, "OOP1");
      ocena=10;
      strcpy(datum, "04.04.2023.");
  }
  Ocena(char *ip, int o, char *d){
      strcpy(ime_predmeta, ip);
      ocena=o;
      strcpy(datum, d);
  }
  bool jeLiPolozio(){
      //return (ocena>5);    //najkraci nacin
      if(ocena>5){
          return true;
      }
      return false;
  }
  void ispis(){
      cout<<"student je dobio ocenu "<<ocena<<", na predmetu "<<ime_predmeta<<"datuma "<<datum<<endl;
     
  }
 
 void setIP(char *ip){ strcpy(ime_predmeta, ip);}
 void setOcena(int o){ocena=o;}
 void setDatum(char *d){ strcpy(datum, d);}
 char* getIP(){return ime_predmeta;}
 int getOcena(){return ocena;}
 char *getDatum(){return datum;}
};

class Student{
    char ime_prezime[20];
    char broj_indeksa[15];
    Ocena ocena1, ocena2, ocena3;
    public:
    Student (char *ip, char *bi, Ocena o1, Ocena o2, Ocena o3){
        strcpy(ime_prezime, ip);
        strcpy(broj_indeksa, bi);
        ocena1.setIP(o1.getIP());
        ocena1.setOcena(o1.getOcena());
        ocena1.setDatum(o1.getDatum());
       
        ocena2.setIP(o2.getIP());
        ocena2.setOcena(o2.getOcena());
        ocena2.setDatum(o2.getDatum());
       
        ocena3.setIP(o3.getIP());
        ocena3.setOcena(o3.getOcena());
        ocena3.setDatum(o3.getDatum());
       
    }
    int ukupnoPolozenih(){
        int br=0;
        if(ocena1.jeLiPolozio()==true)
            br++;
        br=(ocena2.jeLiPolozio()==true)? br +1 :br;
        if(ocena3.jeLiPolozio()==true)
            br++;
    }
    float Prosek(){
        int suma=0;
        if(ocena1.jeLiPolozio()==true)
        suma+=ocena1.getOcena();
        suma=(ocena2.jeLiPolozio()==true)? suma+ocena2.getOcena() : suma;
        if(ocena3.jeLiPolozio()==true)
        suma+=ocena3.getOcena();
        return (float)suma/ukupnoPolozenih();
    }
    void ispis(){
        cout<<"student "<<ime_prezime<<" sa brojem indeksa "<<broj_indeksa<<" ima ocene"<<endl;
        ocena1.ispis();
        ocena2.ispis();
        ocena3.ispis();
    }
};
int main(){
    Ocena o1, o2("OP", 9, "15.1.2023."), o3("OR", 5, "17.1.2023.");
    Student s("Dzemil Manic", "036013", o1, o2, o3);
    cout<<"student je polozio "<<s.ukupnoPolozenih()<<" ispita"<<endl;
    cout<<"student ima prosek"<<s.Prosek()<<endl;
    return 0;
}

class Poklon{
    float cena;
    int id;
    public:
    static int brojac;
    public:
    Poklon(float c){
        cena=c;
        brojac++;
        id=brojac;
    }
    Poklon(const Poklon &p){
        cena=p.cena;
        brojac++;
        id=brojac;
    }
    void Ispis(){
        cout<<id<<"("<<cena<<")"<<endl;
    }
};
int Poklon::brojac=0;
int main(){
    Poklon p1(500), p2(1000), p3(900);
    Poklon p4(p1);
    p1.Ispis();
    p2.Ispis();
    p3.Ispis();
    p4.Ispis();
    cout<<"broj kreiranih objekata klase poklon iznosi "<<Poklon::brojac<<endl;
    return 0;
}

class Student{
    string ime;
    int indeks;
    FINANSIRANJE finansiranje;
    float prosek;
    string nadjiFinansiranje(){
        switch(finansiranje){
            case 0: return "SAMOFINANSIRANJE";
            case 1: return "BUDZET";
        }
        return "GRESKA";
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
    string getIme() const{return ime;}
    int getIndeks(){return indeks;}
    float getProsek(){return prosek;}
    FINANSIRANJE getFinansiranje(){return finansiranje;}
    void setIndeks(int value){indeks=value;}
   
    void Dodaj(int ocena){
        if(ocena>5 && ocena <=10){
            prosek=(prosek!=0)?(prosek+ocena)/2:ocena;
        }
        else{
            cout<<"ocena nije validna"<<endl;
        }
    }
    void Ispis(){
        cout<<indeks<<" - "<<ime<<"("<<nadjiFinansiranje()<<")/"<<prosek<<endl;
    }
};

class StudijskiProgram{
    string naziv;
    int max;
    Student *studenti;
    int br;
    float getProsekSP(){
        float s=0;
        for(int i=0;i<br;i++){
            s+=studenti[i].getProsek();
        }
        return s/br;
    }
    public:
    StudijskiProgram(string n, int m){
        naziv=n;
        max=m;
        studenti=new Student[MAX];
        br=0;
    }
    void DodajStudenta(Student *s){
        if(br<max){
            int brojIndeksa=(br>0) ? studenti[br-1].getIndeks() + 1 :1;
            studenti[br]=*s;
            studenti[br].setIndeks(brojIndeksa);
            br++;
        }
        else{
            cout<<"nema slobodnog mesta za novog studenta"<<endl;
        }
    }
    void BrisiStudenta(){
        if(br>0){
            br--;
        }
    }
    friend bool Bolji(const StudijskiProgram &sp1, const StudijskiProgram &sp2){
        if(sp1.getProsekSP()>sp2.getProsekSP())
            return true;
        return false;
    }
    void Ispis(){
        cout<<naziv<<endl;
        for(int i=0;i<br;i++)
            studenti[i].Ispis();
        cout<<"na SP ima "<<br<<" studenata i prosek SP je"<<getProsekSP()<<endl;
    }
    ~StudijskiProgram(){
        delete []studenti;
    }
};
int main()
{
    Student s1, s2("Dzemil", BUDZET), s3("Ilhan", SAMOFINANSIRANJE), s4("Hamza", BUDZET);
    StudijskiProgram sp1("SI", 60), sp2("RT", 100);
    s1.Dodaj(10);
    s1.Dodaj(7);
    s2.Dodaj(9);
    s4.Dodaj(8);
    sp1.DodajStudenta(&s1);
    sp1.DodajStudenta(&s2);
    sp1.DodajStudenta(&s4);
    s3.Dodaj(9);
    sp2.DodajStudenta(&s3);
    if(Bolji(sp1, sp2)==true){
        cout<<"SI je boji od RTa"<<endl;
    }
    else{
        cout<<"RT je bolji od SIa"<<endl;
    }
    return 0;
}

class Vektor{
    private:
    int v[3];
    public:
    Vektor(int niz[3]){
        for(int i=0;i<3;i++){
            v[i]=niz[i];
        }
    }
   
    void setX(int value){v[0]=value;}
    void setY(int value){v[1]=value;}
    void setZ(int value){v[2]=value;}
   
    int getX(){return v[0];}
    int getY(){return v[1];}
    int getZ(){return v[2];}
   
    Vektor Dodaj(const Vektor v2){
        Vektor v3= *this;
        for(int i=0;i<3;i++){
            v3.v[i]+=v2.v[i];
        }
        return v3;
    }
   
    Vektor Pomnozi(int k){
        Vektor v3= *this;
        for(int i=0;i<3;i++){
            v3.v[i]*=k;
        }
        return v3;
    }
   
    Vektor operator +(Vektor v2){
        Vektor v3= *this;
        for(int i=0;i<3;i++){
            v3.v[i]+=v2.v[i];
        }
        return v3;
    }
   
    Vektor operator *(int k){
        Vektor v3= *this;
        for(int i=0;i<3;i++){
            v3.v[i]*=k;
        }
        return v3;
    }
   
    Vektor operator ++(){
        for(int i=0;i<3;i++){
            v[i]++;
        }
        return *this;
    }
   
    Vektor operator ++(int){            //int u zagradi zbog prefiksnog inkrementiranja
        Vektor v3= *this;
        for(int i=0;i<3;i++){
            v[i]++;
        }
        return v3;
    }
   
    const Vektor & operator =(const Vektor & v2){
        if(&v2==this){
            return *this;
        }
        for(int i=0;i<3;i++){
            v[i]=v2.v[i];
        }
        return *this;
    }
   
    Vektor operator -(){            
        Vektor v3= *this;
        for(int i=0;i<3;i++){
            v3.v[i]*=-1;
        }
        return v3;
    }

    int & operator [](int i){
        return v[i];
    }
   
    void Ispis(){
        cout<<"elementi vektora su v(";
        for(int i=0;i<3;i++){
            cout<<v[i]<<",";
        }
        cout<<")"<<endl;
    }
};

int main()
{
    int vv1[3]={1,5,3};
    int vv2[3]={4,6,4};
    int k=3;
    Vektor v1(vv1), v2(vv2);
    Vektor v3=v1+v2; //v1.Dodaj(v2);
    Vektor v4=v1*k; //v1.Pomnozi(k);
    v1.Ispis();
    v2.Ispis();
    v3.Ispis();
    v4.Ispis();
    return 0;
}

class Razlomak{
    private:
    int broj;
    int imen;
    public:
    void Skrati(){
        int min=broj;
        if(min>imen){
            min=imen;
        }
        for(int i=min;i>1;i--){
            if(broj%i==0 && imen%i==0){
                broj/=i;
                imen/=i;
            }
        }
    }
   
    Razlomak(int a, int b){
        broj=a;
        imen=b;
    }
   
    void setBroj(int value){broj=value;}
    void setImen(int value){imen=value;}
    int getBroj(){return broj;}
    int getImen(){return imen;}
   
    Razlomak operator +(Razlomak r1){
        Razlomak r2(broj*r1.imen+r1.broj*imen, imen*r1.imen);
        r2.Skrati();
        return r2;
    }
    Razlomak operator *(int k){
        Razlomak r2= *this;
        r2.broj*=k;
        return r2;
    }
    Razlomak operator ++(){
        broj++;
        imen++;
        Skrati();
        return *this;
    }
    Razlomak operator ++(int){
        Razlomak r1= *this;
        r1.broj++;
        r1.imen++;
        r1.Skrati();
        return r1;
    }
    Razlomak operator -(){
        Razlomak r1= *this;
        r1.broj*=-1;
        return r1;
    }
   
    Razlomak & operator =(const Razlomak &r1){
        if(&r1==this){
            return *this;
        }
        broj=r1.broj;
        imen=r1.imen;
        return *this;
    }
    friend ostream & operator <<(ostream& out, Razlomak &r){
        out<<r.broj<<"/"<<r.imen<<endl;
        return out;
    }
    friend istream & operator >>(istream& in, Razlomak &r){
        cout<<"unesite broj i imen"<<endl;
        in>>r.broj>>r.imen;
        return in;
    }
/*    bool operator ==(Razlomak r1){
        if(r1.imen==imen && r1.broj==broj){
            return true;
        }
        return false;
    }   
   
    void Ispis(){
        cout<<broj<<"/"<<imen<<endl;
    }

};
int main(){
    Razlomak r1(1,2), r2(3,2);
    Razlomak r3=r1+r2;
    Razlomak r4=r1*5;
    cout<<r1;
    cout<<r2;
    cout<<r3;
    cout<<r4;
    return 0;
}

class Kvadar{
    protected:
    int a, b, c;
    public:
    Kvadar(int a, int b, int c){
        this->a=a;
        this->b=b;
        this->c=c;
        cout<<"pozvao se konstruktor sa argumentima klase kvadar"<<endl;
       
    }
    Kvadar(){
        a=5;
        b=10;
        c=4;
        cout<<"pozvao se konstruktor bez argumenata klase kvadar"<<endl;
    }
    void Ispis(){
        cout<<"dimenzije kvadra su: "<<a<<","<<b<<","<<c<<endl;
    }
};
class Bazen : Kvadar{
    protected:
    int d;
    public:
    Bazen() // :Kvadar(10,50,10)
    {
        d=3;
        cout<<"pozvao se konstruktor bez argumenata klase bazen"<<endl;
    }
    void Ispis(){
        Kvadar::Ispis();
        cout<<"dubina napunjena vodom je "<<d<<endl;
    }
};
int main()
{
    Kvadar k;
    Bazen b;
    k.Ispis();
    b.Ispis();
    return 0;
}

class Datum{
    public:
    int d, m, g;
    public:
    Datum(){
        d=1;
        m=1;
        g=2023;
    }
    Datum(int d, int m, int g){
        this->d=d;
        this->m=m;
        this->g=g;
    }
    void Ispis(){
        cout<<"danas je "<<d<<"."<<m<<"."<<g<<"."<<endl;
    }
    // vratiti broj dana izmedju dva datuma, probaci kuci
    //preklopiti operatore == koji ce vratiti informaciju da li su dva datuma jednaka
    Datum Uporedi(Datum dat){
        Datum r;
        if(d>dat.d){
            r.d=d-dat.d;
        }
        else{
            m--
            switch(m){
                case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                    d+=31;
                    break;
                case 4: case 6: case 9: case 11:
                    d+=30;
                    break;
                case 2:
                d+=((g%4==0 && g%100!=0)|| g%400==0)? 2 9:20;
                break;
            }
            r.d=d-dat.d
        }
        if(m>dat.m){
            r.m=m-dat.m;
        }
        else{
            g--;
            m+=12;
            r.m=m-dat.m;
        }
        if(g>=dat.g){
            r.g=g-dat.g;
        }
        else
            cout<<"datum koji je doao kao argument je vefci od trenutnig datuma i ije moguice izracunati razliku"<<endl;
        return r;
    }
};
class Rodjendan : Datim{
    public:
    string ime, prezime;
    public:
    Rodjendan() :Datum(24,4,2005)
    {
        ime= "Dzemil";
        prezime="Manic";
    }
    bool DaliJe(Datum dt){
        Datum razlika=Uporedi(dt);
        if(razlika.d==0 && razlika.m==0)
            return true;
        return false;
    }
    void IspisSlavljenika(Datum dt){
        if(DaliJe(dt)==true)
            cout<<ime<<" "<<prezime<<"danas slavi rodjendan"<<endl;
        else{
            Datum razlika=Uporedi(dt);
            cout<<"do rodjendana ima jos "<<razlika.d<<" dana i "<<razlika.m<<" meseci"<<endl;
        }
    }
    int Godine(Datum dt){
        Datum razlika=Uporedi(dt);
        return razlika.g;
    }
};
int main()
{
   
}

*/

