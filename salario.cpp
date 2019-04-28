//codigo hecho por william alfredo vasuqez flores
//carnet VF18003
#include <iostream>
#include <string>


using namespace std ;


class deducciones{

	private :
		string tipo ;
		float total ; 
		int cod ;
	//virtual float calculo ();(esta wevada no furula ).
	
	
	//codigo get y set paara los atributos 	
	public :
		deducciones (){}
	void setcodigo (int c){
	this -> cod=c;
	}
	
	int getcodigo (){
	return this -> cod;
	}	

	void settipo ( string t){
	this -> tipo = t;	
	}

	string gettipo (){
	return this -> tipo;
	}
	
	void settotal (float tot){
	this -> total = tot;
	}
	
	float gettotal (){
	return this -> total;
	}	
	
		virtual float getcalculo (float salario)=0;
		~deducciones (){}
};
//hace falta keny :(
class interface {
	public:
	 interface (){}
	virtual float getcalculo (float salario)=0;
	~interface (){}
};

class ISSS : public interface {
	public:
		ISSS (){}
	float getcalculo(float salario){
		
		float isss = 0;
		if (salario >600){
			isss = 600 *0.03f;
		}
		else 	{
			isss = salario *0.03f;
		}
		return isss;
		
		}
			~ISSS(){}	
};
class afp : public interface {
	public:
		afp (){}
	float getcalculo(float salario){
		
		float afp = 0;
		if (salario >600){
			afp = 600 *0.725f;
		}
		else 	{
			afp = salario *0.0725f;
		}
		return afp;
		
		}
			~afp(){}	
};
int main (){
system ("color 0a");
ISSS *d=new ISSS();
cout <<"total ISSS: "<<d->getcalculo(400)<<endl;
afp *f=new afp();
cout << "total afp:"<<d->getcalculo(400)<<endl;
system ("pause");


return 0;
}
