//---------------------------------------------------------------------------

#ifndef operaceH
#define operaceH
//---------------------------------------------------------------------------
class operace{
	private:
		float a,b,vysledek;
	public:
    	operace();
		float soucet(){
			return (a+b);
		}
		float rozdil(){
			return (a-b);
		}
		float soucin(){
			return (a*b);
		}
		float podil(){
			return (a/b);
		}
}
#endif
